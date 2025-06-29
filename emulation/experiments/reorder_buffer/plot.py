import os
import matplotlib.pyplot as plt
from collections import defaultdict

#####################
# Parse Data
#####################

RESULTS_DIR = "results"
PLOT_DIR = "plots"
os.makedirs(PLOT_DIR, exist_ok=True)

# Data structure: data[throughput_label][paging_label] = list of (x_axis, min, avg, max)
data = defaultdict(lambda: defaultdict(list))

# Loop over each X_AXIS_VALUE (folder)
for x_axis_value in sorted(os.listdir(RESULTS_DIR), key=lambda x: float(x)):
    folder_path = os.path.join(RESULTS_DIR, x_axis_value)
    if not os.path.isdir(folder_path):
        continue

    for filename in os.listdir(folder_path):
        if not filename.startswith("EXP_"):
            continue
        try:
            parts = filename.replace("EXP_", "").split("_")
            throughput_label = parts[0]+parts[1]
            paging_label = parts[2] + parts[3] + parts[4] if parts[3] != "BALANCED" else parts[2] + parts[3]
        except (IndexError, ValueError):
            print(f"[WARNING] Skipping file {filename}")
            continue

        file_path = os.path.join(folder_path, filename)
        try:
            with open(file_path, "r") as f:
                line = f.read().strip()
                min_v, avg_v, max_v = map(float, line.split(","))
                data[throughput_label][paging_label].append(
                    (float(x_axis_value), min_v, avg_v, max_v)
                )
        except Exception as e:
            print(f"[ERROR] Failed reading {file_path}: {e}")


#####################
# Plotting
#####################

import matplotlib.ticker as ticker

fig, axs = plt.subplots(1, len(data), figsize=(12, 6), sharey=True)
if len(data) == 1:
    axs = [axs]  # Ensure iterable

# Collect line handles for shared legend
line_handles = {}
all_x_labels = sorted(os.listdir(RESULTS_DIR), key=lambda x: float(x))

for ax, (throughput_label, series_dict) in zip(axs, data.items()):
    for float_value, points in sorted(series_dict.items()):
        # Sort and prepare data
        points.sort(key=lambda x: x[0])
        x_vals = [str(int(x[0])) for x in points]  # Discrete labels
        avg_vals = [x[2] for x in points]

        # Convert x_vals to indexes for plotting
        x_indices = list(range(len(x_vals)))

        # Plot AVG only
        line, = ax.plot(x_indices, avg_vals, label=f"{float_value}", marker='o', markersize=8)
        line_handles[float_value] = line

    # Format subplot
    ax.set_title("High Throughput" if "HIGH" in throughput_label else "Low Throughput")
    ax.set_xticks(range(len(all_x_labels)))
    ax.set_xticklabels(all_x_labels)
    ax.set_xlabel("Memory Buffers Depth")
    
    # Y-axis ticks every 1.0 and matching horizontal grid lines
    ax.yaxis.set_major_locator(ticker.MultipleLocator(1))
    ax.yaxis.set_major_formatter(ticker.FuncFormatter(lambda y, _: f"{y:.0f}x"))
    ax.grid(True, axis='y', which='major')


axs[0].set_ylabel("Overhead")

# Global legend
fig.legend(
    handles=[line_handles[v] for v in sorted(line_handles)],
    labels=[str(v) for v in sorted(line_handles)],
    title="Float Value",
    loc="upper center",
    ncol=len(line_handles),
    bbox_to_anchor=(0.5, 1.05)
)

plt.suptitle("Experiment Results", y=1.15)
plt.tight_layout()
plt.subplots_adjust(top=0.85)

# Save plot
plot_path = os.path.join(PLOT_DIR, "results_plot.png")
plt.savefig(plot_path, dpi=300, bbox_inches='tight')
print(f"[DONE] Plot saved to {plot_path}")

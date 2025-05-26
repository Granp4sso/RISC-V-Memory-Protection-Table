#ifndef LOGGER
#define LOGGER

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

void log_open(FILE * logfile);
void log(FILE * logfile, char * txt);
void log_close(FILE * logfile);

#endif
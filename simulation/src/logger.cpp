#include "logger.h"


void log_open(FILE * logfile){
    printf("[Logger\t] opening logfile\n");

    logfile = fopen("logfile","w+");
    if(!logfile){
        printf("[Logger\t] ERROR: logfile not opened\n");
        exit(-1);
    }

    printf("[Logger\t] logfile prepared\n");
}
void log(FILE * logfile, char * txt){

}

void log_close(FILE * logfile){

    fclose(logfile);
}
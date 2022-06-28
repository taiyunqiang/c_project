#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <pthread.h>
#include <linux/can.h>
#include <sys/time.h>

pthread_mutex_t aa;

void printf_int(int port) {
    printf("------------%d\n", port);
}

void printf_char(char* ip) {
    printf("-------------%s\n",ip);
}

int main()
{
    char param[] = "192.168.0.1:8000";
    char* ip = strtok(param, ":");
    char* port = strtok(NULL, ":"); 
    printf("ip %s, port %s \n", ip, port);    

    printf_char(ip);
    printf_int(strtol(port, NULL, 10));
    struct timeval ts;
    struct timezone tz;
    gettimeofday(&ts, &tz);
    printf("------------------");
}
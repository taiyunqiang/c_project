#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <pthread.h>
#include <linux/can.h>
#include <sys/time.h>

#include "basic.h"

pthread_mutex_t aa;

int main()
{
    char param[] = "192.168.0.1:8000";
    char* ip = strtok(param, ":");
    char* port = strtok(NULL, ":"); 
    printf("ip %s, port %s \n", ip, port);    

    printf_char(ip);
    printf_int(strtol(port, NULL, 10));

    printf_int(add(1,2));
    //time 
    struct timeval ts;
    struct timezone tz;
    gettimeofday(&ts, &tz);
    printf("---------------------");

    uint8_t a[3] = {0,1,2};
    u_int64_t b = 0;
    u_int32_t c = 0;
    
    test_type(a,&b,&c);
    printf("------------%d---%d",b,c);
}
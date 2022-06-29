#include<stdio.h>
#include <stdint.h>

static inline void printf_int(int port) {
    printf("------------%d\n", port);
}

static inline void printf_char(char* ip) {
    printf("-------------%s\n",ip);
}

static void test_type(uint8_t *a, u_int64_t *b, u_int32_t *c)
{
   *b = 1;
   *c =2;
}

static int add(int a, int b)
{
    return a+b;
}

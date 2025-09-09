#include<types.h>
#include<lib.h>
#include<syscall.h>
int sys_print_int(const char str[], int x){
    kprintf("%s %d\n", str, x);
    return 0;
}
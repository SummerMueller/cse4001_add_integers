#include<types.h>
#include<lib.h>
#include<syscall.h>
int sys_add_three_integers(int a, int b, int c, int *retval_ptr){
    *retval_ptr = a + b + c;
    return 0; 
}
/* exec.c
 *	Simple program to test whether running a user program works.
 *	
 *	Just do a "syscall" that shuts down the OS.
 *
 * 	NOTE: for some reason, user programs with global data structures 
 *	sometimes haven't worked in the Nachos environment.  So be careful
 *	out there!  One option is to allocate data structures as 
 * 	automatics within a procedure, but if you do this, you have to
 *	be careful to allocate a big enough stack to hold the automatics!
 */

#include "syscall.h"
int a[3];
int b, c;

int
main()
{
    Exec("../test/matmult",15);
    Exec("Bark", 4);
    /*Exec("../test/halt",12);*/
    /*dont know how to stop exec negative*/
    /* not reached */
}

#include <stdio.h>
#include "Fifo.h"

/** \file fifomain.c
* \brief Implementation of the Fifo app
*
* \author Charalampos Kontis
* \author Evgenia Stavrianidou
* \author Maria Chatzipetrou
* \date 23/03/2022
* \bug There are no bugs
*/

/**
* List of events
*- MyFIFOInit is called with the size to be 5 
*- MyFIFOInsert is called 5 times and it adds 5 elements to the FIFO
*- MyFIFORemove is called 2 times and it removes the 2 oldest elements on the FIFO
*- MyFIFOPeep() is called and returns the oldest element 
*- MyFIFOSize() is called and returns the size of the fifo
*- MyFIFOInsert is called 2 times and it adds 2 elements to the deleted positions of FIFO
*- MyFIFOInsert is called one more time and it returns error because the queue is full
*/

int main(void) {
const char * status;
status = MyFIFOInit(5);
printf("%s \n", status);
status = MyFIFOInsert(25);
printf("%s\n ", status);
status = MyFIFOInsert(59);
printf("%s \n ", status);
status = MyFIFOInsert(27);
printf("%s \n", status);
status = MyFIFOInsert(12);
printf("%s \n", status);
status = MyFIFOInsert(13);
printf("%s \n", status);

status = MyFIFORemove();
printf("%s \n", status);
status = MyFIFORemove();
printf("%s \n", status);


int oldest = MyFIFOPeep();
printf("the oldest element is %d \n", oldest);
int fifosize =MyFIFOSize(); 
printf("the size is %d \n", fifosize);

status=MyFIFOInsert(99);
printf("%s \n ", status);

status = MyFIFOInsert(43);
printf("%s \n", status);
status = MyFIFOInsert(65);
printf("%s \n", status);



return 0;

}
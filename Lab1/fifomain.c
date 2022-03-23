#include <stdio.h>
#include "Fifo.h"

int main(void) {
const char * status;
status = MyFifoInit(5);
printf("%s ", status);
status = MyFifoInsert(25);
printf("%s ", status);
status = MyFifoInsert(25);
printf("%s ", status);
status = MyFIFORemove();
printf("%s ", status);
int oldest = MyFIFOPeep();
printf("%d",oldest);
int fifosize = MyFIFOSize();
printf("%d", fifosize);

return 0;

}
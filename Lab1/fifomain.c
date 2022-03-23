#include <stdio.h>
#include "Fifo.h"

int main(void) {
const char * status;
status = MyFIFOInit(5);
printf("%s ", status);
status = MyFIFOInsert(25);
printf("%s ", status);
status = MyFIFOInsert(59);
printf("%s ", status);
status = MyFIFOInsert(27);
printf("%s ", status);
status = MyFIFOInsert(12);
printf("%s ", status);
status = MyFIFOInsert(13);
printf("%s ", status);

status = MyFIFORemove();
printf("%s ", status);
status = MyFIFORemove();
printf("%s ", status);


status=MyFIFOInsert(99);
printf("%s ", status);

status = MyFIFOInsert(43);
printf("%s ", status);
status = MyFIFOInsert(65);
printf("%s ", status);

status = MyFIFOInsert(80);
printf("%s ", status); 


return 0;

}
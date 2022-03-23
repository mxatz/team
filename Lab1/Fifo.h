/** \file Fifo.h
* \brief Declaration of Fifo's functions
*
* \author Charalampos Kontis
* \author Evgenia Stavrianidou
* \author Maria Chatzipetrou
* \date 23/03/2022
* \bug There are no bugs
*/

const char* MyFIFOInit(int size);
const char* MyFIFOInsert(int num);
const char* MyFIFORemove(void);
int MyFIFOPeep(void);
int MyFIFOSize(void);

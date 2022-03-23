#include <stdio.h>
#include "Fifo.h"
#define maxsize  200  /**<  The maximum size of the Fifo */

/** \file Fifo.c
* \brief Implementation of Fifo's functions using c
*
*
* The functions that were implemented are
* MyFIFOInit(): inits the module
* MyFIFOInsert(): Adds an element to the FIFO
* MyFIFORemove(): Removes an element from the FIFO
* MyFIFOPeep(): Returns the oldest element on the FIFO, but does not remove it
* MyFIFOSize(): Returns the number of elements on the FIFO
* 
*
* \author Charalampos Kontis
* \author Evgenia Stavrianidou
* \author Maria Chatzipetrou
* \date 23/03/2022
* \bug There are no bugs
*/

static int Array[maxsize];  /**<  The Fifo */
static int N;  /**< The size of the Fifo */
static int head;  /**< A pointer that indicates the first empty position of Fifo */
static int tail;  /**< A pointer that indicates the position of the oldest inserted element of Fifo*/

const char* MyFIFOInit(int size) {
/** \brief Initialise the module.
*
*
* \author Charalampos Kontis
* \author Evgenia Stavrianidou
* \author Maria Chatzipetrou

* \param[size] The size of the Fifo requested by the user
* \return "Error" if there is size > maxsize and "Success" if the initialisation was successful.
* \date 23/02/2022
*/
	if (size > maxsize){
		return "Error";
	}
	else {
	N = size;
	head = 0;
	tail = 0;
	return "Success";
	}
}

const char* MyFIFOInsert(int num){
/** \brief Insert an element to the Fifo.
*
* Each time the function inserts the element at the first empty position of the queue.
*
* \author Charalampos Kontis
* \author Evgenia Stavrianidou
* \author Maria Chatzipetrou

* \param[num] The element that will be added to the Fifo requested by the user
* \return "Error" if the queue is full and "Success" if the addition of the element was successful.
* \date 23/02/2022
*/
	int temp =0;
	if(head == N){ 
		
		for (int i=0;i<N;i++){
			temp++;
			if (Array[i]==0){
				head=i;
				Array[head]=num;
				head++;
				for(int k = 0; k < N; k++) {
			printf("%d ", Array[k]);
	}
				return "Success";
			} else if(temp==N){
				return "Error"; 
		 		}
		}

		}else if(Array[head]!=0){return "Error";}
		else{

		Array[head] = num;
		head++;
		for(int i = 0; i < N; i++) {
			printf("%d ", Array[i]);
	}
		return "Success"; }
	
	

}

const char* MyFIFORemove(void){
/** \brief Removes an element from the Fifo.
*
* Each time the function removes the oldest element of the queue.
*
* \author Charalampos Kontis
* \author Evgenia Stavrianidou
* \author Maria Chatzipetrou

* 
* \return "Error" if the queue is empty and "Success" if the removal was successful.
* \date 23/02/2022
*/
	if(head == tail){
		return "Error";
	}
	else{

		Array[tail] = 0;
		tail++;
		for(int i = 0; i < N; i++) {
		printf("%d ", Array[i]);
	}
		return "Success";
	
	}
}

int MyFIFOPeep(void){
/** \brief Returns the oldest element on the FIFO without removing it from the queue.
*
*
* \author Charalampos Kontis
* \author Evgenia Stavrianidou
* \author Maria Chatzipetrou

* 
* \return -1 (Error) if the queue is empty and the oldest element otherwise.
* \date 23/02/2022
*/
	if(head == tail){
		return -1;
	}
	else{
		return Array[tail];
	}
}

int MyFIFOSize(void){
/** \brief Returns the number of elements on the Fifo.
*
*
* \author Charalampos Kontis
* \author Evgenia Stavrianidou
* \author Maria Chatzipetrou

* 
* \return the number of elements on the Fifo.
* \date 23/02/2022
*/
	return head - tail;
}
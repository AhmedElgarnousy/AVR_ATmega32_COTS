/***************************************************************/
/***************************************************************/
/*************   Author: Ahmed Kamal   *************************/
/*************   Layer: RTOS Stack     *************************/
/*************   SWC: RTOS           *************************/
/*************   Version: 1.00           ***********************/
/***************************************************************/
/***************************************************************/

#ifndef RTOS_INTERFACE_H_
#define RTOS_INTERFACE_H_

void RTOS_voidStart(void);

void RTOS_voidCreateTask(u8 Copy_u8Priority, u16 Periodicity, void(*Copy_pvTaskFunc)(void));



#endif
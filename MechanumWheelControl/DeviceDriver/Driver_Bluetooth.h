/*
 * Driver_Bluetooth.h
 *
 * Created on: 2024. 5. 14.
 * Author: chanik
 */

#ifndef DEVICEDRIVER_DRIVER_BLUETOOTH_H_
#define DEVICEDRIVER_DRIVER_BLUETOOTH_H_

/***********************************************************************/
/*Include*/
/***********************************************************************/
#include "Ifx_Types.h"
#include "IfxAsclin_Asc.h"
#include "IfxPort.h"
#include "InterruptPriority.h"
#include "Driver_USB.h"

/***********************************************************************/
/*Typedef*/
/***********************************************************************/
typedef struct{
        uint32 move_x;
        uint32 move_y;
        uint32 rotate_x;
        uint32 rotate_y;
}JoystickValueForBT;
/***********************************************************************/
/*Define*/
/***********************************************************************/
#define ASC2_TX_BUFFER_SIZE 256
#define ASC2_RX_BUFFER_SIZE 256
#define ASC2_BAUDRATE 115200  // bluetooths's base baud rate

/***********************************************************************/
/*External Variable*/
/***********************************************************************/
extern IfxAsclin_Asc s_asclin2;

/***********************************************************************/
/*Global Function Prototype*/
/***********************************************************************/
void init_bluetooth(void);
void send_data(const char* data);
void make_bluetooth_msg(uint32 x_mv, uint32 y_mv, uint32 x_rt, uint32 y_rt);
extern JoystickValueForBT receive_data(void);
void init_bluetooth_master(void);
void init_bluetooth_slave(void);
void send_at_command(const char* command);
#endif /* DEVICEDRIVER_DRIVER_BLUETOOTH_H_ */
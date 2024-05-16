/*
 * Decision_RPM.h
 *
 *  Created on: 2024. 5. 10.
 *      Author: jaeeun
 *  �븘�슂 �븿�닔 諛� 湲곕뒫
 *    float32 FUNC();
 *     - 媛�蹂����빆�쓽 媛�(0~1023)�쓣 �씫�뼱 RPM �떒�쐞濡� 蹂��솚�븯�뿬 return�븿
 *     - RPM �쓽 踰붿쐞�뒗 �떎�뿕�쓣 �넻�빐 �꽕�젙�븯湲�
 *     -> Driver_Potentiometer.h �궗�슜
 */
#ifndef DECISION_DECISION_RPM_H_
#define DECISION_DECISION_RPM_H_

/***********************************************************************/
/*Include*/ 
/***********************************************************************/
#include <Driver_Potentiometer.h>
#include <Driver_Joystick.h>
#include <Driver_USB.h>


/***********************************************************************/
/*Typedef*/ 
/***********************************************************************/

/***********************************************************************/
/*Define*/ 
/***********************************************************************/

/***********************************************************************/
/*External Variable*/ 
/***********************************************************************/

/***********************************************************************/
/*Global Function Prototype*/ 
/***********************************************************************/
void get_rpm_max(void);
float32 get_rpm_reference(uint8 state,JoystickValueSet s_joystick_data);//,JoystickValueSet s_joystick_data
void get_distance(uint8 state);

#endif /* DECISION_DECISION_RPM_H_ */

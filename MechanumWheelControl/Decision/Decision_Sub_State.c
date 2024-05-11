/*
 * Decision_RPM.c
 *
 *  Created on: 2024. 5. 10.
 *      Author: user
 *  필요 함수 및 기능
 *    int32 FUNC();
 *     - ToF센서를 통해 거리값을 입력 받아 sub_state를 판단하여 return함
 *     - sub_state: 0,1,2
 *     - distance 가 50cm 초과일 경우 normal(0)
 *     - distance 가 10cm 초과 && 50cm 이하일 경우 slow(1)
 *     - distance 가 10cm 이하일 경우 stop(2)
 *     - distance 가 음수와 같은 에러값일 경우 이전의 sub_state 리턴
 *
 *     -> Driver_ToF.h 사용
 */


/***********************************************************************/
/*Include*/ 
/***********************************************************************/

/***********************************************************************/
/*Define*/ 
/***********************************************************************/

/***********************************************************************/
/*Typedef*/ 
/***********************************************************************/

/***********************************************************************/
/*Static Function Prototype*/ 
/***********************************************************************/

/***********************************************************************/
/*Variable*/ 
/***********************************************************************/

/***********************************************************************/
/*Function*/ 
/***********************************************************************/




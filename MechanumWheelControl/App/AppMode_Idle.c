/***********************************************************************/
/*Include*/ 
/***********************************************************************/
#include <AppMode_Idle.h>

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
void Unit_ModeIdle(ModeInfo* pModeInfo)
{
    pModeInfo->u32nuModeCnt++;

    if(pModeInfo->u8nuTestModeTrigger == 2u)
    {
        pModeInfo->enuCurMode = OPER_MODE;
        pModeInfo->u32nuModeCnt = 0u;
    }    
}



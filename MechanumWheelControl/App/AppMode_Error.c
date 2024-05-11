/***********************************************************************/
/*Include*/ 
/***********************************************************************/
#include <App/AppMode_Error.h>

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
void Unit_ModeError(ModeInfo* pModeInfo)
{
    pModeInfo->u32nuModeCnt++;

    if(pModeInfo->u8nuTestModeTrigger == 0u)
    {
        pModeInfo->enuCurMode = INIT_MODE;
        pModeInfo->u32nuModeCnt = 0u;
    }    
}



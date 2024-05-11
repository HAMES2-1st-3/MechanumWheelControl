/***********************************************************************/
/*Include*/ 
/***********************************************************************/
#include <App/AppMode_Operation.h>

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
void Unit_ModeOperation(ModeInfo* pModeInfo)
{
    pModeInfo->u32nuModeCnt++;

    if(pModeInfo->u8nuTestModeTrigger == 4u)
    {
        pModeInfo->enuCurMode = ERROR_MODE;
        pModeInfo->u32nuModeCnt = 0u;
    }    
}



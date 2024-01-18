#include "../Include/LIB/STD_TYPES.h"
#include "../Include/LIB/BIT_MATH.h"

#include "../Include/MCAL/GI/GI_Cfg.h"
#include "../Include/MCAL/GI/GI_Interface.h"
#include "../Include/MCAL/GI/GI_Private.h"


void MGI_voidEnable (void)
{
	SET_BIT(SREG,GLOBAL_INTERRUPT_ENABLE_BIT);
}
void MGI_voidDisable (void)
{
	CLR_BIT(SREG,GLOBAL_INTERRUPT_ENABLE_BIT);
}

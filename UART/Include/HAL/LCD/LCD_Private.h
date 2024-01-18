#ifndef INCLUDE_HAL_LCD_LCD_PRIVATE_H_
#define INCLUDE_HAL_LCD_LCD_PRIVATE_H_


#define DONOT_CARE 0
#define FUNCTION_SET 			CONC_BIT(0,0,1,1,LCD_NO_OF_LINES,LCD_CHAR_SIZE,DONOT_CARE,DONOT_CARE)
#define DISPLAY_ON_OFF_CONTROL  CONC_BIT(0,0,0,0,1,DISPLAY_STATUS,CURSOR_DISPLAY,CURSOR_BLINK)
#define DISPLAY_CLEAR 			0x01
#define ENTRY_MODE_SET			CONC_BIT(0,0,0,0,0,1,DISPLAY_DIRECTION,SHIFT_ENABLE)

#define ROW1_BASE_ADD 127
#define ROW2_BASE_ADD 191
#endif /* INCLUDE_HAL_LCD_LCD_PRIVATE_H_ */

/*******************************************************************************
 *    ________  _________  ____    ____  _____          ________   ______   
 *   |_   __  ||  _   _  ||_   \  /   _||_   _|        |_   __  |.' ____ \  
 *     | |_ \_||_/ | | \_|  |   \/   |    | |     ______ | |_ \_|| (___ \_| 
 *     |  _| _     | |      | |\  /| |    | |   _|______||  _| _  _.____`.  
 *    _| |__/ |   _| |_    _| |_\/_| |_  _| |__/ |      _| |__/ || \____) | 
 *   |________|  |_____|  |_____||_____||________|     |________| \______.' 
 *                                                                      
 *******************************************************************************
 * 
 * File    		: TLC5973.c
 * Version		: 1.0
 * 
 *******************************************************************************
 *
 * Description 	: Interface and data conversion for TLC5973
 *  
 *******************************************************************************
 *
 * Author 		: Miguel Santos
 * Date 		: 14.09.2023
 *
 *******************************************************************************
 *
 * MPLAB X 		: 5.45
 * XC32 		: 2.50
 * Harmony 		: 2.06
 *
 ******************************************************************************/

#ifndef TLC5973_H    /* Guard against multiple inclusion */
#define TLC5973_H

#include <stdint.h>

void TLC_Init( void );
void TLC_Convert(uint8_t IC_ID);
void TLC_Transfer( void );
void TLC_Set(uint8_t IC_ID, uint16_t OUT0, uint16_t OUT1, uint16_t OUT2);


#endif /* TLC5973_H */

/* *****************************************************************************
 End of File
 */

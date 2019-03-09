/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

#if !defined(CONFIGURATION_H)
#define CONFIGURATION_H

#include <cytypes.h>

// Lighthouse beacon axis names
#define J_AXIS 0
#define K_AXIS 1

#define SQRT_2 1.41421356237
#define SQRT_3_2 0.8660254038 //sqrt(3)/2 for trigo

// Sweeping axis
#define HORIZONTAL_AXIS K_AXIS
#define VERTICAL_AXIS J_AXIS

/*// Beacon coordinates (removed, now it's configured at startup)
#define BEACON_COORD_X ((left_side == 1) ? coord_x_left : coord_x_right)
#define BEACON_COORD_Y ((left_side == 1) ? coord_y_left : coord_y_right)
#define BEACON_COORD_Z ((left_side == 1) ? coord_z_left : coord_z_right)

#define BEACON_COORD_ALPHA 0
#define BEACON_COORD_BETA CY_M_PI/2
#define BEACON_COORD_GAMMA 0*/

// LEDs height
#define LED_COORD_HEIGHT 0

// Helps for tracker offsets table
#define X_AXIS 0
#define Y_AXIS 1
#define Z_AXIS 2

#endif 

/* [] END OF FILE */

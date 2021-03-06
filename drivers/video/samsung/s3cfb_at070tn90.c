/* linux/drivers/video/samsung/s3cfb_at070tn90.c
 *
 * Innolux at070tn90 7" LCD module driver for the SMDK
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#include "s3cfb.h"

static struct s3cfb_lcd at070tn90 = {
	.width	= 800,
	.height	= 480,
	.bpp	= 32,
	.freq	= 60,

	.timing = {
		.h_fp	= 10,
		.h_bp	= 78,
		.h_sw	= 10,
		.v_fp	= 30,
		.v_fpe	= 1,
		.v_bp	= 30,
		.v_bpe	= 1,
		.v_sw	= 2,
	},

	.polarity = {
		.rise_vclk	= 0,
		.inv_hsync	= 1,
		.inv_vsync	= 1,
		.inv_vden	= 0,
	},
};

/* static void lcd_init(void)
{
write_power_item_value(POWER_LCD, 1);
write_power_item_value(POWER_BACKLIGHT, 1);
}
*/

/* name should be fixed as 's3cfb_set_lcd_info' */
void s3cfb_set_lcd_info(struct s3cfb_global *ctrl)
{
	at070tn90.init_ldi = NULL;
	ctrl->lcd = &at070tn90;
}


// This is the command sequence that initialises the S6D02A1 driver
//
// This setup information is in a format accecpted by the commandList() function
// which reduces FLASH space, but on an ESP8266 there is plenty available!
//
// See ILI9341_Setup.h file for an alternative simpler format

{
	// Initialization commands for S6D02A1 screens
	static const uint8_t S6D02A1_cmds[]  =
	{
	29,
	0xf0,	2,	0x5a, 0x5a,				// Excommand2
	0xfc,	2,	0x5a, 0x5a,				// Excommand3
	0x26,	1,	0x01,					// Gamma set
	0xfa,	15,	0x02, 0x1f,	0x00, 0x10,	0x22, 0x30, 0x38, 0x3A, 0x3A, 0x3A,	0x3A, 0x3A,	0x3d, 0x02, 0x01,	// Positive gamma control
	0xfb,	15,	0x21, 0x00,	0x02, 0x04,	0x07, 0x0a, 0x0b, 0x0c, 0x0c, 0x16,	0x1e, 0x30,	0x3f, 0x01, 0x02,	// Negative gamma control
	0xfd,	11,	0x00, 0x00, 0x00, 0x17, 0x10, 0x00, 0x01, 0x01, 0x00, 0x1f, 0x1f,							// Analog parameter control
	0xf4,	15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x3f, 0x07, 0x00, 0x3C, 0x36, 0x00, 0x3C, 0x36, 0x00,	// Power control
	0xf5,	13, 0x00, 0x70, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0x66, 0x06,				// VCOM control
	0xf6,	11, 0x02, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x02, 0x00, 0x06, 0x01, 0x00,							// Source control
	0xf2,	17, 0x00, 0x01, 0x03, 0x08, 0x08, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x04, 0x08, 0x08,	//Display control
	0xf8,	1,	0x11,					// Gate control
	0xf7,	4, 0xc8, 0x20, 0x00, 0x00,	// Interface control
	0xf3,	2, 0x00, 0x00,				// Power sequence control
	0x11,	TFT_INIT_DELAY, 50,					// Wake
	0xf3,	2+TFT_INIT_DELAY, 0x00, 0x01, 50,	// Power sequence control
	0xf3,	2+TFT_INIT_DELAY, 0x00, 0x03, 50,	// Power sequence control
	0xf3,	2+TFT_INIT_DELAY, 0x00, 0x07, 50,	// Power sequence control
	0xf3,	2+TFT_INIT_DELAY, 0x00, 0x0f, 50,	// Power sequence control
	0xf4,	15+TFT_INIT_DELAY, 0x00, 0x04, 0x00, 0x00, 0x00, 0x3f, 0x3f, 0x07, 0x00, 0x3C, 0x36, 0x00, 0x3C, 0x36, 0x00, 50,	// Power control
	0xf3,	2+TFT_INIT_DELAY, 0x00, 0x1f, 50,	// Power sequence control
	0xf3,	2+TFT_INIT_DELAY, 0x00, 0x7f, 50,	// Power sequence control
	0xf3,	2+TFT_INIT_DELAY, 0x00, 0xff, 50,	// Power sequence control
	0xfd,	11, 0x00, 0x00, 0x00, 0x17, 0x10, 0x00, 0x00, 0x01, 0x00, 0x16, 0x16,							// Analog parameter control
	0xf4,	15, 0x00, 0x09, 0x00, 0x00, 0x00, 0x3f, 0x3f, 0x07, 0x00, 0x3C, 0x36, 0x00, 0x3C, 0x36, 0x00,	// Power control
	0x36,	1, 0xC8,					// Memory access data control
	0x35,	1, 0x00,					// Tearing effect line on
	0x3a,	1+TFT_INIT_DELAY, 0x05, 150,			// Interface pixel control
	0x29,	0,							// Display on
	0x2c,	0							// Memory write
	};

	commandList(S6D02A1_cmds);

}

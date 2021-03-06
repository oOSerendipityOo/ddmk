#include "Input.h"

//WORD buttonMask[16] =
//{
//	GAMEPAD_LEFT_TRIGGER,
//	GAMEPAD_RIGHT_TRIGGER,
//	GAMEPAD_LEFT_SHOULDER,
//	GAMEPAD_RIGHT_SHOULDER,
//	GAMEPAD_Y,
//	GAMEPAD_B,
//	GAMEPAD_A,
//	GAMEPAD_X,
//	GAMEPAD_BACK,
//	GAMEPAD_LEFT_THUMB,
//	GAMEPAD_RIGHT_THUMB,
//	GAMEPAD_START,
//	GAMEPAD_DPAD_UP,
//	GAMEPAD_DPAD_RIGHT,
//	GAMEPAD_DPAD_DOWN,
//	GAMEPAD_DPAD_LEFT,
//};

WORD GetButtonState()
{
	BYTE * addr = *(BYTE **)(appBaseAddr + 0x5EAB88);
	if (!addr)
	{
		return 0;
	}
	return *(WORD *)addr;
}

#include "Amp_ino.h"
#include <Arduino.h>

bool TimeOut::timeOut(unsigned long time)
{
	unsigned long currentTime = millis();
	bool result = currentTime - _time >= time;
	if (result)
	{
		_time = currentTime;
	}
	return result;
}
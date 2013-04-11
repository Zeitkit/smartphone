#include "main.h"

using namespace MAUtil;
using namespace NativeUI;

const char* ZeitkitTimer::host = "http://foxtacles.com:3000";

extern "C" int MAMain()
{
	ZeitkitTimer* zeitkit = new ZeitkitTimer();
	Moblet::run(zeitkit);
	delete zeitkit;
	return 0;
}

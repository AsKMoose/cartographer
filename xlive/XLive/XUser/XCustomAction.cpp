#include "stdafx.h"
#include "XCustomAction.h"

#include "Globals.h"
#include "resource.h"
#include "XLive\xbox\xbox.h"
#include "XLive\XAM\xam.h"
#include "H2MOD\Discord\DiscordInterface.h"
#include "H2MOD\Modules\Config\Config.h"
#include <iostream>
#include <sstream>
#include <codecvt>
#include <unordered_map>

// #472
int WINAPI XCustomSetAction(DWORD dwActionIndex, LPCWSTR szActionText, DWORD dwFlags)
{
	LOG_TRACE_XLIVE("XCustomSetAction");
	return 0;
}

// #477
void WINAPI XCustomRegisterDynamicActions()
{
	LOG_TRACE_XLIVE("XCustomRegisterDynamicActions");
	return;
}

// #478
void WINAPI XCustomUnregisterDynamicActions()
{
	LOG_TRACE_XLIVE("XCustomUnregisterDynamicActions");
	return;
}

// #479
int WINAPI XCustomGetCurrentGamercard(DWORD* pdwUserIndex, XUID* pXuid)
{
	LOG_TRACE_XLIVE("XCustomGetCurrentGamercard");
	return 0;
}

// #474
int WINAPI XCustomSetDynamicActions(DWORD dwUserIndex, XUID xuid, CONST XCUSTOMACTION* pCustomActions, WORD cCustomActions)
{
	LOG_TRACE_XLIVE("XCustomSetDynamicActions");
	return 0;
}

// #473
int WINAPI XCustomGetLastActionPress(DWORD* pdwUserIndex, DWORD* pdwActionIndex, XUID *pXUID)
{
	//LOG_TRACE_XLIVE("XCustomGetLastActionPress");
	return 0;
}

// #476
BOOL WINAPI XCustomGetLastActionPressEx(DWORD* pdwUserIndex, DWORD* pdwActionId, XUID *pXuid, BYTE* pbPayload, WORD* pcbPayload)
{
	LOG_TRACE_XLIVE("XCustomGetLastActionPressEx");
	return FALSE;
}

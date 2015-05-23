#include "Common.h"

Extension::Extension(LPRDATA _rdPtr, LPEDATA edPtr, fpcob cobPtr)
: rdPtr(_rdPtr)
, rhPtr(_rdPtr->rHo.hoAdRunHeader)
, Runtime(_rdPtr)
{
	LinkExpression(0, BFEncrypt);
	LinkExpression(1, BFDecrypt);
}

Extension::~Extension()
{
}

short Extension::Handle()
{
	// Will not be called next loop	
	return REFLAG_ONESHOT;
}

short Extension::Display()
{
	return 0;
}

short Extension::Pause()
{
	return 0;
}

short Extension::Continue()
{
	return 0;
}

bool Extension::Save(HANDLE File)
{
	return true;
}

bool Extension::Load(HANDLE File)
{
	return true;
}

void Extension::Action(int ID, RD *rd, long param1, long param2)
{
}

long Extension::Condition(int ID, RD *rd, long param1, long param2)
{
	return false; //hopefully StringComparison (PARAM_CMPSTRING) is not used, or this may crash
}

long Extension::Expression(int ID, RD *rd, long param)
{
	return long(_T("")); //so that unlinked expressions that return strings won't crash
}

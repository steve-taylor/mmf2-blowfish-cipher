#include "Common.h"

Extension::Extension(LPRDATA _rdPtr, LPEDATA edPtr, fpcob cobPtr)
    : rdPtr(_rdPtr), rhPtr(_rdPtr->rHo.hoAdRunHeader), Runtime(_rdPtr)
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
    // Ok
    return 0;
}

short Extension::Pause()
{
    // Ok
    return 0;
}

short Extension::Continue()
{
    // Ok
    return 0;
}

bool Extension::Save(HANDLE File)
{
	return false;
}

bool Extension::Load(HANDLE File)
{
	return false;
}

void Extension::Action(int ID, LPRDATA rdPtr, long param1, long param2)
{
}

long Extension::Condition(int ID, LPRDATA rdPtr, long param1, long param2)
{
    return false;
}

long Extension::Expression(int ID, LPRDATA rdPtr, long param)
{
    return 0;
}

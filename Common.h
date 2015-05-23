#pragma once

// MMF2.0, CTF2.5, MMF2.0 Dev, CTF2.5 Dev
#define MMFEXT

#define EDIF_PLAIN_EDITDATA
#include "Edif.h"
#include "Resource.h"

/* stdtstring
 * A std::string that knows if you're using
 * unicode or not. (Protip: strings passed
 * to your extension A/C/Es still need to be
 * const TCHAR *, and the same goes for strings
 * returned from expressions and conditions).
 */
typedef std::basic_string<TCHAR> stdtstring;

struct EDITDATA
{
	extHeader Header;
};

#include "Extension.hpp"

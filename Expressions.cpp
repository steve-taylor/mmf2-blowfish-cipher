#include "Common.h"
#include "blowfish.h"
#include <string>

const char *Extension::BFEncrypt(const char *key, const char *text)
{
	return Runtime.CopyString(Blowfish(string(key)).encrypt(std::string(text)).data());
}

const char *Extension::BFDecrypt(const char *key, const char *hexstring)
{
	return Runtime.CopyString(Blowfish(string(key)).decrypt(std::string(hexstring)).data());
}

#pragma once

#include <cstdint>
#include <string>

using namespace std;

class Blowfish
{
public:
	Blowfish(const string& key);

	string encrypt(string plainText);

	string decrypt(string encryptedText);

private:
	const string key;

	uint32_t p[16 + 2];
	uint32_t s[4][256];

	void blowfish_encrypt(uint32_t *l, uint32_t *r);

	void blowfish_decrypt(uint32_t *l, uint32_t *r);

	uint32_t f(const uint32_t x);

	static const uint32_t P_BLOCKS[];
	static const uint32_t S_BLOCKS[4][256];
};

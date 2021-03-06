// UnitTests.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include "../blowfish.h"

using namespace std;

int main(int argc, char* argv[])
{
	Blowfish blowfish("KEY");
	string encryptedString = blowfish.encrypt("Foobar123");
	cout << "\"Foobar123\" encrypted with \"KEY\": " << encryptedString << endl;

	if (encryptedString == "1008c29ca59f728f2ba379bfeeaf61d3")
	{
		cout << "Encryption test passed." << endl;
	}
	else
	{
		cout << "Encryption test failed." << endl;
	}

	string decryptedString = blowfish.decrypt(encryptedString);
	cout << "\"" << encryptedString << "\" decrypted with \"KEY\": " << decryptedString << endl;

	if (decryptedString == "Foobar123")
	{
		cout << "Decryption test passed." << endl;
	}
	else
	{
		cout << "Decryption test failed." << endl;
	}

	return 0;
}

# Blowfish Cipher extension for Multimedia Fusion 2

## Expressions

`Encrypt$(key$, string$)`

Encrypts the string's bytes, zero-padded to the next 64-bit boundary, and
returns a hexadecimal representation of the encrypted bytes.

`Decrypt$(key$, hexstring$)`

Decrypts the bytes specified as a hexadecimal string, returning the string
that was encrypted. This will fail if the original, unencrypted bytes contain
a zero, because C strings are zero terminated and therefore the resultant
string will be truncated.

To build this extension:
* Download [EDIF](https://github.com/ClickteamLLC/windows-edif).
* Copy this project into a new folder inside EDIF's Extensions folder.
* Open BlowfishCipher.sln in Visual Studio.
* Select the EditTime build configuration and build.
* Select the Runtime build configuration and build.

To install the extension after building, copy the contents of the MFX folder
into the Multimedia Fusion 2 installation directory.

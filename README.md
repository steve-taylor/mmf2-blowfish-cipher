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

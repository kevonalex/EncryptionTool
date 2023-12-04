#ifndef ENCRYPTION_H
#define ENCRYPTION_H

#include <string>

bool encryptFile(const std::string& filename, bool encrypt);
bool performCaesarCipher(std::string& content, bool encrypt);

#endif // ENCRYPTION_H

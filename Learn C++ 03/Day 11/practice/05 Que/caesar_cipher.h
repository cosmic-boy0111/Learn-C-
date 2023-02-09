#pragma once


class CaesarCipher {
private:
    static int m_key;
public:
    static void SetKey(int key);
    static int GetKey();
    static void Encrypt(char plainText[], char cipherText[], int size);
    static void Decrypt(char cipherText[], char plainText[], int size);
};
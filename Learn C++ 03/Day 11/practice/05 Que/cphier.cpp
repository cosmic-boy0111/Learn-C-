#include "caesar_cipher.h"

int CaesarCipher::m_key = 0;
void  CaesarCipher::SetKey(int key) {
    m_key = key;
}
int CaesarCipher::GetKey() {
    return m_key;
}
void CaesarCipher::Encrypt(char plainText[], char cipherText[], int size) {
    char ch;
    for (int i = 0; i < size; ++i) {
        ch = plainText[i];
        if (ch >= 'a' && ch <= 'z') {
            ch = ch + m_key;
            if (ch > 'z') {
                ch = ch - 'z' + 'a' - 1;
            }
            cipherText[i] = ch;
        }
        else if (ch >= 'A' && ch <= 'Z') {
            ch = ch + m_key;
            if (ch > 'Z') {
                ch = ch - 'Z' + 'A' - 1;
            }
            cipherText[i] = ch;
        }
        else {
            cipherText[i] = ch;
        }
    }
}
void CaesarCipher::Decrypt(char ct[], char pt[], int size) {
    int k = 0;
    for (int i = 0; i < size; i++) {
        int temp = static_cast<int>(ct[i]);
        if (ct[i] == '\0') {
            pt[i] = '\0';
            return;
        }
        else if ((temp < 65 || temp > 90) && (temp < 97 || temp > 122)) {
            pt[k++] = ct[i];
        }
        else {
            if (ct[i] >= 'A' and ct[i] <= 'Z') {
                pt[k++] = static_cast<char>((temp - m_key - 65) % 26 + 65);
            }
            else {
                pt[k++] = static_cast<char>((temp - m_key - 97) % 26 + 97);
            }

        }
    }
}

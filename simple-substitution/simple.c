#include <stdio.h>
#include <stdlib.h>
#include "../util/util.h"
#include <string.h>

/**
 * Melby Baldove
 * melqbaldove@gmail.com
 *
 * Implementation of simple substitution cipher
 *
 * Substitute each plain text alphabet to permutation alphabet(cipher_key)
 */
char* simple_encrypt(char* plain, char* cipher_key) {
    int length = strlen(plain);
    char* cipher = (char*)malloc(length);
    memset(cipher, '\0', sizeof(cipher));
    for(int i = 0; i < length; i++) {
        int index = plain[i] - 'a';
        cipher[i] = cipher_key[index];
    }

    return cipher;
}

char* simple_decrypt(char* cipher, char* cipher_key) {
    int length = strlen(cipher);
    char* plain = (char*)malloc(length);
    int map[26];
    memset(plain, '\0', length);

    // map cipher_key
    for(int i= 0; i < 26; i++) {
        map['Z' - cipher_key[i]] = i;
    }

    for(int i = 0; i < length; i++) {
        plain[i] = 'a' + map['Z' - cipher[i]];        
    }

    return plain;
}
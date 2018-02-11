#include "caesar.h"

/**
 * Melby Baldove
 * melqbaldove@gmail.com
 *
 * Implementation of caesar cipher
 */
char *caesar(char* plain, int shift) {
    int plain_length = strlen(plain);
    char* cipher = (char*) malloc(plain_length);
    for(int i = 0; i < plain_length; i++) {
        char cur = plain[i];
        char shifted = plain[i] + shift;
        if(cur >= 'A' && cur <= 'Z') {
            cipher[i] = shifted > 'Z'? 'A' + (shifted % 'Z' - 1) : shifted;
        }
        else if(cur >= 'a' && cur <= 'z') {
            cipher[i] = shifted > 'z'? 'a' + (shifted % 'z' - 1) : shifted;
        }
        else return "";
    }
    cipher[plain_length] = '\0';
    return cipher;
}
#include <stdio.h>
#include <stdlib.h>
#include "../util/util.h"
#include "simple.h"

/**
 * Melby Baldove
 * melqbaldove@gmail.com
 */
int main(void) {
    char *cipher_alphabet = shuffle("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    printf("Cipher alphabet is: %s \n", cipher_alphabet);    
    char *left = simple_encrypt("melby", cipher_alphabet);
    printf("Encrypted: %s\n", left);
    char* decrypted = simple_decrypt(left, cipher_alphabet);
    printf("Decrypted: %s\n", decrypted);
    free(left);
    free(decrypted);
    free(cipher_alphabet);
    return 0;
}
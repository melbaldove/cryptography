#include "util.h"
#include <sodium.h>

/**
 * Melby Baldove
 * melqbaldove@gmail.com
 */
char* shuffle(char* text) {
    int length = strlen(text);
    char* shuffled = (char*) malloc(length);
    memset(shuffled, '\0', sizeof(shuffled));
    strcpy(shuffled, text);
    for(int i = length - 1; i >= 0; i--) {
        int rand = randombytes_uniform(i + 1);
        int temp = shuffled[rand];
        shuffled[rand] = shuffled[i];        
        shuffled[i] = temp;
    }

    return shuffled;
}

#include <stdlib.h>
#include <stdio.h>
#include "caesar.h"

/**
 * Melby Baldove
 * melqbaldove@gmail.com
 */
int main() {
    // test with no overflowing shift 
    char* left = caesar("melby", 1);
    if(strcmp(left, "nfmcz") == 0) {
        printf("%s\n", "Test 1 passed");
    }
    else {
        printf("%s\n", "Test 1 faield");
    }
    free(left);    
    left = caesar("melby", 2);    
    // test with overflowing shift
    if(strcmp(left, "ognda") == 0) {
        printf("%s\n", "Test 1 passed");
    }
    else {
        printf("%s\n", "Test 1 faield");
    }
    free(left);
    

    return 0;
}
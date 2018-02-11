#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Melby Baldove
 * melqbaldove@gmail.com
 *
 * Implementation of caesar cipher
 */
int main(int argc, const char* argv[])
{
    if(argc != 3) {
        return 1;
    }
    
    char* plain = argv[1]; 
    int shift = atoi(argv[2]);
    for(int i = 0, n = strlen(plain); i < n; i++) {
        char cur = plain[i];
        char shifted = plain[i] + shift;
        if(cur >= 'A' && cur <= 'Z') {
            printf("%c", shifted > 'Z'? 'A' + (shifted % 'Z' - 1): shifted);
        }
        else if(cur >= 'a' && cur <= 'z') {
            printf("%c", shifted > 'z'? 'a' + (shifted % 'z' - 1): shifted);
        }
        else return 2;
    }
    printf("\n");
}
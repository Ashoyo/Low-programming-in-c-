#include "string.h"
int all_letters(char s) {
    while((s) != '\0') {
        if (s < 'A' ||s > 'z' || (s > 'Z' &&s < 'a')) {
            return 0;
        }
        s++;
    }
    return 1;
}
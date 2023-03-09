#include "string.h"

int len_diff(chars1, char s2) {
    // len variable for s1 and s2, respectively
    int len1 = 0, len2 = 0;

    // find len for both string
    while((s1 + len1)) len1++;
    while(*(s2 + len2)) len2++;

    // return the substraction
    return len1 - len2;
}
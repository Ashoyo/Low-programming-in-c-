#include "string.h"
int ends_with_ignore_case(chars, char suff) {
    int len1 = 0, len2 = 0;

    while ((s + len1)) len1++;
    while (*(suff + len2)) len2++;

    if (len2 > len1) return 0;

    if (strcmp_ign_case(s+(len1-len2), suff) != 0) return 0;


    return 1;
}
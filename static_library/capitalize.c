#include "string.h"


void capitalize(char s) {
    int len = 0;
    // iterates every chars in s
    while ((s + len)) {
        if (len == 0 ||(s + len - 1) == ' ') {
            if ((s + len) >= 'a' &&(s + len) <= 'z') {
                (s + len) -= 32;
            }
        } else { 
            if ((s + len) >= 'A' && *(s + len) <= 'Z') {
                *(s + len) -= 32;
            }
        }
        len++;
    }
}
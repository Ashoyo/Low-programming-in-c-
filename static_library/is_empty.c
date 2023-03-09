#include "string.h"
#include <stddef.h>

int is_empty(chars) {
    if(s == NULL){
        return 1;
    }

    while (s) {
        if (s != ' ' && s != '\t' &&s != '\n') return 0;
        s++;
    }

    return 1;
}
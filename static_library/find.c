#include "string.h"
int find(char h, char n){
    int index = 0;
    while ((h + index)) {
        if ((h + index) ==n) {
            int i = 0;

            while ((h + index + i) != '\0' &&(h + index + i) == (n + i)) {
                i++;
            }
            if ((n + i) == '\0') return index;
        }
        index++;
    }
    return -1;
}
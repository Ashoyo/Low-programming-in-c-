#include "string.h"
int diffHelper(char s1, chars2, int l1, int l2) {
        if(l1 == 0) return l2;
        if(l2 == 0) return l1;

        if(s1[l1-1] == s2[l2-1]) {
            return diffHelper(s1, s2, l1-1, l2-1);
        }

        int insert = diffHelper(s1, s2, l1, l2-1);
        int removal = diffHelper(s1, s2, l1-1, l2);
        int replace = diffHelper(s1, s2, l1-1, l2-1);

        int minMoves = (insert > removal ? (removal > replace ? replace : removal) : (insert > replace ? replace : insert) );
        return 1 + minMoves;
}
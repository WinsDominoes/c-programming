#include <stdio.h>

#define NONBLANK 'a';

int main(void) {
    int c, lastc;

    while((c = getchar()) != EOF) {
        if(c != ' ')
            putchar(c);
        if(c == '\t')
            printf("\\t");
        if(c == '\b')
            printf("\\b");
        if(c == '\\')
            printf("\\\\");
        if(c != '\b')
            if(c != '\t')
                if(c != '\\')
                    putchar(c);
    }
}

#include <stdio.h>

int main(void) {
  int c, nl, tabs, blanks;

  nl = 0;
  tabs = 0;
  blanks = 0;

    while((c = getchar()) != EOF) {
        if(c == '\n')
            ++nl;
        if (c == '\t')
            ++tabs;
        if (c == ' ')
            ++blanks;
    }

    printf("Newlines: %d, Tabspace: %d, Blank Space: %d\n", nl, tabs, blanks);
}

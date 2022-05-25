#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void interpret(char* code) {
    int cell = 0;
    char cells[30000] = {0};
    char* loopcode = "";
    char mode = 'n';

    int len = strlen(code);

    int i;
    for (i; i<len; i++) {
        int c = code[i];

        if (mode = 'n') { 
            if (c == '+') {
                cells[cell]++;
            } else if (c == '-') {
                cells[cell]--;
            } else if (c == '>') {
                cell++;
            } else if (c == '<') {
                cell--;
            } else if (c == '.') {
                int ic = cells[cell];
                printf("%c", ic);
            } else if (c == '[' || c == ']') {
                printf("BF1000 UNIMPLIMENTED FEATURE (%c)\n", c);
                printf(" ON THE WAY TO CHAR %d\n", i+1);
                printf("CORRECT SOURCE AND RESUBNIT\n");
                exit(0);
            }
        }
    }
    printf("\n");
}

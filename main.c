#include <stdio.h>
#include "./runtime/interpret.c"

int main(int argc, char** argv) {
    char* string;
    char ch;
    FILE* file;
    file = fopen(argv[1], "r");

    fscanf(file, "%s", string);
    interpret(string);

    fclose(file);
    return 0;
}
#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;

    printf("Enter the filename to open: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    printf("File content:\n");
    while ((ch = fgetc(file)) != EOF)
        {
        putchar(ch);
    }

    fclose(file);
    return 0;
}

#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFilename[100], destinationFilename[100];
    char ch;

    printf("Enter the source filename: ");
    scanf("%s", sourceFilename);
    printf("Enter the destination filename: ");
    scanf("%s", destinationFilename);

    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file %s\n", sourceFilename);
        return 1;
    }


    destinationFile = fopen(destinationFilename, "a");
    if (destinationFile == NULL) {
        printf("Error: Could not open destination file %s\n", destinationFilename);
        fclose(sourceFile);
        return 1;
    }


    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }


    fclose(sourceFile);
    fclose(destinationFile);

    printf("Data appended successfully.\n");
    return 0;
}


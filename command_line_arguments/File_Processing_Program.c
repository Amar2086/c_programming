#include <stdio.h>

int main(int argc, char *argv[]) 
{
    if (argc < 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }
    
    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Could not open file %s\n", argv[1]);
        return 1;
    }
    
    // Process the file (e.g., read contents)
    printf("File %s opened successfully!\n", argv[1]);
    
    fclose(file);
    return 0;
}

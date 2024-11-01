#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int debug_mode = 0;

    if (argc > 1 && strcmp(argv[1], "--debug") == 0) {
        debug_mode = 1;
    }

    if (debug_mode) {
        printf("Debug mode is ON\n");
        // Perform debugging actions
    } else {
        printf("Running in normal mode\n");
    }

    return 0;
}

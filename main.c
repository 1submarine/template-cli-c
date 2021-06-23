#include <stdio.h>

#include "flags.h"

int main(int argc, char **argv) {
    for (int i = 1; i < argc; ++i) {
        if (argv[i][0] == '-') {
            printf("Flag: ");
            if (argv[i][1] == '-') {
                printf("Long\n");
            } else {
                printf("Short\n");
            }
        } else {
            printf("Argument\n");
        }
    }
}

#include <stdio.h>

#include "flags.h"
#define DEBUG
#include "macros.h"

int main(int argc, char **argv) {
    for (int i = 1; i < argc; ++i) {
        if (argv[i][0] == '-') {
            printf("Flag: ");
            if (argv[i][1] == '-') {
                printf("Long\n");
                parse_flag_long(argv[i] + 2);
            } else {
                printf("Short\n");
                LOG();
                for (unsigned long j = 1; j < sizeof(*argv[i])/sizeof(char); ++j) {
                    LOG();
                    parse_flag_short(argv[i][j]);
                }
            }
        } else {
            printf("Argument\n");
        }
    }
    printf("%d\n", Flags.verbose);
}


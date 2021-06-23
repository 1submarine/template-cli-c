#include <stdio.h>
#include <stdbool.h>

#include "flags.h"
#define DEBUG
#include "macros.h"

int main(int argc, char **argv) {
    for (int i = 1; i < argc; ++i) {
        if (argv[i][0] == '-') {
            LOG("Flag: ");
            if (argv[i][1] == '-') {
                LOG("Long");
                parse_flag_long(argv[i] + 2);
            } else {
                LOG("Short");
                for (
                  unsigned j = 1; j < sizeof(*argv[i])/sizeof(char); ++j
                ) {
                    LOG(i);
                    parse_flag_short(argv[i][j]);
                }
            }
        } else {
            printf("Argument\n");
        }
    }
    printf("Verbose: %s\n", Flags.verbose == true ? "true" : "false");
}

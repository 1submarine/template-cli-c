#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "flags.h"
#define DEBUG
#include "macros.h"

const char * btoc(bool tested);

int main(int argc, char **argv) {
    // See if this can use heap allocation
    bool arguments[argc - 1];
    for (int i = 1; i < argc; ++i) {
        if (argv[i][0] == '-') {
            LOG("Flag");
            if (argv[i][1] == '-') {
                LOG("Long");
                parse_flag_long(argv[i] + 2);
            } else {
                LOG("Short");
                for (
                    unsigned j = 1;
                    j < sizeof(*argv[i])/sizeof(char) + 1;
                    ++j
                ) {
                    parse_flag_short(argv[i][j]);
                }
            }
        } else {
            arguments[i] = true;
            LOG("Argument");
        }
    }
    printf("Verbose: %s\n", btoc(Flags.verbose));
}

const char * btoc(bool tested) {
    if (tested == true)  return "true";
    if (tested == false) return "false";
    // v--- NULL bool
    else exit(1);
}

#include <stdbool.h>
#include <string.h>

#include "flags.h"

// i.e. "-v"
void parse_flag_short(char flag) {
    if (flag == 'v') Flags.verbose = true;
}

// i.e. "--verbose"
void parse_flag_long(char flag[]) {
    if (strcmp(flag, "verbose") == 0) Flags.verbose = true;
}

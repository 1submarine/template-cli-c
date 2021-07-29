#include <stdbool.h>
#include <string.h>

#include "flags.h"

struct flags Flags;

// Use this to set default flag values
void set_default_flags(void) {
	Flags.verbose = false;
}

// i.e. "-v"
void parse_flag_short(char flag) {
	if (flag == 'v') Flags.verbose = true;
}

// i.e. "--verbose"
void parse_flag_long(char flag[]) {
	if (strcmp(flag, "verbose") == 0) Flags.verbose = true;
}

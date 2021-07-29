#ifndef FLAGS
#define FLAGS
#include <stdbool.h>

struct flags {
	bool verbose;
};

void parse_flag_short(char flag);
void parse_flag_long(char flag[]);
#endif

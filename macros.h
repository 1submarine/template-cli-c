#ifndef MACROS
#define MACROS
	#ifdef DEBUG
		#define LOG() printf("%s: %d", __FILE__, __LINE__)
	#else
		#define LOG() asm("nop")
	#endif
#endif

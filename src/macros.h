#ifndef MACROS
#define MACROS
#ifdef DEBUG
#define LOG(text) printf("%s: %d: %s\n", __FILE__, __LINE__, text)
#else
#define LOG(text) asm("nop")
#endif
#endif


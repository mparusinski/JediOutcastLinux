#ifndef __MULTIARCH_H_
#define __MULTIARCH_H_

#if __x86_64__
typedef unsigned long int addr_t; 
#else
typedef unsigned int addr_t;
#endif // 64 bits

extern unsigned int uiMMXAvailable;

#endif  // __MULTIARCH_H_

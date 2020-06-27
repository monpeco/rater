#ifndef COMMON_H
#define COMMON_H

#define DEBUG

#ifdef DEBUG
#define cout_debug(x) std::cout << (x);
#else
#define cout_debug(x) ;
#endif

#endif
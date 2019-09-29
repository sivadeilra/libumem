#pragma once

// for windows.h
#define NOMINMAX

#define _CRT_SECURE_NO_WARNINGS

#include <stdint.h>

typedef int ssize_t;

typedef unsigned __int64 u_int64_t;

// #define HAVE_SYS_TIME_H 1

// for timeval
#include <winsock2.h>

typedef char *caddr_t;

#define __attribute__(x)

#pragma warning(disable : 4146) // unary minus operator applied to unsigned type
#pragma warning(disable : 4018) // signed/unsigned mismatch
#pragma warning(disable : 4244) // conversion, loss of data
#pragma warning(disable : 4274) // ignoring pragma ident

#define UMEM_STANDALONE 1

struct timespec {
  int tv_sec;
  int tv_nsec;
};

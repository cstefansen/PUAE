/*
 * E-UAE - The portable Amiga Emulator
 *
 * Processor-specific definitions
 */

#ifndef MACHDEP_MACHDEP_H
#define MACHDEP_MACHDEP_H

#define MACHDEP_X86
#define MACHDEP_NAME    "x86"

#ifdef __native_client__
#undef HAVE_MACHDEP_TIMER
#else
#define HAVE_MACHDEP_TIMER
#endif

typedef uae_s64 frame_time_t;
#define MAX_FRAME_TIME 9223372036854775807LL

#endif

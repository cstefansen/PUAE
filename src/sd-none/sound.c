 /*
  * UAE - The Un*x Amiga Emulator
  *
  * Support for the Mute sound system
  *
  * Copyright 1997 Bernd Schmidt
  * Copyright 2003 Richard Drummond
  */

#include "sysconfig.h"
#include "sysdeps.h"

#include "options.h"
#include "gensound.h"
#include "sounddep/sound.h"

int have_sound = 0;

int init_sound (void)
{
    currprefs.produce_sound = 0;
    return 1;
}

int setup_sound (void)
{
    currprefs.produce_sound = 0;
    return 1;
}

void clear_sound_buffers (void)
{
}

void close_sound (void)
{
}

void reset_sound (void)
{
}

void pause_sound (void)
{
}

void resume_sound (void)
{
}

void sound_volume (int dir)
{
}

/*
 * Handle audio specific cfgfile options
 */
void audio_default_options (struct uae_prefs *p)
{
}

void audio_save_options (FILE *f, const struct uae_prefs *p)
{
}

int audio_parse_option (struct uae_prefs *p, const char *option, const char *value)
{
    return 0;
}

void master_sound_volume (int dir)
{
}

void sound_mute (int newmute)
{
}

void restart_sound_buffer (void)
{
}


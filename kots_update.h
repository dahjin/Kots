#ifndef KOTS_UPDATE_H
#define KOTS_UPDATE_H

#define KOTS_FTP_USER		"server:server"
#define KOTS_URL_BASE		"ftp://localhost/updates"
#define KOTS_URL_VERSION	"version.txt"

#ifdef WIN32

#define KOTS_LOCAL_LIBRARY	"gamex86.dll"
#define KOTS_LOCAL_DEBUG	"kots2007.pdb"
#define KOTS_URL_LIBRARY	"latest-win32.dll"
#define KOTS_URL_DEBUG		"latest-win32.pdb"

#else

#define KOTS_LOCAL_LIBRARY	"gamei386.so"
#define KOTS_LOCAL_DEBUG	""
#define KOTS_URL_LIBRARY	"latest-linux.so"
#define KOTS_URL_DEBUG		""

#endif

#include "kots_character.h"

void Kots_UpdateInit();
void Kots_UpdateFree();
void Kots_UpdateStartDefault(edict_t *ent);
void Kots_UpdateStart(edict_t *ent, char *url, int wait);
void Kots_RevertStartDefault(edict_t *ent);
void Kots_RevertStart(edict_t *ent, int wait);

#endif

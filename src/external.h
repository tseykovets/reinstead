#ifdef _WIN32
 #include <windows.h>
#else
 #include <unistd.h>
#endif
#include <dirent.h>
#ifndef PLAN9
#include <libgen.h>
#endif
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <math.h>
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#include "lua-compat.h"

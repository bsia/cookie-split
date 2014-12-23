
#include "cookie_split.h"
#include <stdio.h>
#include <stdlib.h>

char **CSPLIT_splitCookie(const char *setCookieHeader)
{
    return NULL;
}

void CSPLIT_freeSplitCookieList(char **splitCookieList)
{
    char **l = splitCookieList;
    while (*l)
    {
        free(*l);
        l++;
    }
}


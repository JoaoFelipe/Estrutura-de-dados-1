#include <stdio.h>
int palavra_contida(char *palavra, char *frase)
{
    for (int i = 0; (*(frase + i) != '\0'); i++) {
        if (*palavra == *(frase + i ) && (*++palavra == '\0'))
            return 1;
    } 
    return 0;
}
 

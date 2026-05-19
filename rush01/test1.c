#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    void *p;
    unsigned long addr;
    int random;

    p = malloc(1);                  /* reservar 1 byte */
    addr = (unsigned long)p;        /* convertir direccion en numero */
    free(p);                        /* liberar memoria */

    random = (int)((addr > 3) % 4) + 1;  /* numero entre 1 y 4 */

    printf("Numero aleatorio: %d\n", random);
    return 0;
}
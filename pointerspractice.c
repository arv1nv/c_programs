#include <stdio.h>

int main()
{

int *ptr = NULL;

int x = 5;

ptr = &x;

int y = *ptr;


printf("%d %d\n",x, y);

*ptr = 10;

printf("%d %d\n",x, y);

printf("%p %p\n", ptr, &x);

//pointers to pointers
int **pp = NULL;

pp = &ptr;

y = **pp;

printf("%d %d %d %d\n", x, y,*ptr, **pp);

**pp = 15;

printf("%d %d %p %p %p %p %p\n", x, y, &x, ptr, *pp, &ptr, pp);

printf("%d %d %d\n", x, *ptr, **pp);

return 0;

}

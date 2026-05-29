#include <stdio.h>


struct Rectangle {
          int height;
          int width;
        };
int area(struct Rectangle *r);



int main()
{

	struct Rectangle r1 = {10,10};
	struct Rectangle *ptr = &r1;

   int a = 0;

   a = area(ptr);

   printf("Area is %d", a);

}

int area(struct Rectangle *r)
        {
           int ar = 0;
           ar = (r->height) * (r->width);
           return ar;
        }

#include <stdio.h>



struct floats {

    float f1;

    float f2;

    float f3;

};



void changestuff(struct floats *ptr){

    ptr->f1 = 100;

    ptr->f2 = 100;

    ptr->f3 = 100;

}



int main()

{

    struct floats s = {1,3,4};

    //struct floats *ptr = %s;

    changestuff(&s);

    return 0;

}

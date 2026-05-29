#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

struct Employee {
      char name[81];
      struct date birthDate;
};

void printEmployee(struct Employee *e)
{

	printf("%s, %d/%d/%d\n", e->name, e->birthDate.day,e->birthDate.month,e->birthDate.year);

}






int main()
{

struct Employee e1 = {"Jeff",{30,07,2006}};

struct Employee *ptr = &e1;

printEmployee(ptr);


return 0;
}

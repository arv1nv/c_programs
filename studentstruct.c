#include <stdio.h>

struct Student {

    char name[50];

    float grade;

};

int findTopStudent(struct Student s[], int n);

int main()
{

struct Student students[] =
{
{"bob", 83},
{"Jeff",73},
{"Kyle",99}
};

int topstudent = findTopStudent(students, 3);

printf("%d name: %s\n", topstudent, students[topstudent].name);

}

int findTopStudent(struct Student s[], int n)
{

	int hg = 0;
	int index = 0;

	for (int i = 0;i < n;i++){

		if (s[i].grade > hg){
		hg = s[i].grade;
		index = i;
		}

	}

	return index;

}

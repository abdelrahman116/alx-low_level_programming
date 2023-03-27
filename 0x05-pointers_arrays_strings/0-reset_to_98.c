#include<stdio.h>
/* function that takes a pointer to an int as parameter and updates the value it points to to 98.*/
int main(void)
{int n = 100;
int *p = &n;
*p = 98;
}

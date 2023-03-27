#include<stdio.h>
int LARGEST(a,b,c)
{
	 int largest;
        largest=0;
        if(largest<a)
        {largest=a;}
        else if (largest<b)
        {largest=b;}
        else
                largest=c;
        return largest;
}
int main()
{
int x,y,z;
printf(LARGEST(x,y,z));
}

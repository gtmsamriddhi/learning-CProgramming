#include<stdio.h>
int main(){
   int i ,n=1; 
   printf ("The prime numbers from 1 to 300 are :\n1\t");
   for (n=1; n<=300 ; n++)
   {
    i=2;
    for ( i = 2 ; i<n ; i++)
    {
        if (n%i==0)
        break;
    }
    if ( i==n )
    printf ("%d\t",n);
   }
   printf ("\nLab 20(a): Samriddhi Gautam : BIT28");
   return 0;
}


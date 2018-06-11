#include <stdio.h>
#include <cs50.h>

int main (void)
{
 printf("Hello, one! Let's build some pyramid!\n");
 
 int x;
 int j;

    do
    {
      printf("Set the Height of the pyramid: \n");
      x  = GetInt();
        
    }
    while ((x < 2) || (x > 23));
     
    for(int i = 1; i <= x; i++)
    {
        for (int y = x - 1; y == 0; y--)
            {
            printf("\t");
            }
        
        for (j = 1; j <= i; j++)
        { 

            printf("#");
        }            
        printf("#\n");    
    }
}

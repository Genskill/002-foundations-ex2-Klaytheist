#include<stdio.h>
#include<cs50.h>

int main(void) { 
    int type, rows, i, j;
    type = get_int("");
    rows = get_int("");
    if(type == 1)
    {
        for(i = rows; i > 0; i--)
        {   
            for(j = i; j > 0; j--)
            {
                printf("#");
            }
            printf("\n");
         }
     }
     if(type == 2)
     {
         for(i = 0; i < rows ; i++)
         {
             for(int k = rows - i - 1; k > 0; k--)
             {
                 printf(" ");
             }
             for(j = 0; j <= i; j++)
             {
                 printf("#");
             } 
             printf("\n");
         }
     } 
}

#include<stdio.h>
#include<cs50.h>

int main(void) { 
    int I, II, III;
    I = get_int("side 1 ");
    II = get_int("side 2 ");
    III = get_int("side 3 ");
    if((I*I)+(II*II) == (III*III))
        printf("Yes");
    else if((I*I)+(III*III) == (II*II))
        printf("Yes");
    else if((II*II)+(III*III) == (I*I))
        printf("Yes");
    else
    	printf("No");
    
}

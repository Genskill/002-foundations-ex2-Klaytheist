#include<stdio.h>
#include<cs50.h>

int main(void) { 
    int I1, II, III;
    I1 = get_int("side 1 ");
    II = get_int("side 2 ");
    III = get_int("side 3 ");
    if((I1*I1)+(II*II) == (III*III))
        printf("Yes");
    else if((I1*I1)+(III*III) == (II*II))
        printf("Yes");
    else if((II*II)+(III*III) == (I1*I1))
        printf("Yes");
    else
    	printf("No"); 
}

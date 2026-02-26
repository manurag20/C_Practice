#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int Dnum(char *s){
    int len  = strlen(s);
    int Dnumb=0;
    for (int i=0; i<len;i++){
        printf("\nthe character is: %c and i is: %d",s[len-i-1],i);
        Dnumb = Dnumb +((s[len-i-1] - '0')*pow(2,i));
        printf("Dnum is: %d", Dnumb);
    }
    return Dnumb;
}
int main() {
    char *num = "11011";
    printf("\nThe number is : %d",Dnum(num));
    return 0;
}

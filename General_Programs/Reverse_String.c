// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * reverse(char *s){
    int length = strlen(s);
    char *newstring  =malloc(sizeof(char)*length);
    for (int i=0; i< length;i++){
        newstring[i]=s[length-i-1];
    }
    return newstring;
}
int main() {
    char *mystring = "This is my name";
    printf("reverse string is: %s",reverse(mystring));
    return 0;
}
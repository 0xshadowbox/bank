#include<stdio.h>
#include<ctype.h>
#include <string.h>

int main(){
    char str[] = {"MOM"};
    int s = strlen(str);

    printf("%d",s);

    int isPalindrome = 1;
    for(int i = 0; i < s/2; i++){
        if(str[i] != str[s-1-i]){
            isPalindrome = 0;
            break;
        }
    }
    if(isPalindrome){
        printf("Is palindrome");
    } else {
        printf("Not palindrome");
    }
}
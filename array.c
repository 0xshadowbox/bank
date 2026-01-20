#include<stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[44] = {"AIML students are very good students @2028"};
    int s = strlen(str);
    int upper = 0, lower = 0, digit = 0, space = 0, symbol = 0;
    for(int i=0; i<s; i++){
        if(isupper(str[i])){
            upper++;
        } else if (islower(str[i])) {
            lower++;
        } else if (isdigit(str[i])) {
            digit++;
        } else if (isspace(str[i])) {
            space++;
        } else if(isascii(str[i])){
            symbol++;
        }
    }
    printf("There are %d number of uppercases \n", upper);
    printf("There are %d number of lowercases \n", lower);
    printf("There are %d number of digits \n", digit);
    printf("There are %d number of spaces \n", space);
    printf("There are %d number of symbols \n", symbol);
}
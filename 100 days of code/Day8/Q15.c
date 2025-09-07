//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>

int main(){
    printf("The digits range from 0 to 10 only, please enter a digit from 0 to 9\n");
    printf("Special character for this code are: !, @, #, $, &, *, please enter a character from the following.\n");
    char c;
    printf("enter a value for c: ");
    scanf("%c", &c);

// the compiler compares the ascii value of enter input with the ascii valueof A,Z,a,z the determine wether the lie in the given parameter or not.

    if(c >= 'A' && c <= 'Z'){
       printf("The entered input is an uppercase letter");
    }else if(c >= 'a' && c <= 'z'){
        printf("The entered input is a lowercase letter");
    }else if(c >= '0' && c <= '9'){
        printf("The entered input is a digit");
    }else{
        printf("The entered input is a special character");
    }
    return 0;
}
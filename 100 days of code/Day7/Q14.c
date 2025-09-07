//Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>

int main(){
    char c;
    printf("enter an alphabet: ");
    scanf("%c", &c);

    if(c=='a'|| c=='e'|| c=='i'|| c=='o' || c=='u'){
        printf("The enterd character is a vowel.");
    }else{
        printf("The etnered character is a consonant");
    }
    return 0;
}
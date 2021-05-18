#include <stdio.h>
#include <string.h>

int isvowel( char s) {
    switch(s){
        case 'a':
        return 1;
        break;
        case 'e':
        return 1;
        break;
        case 'i':
        return 1;
        break;
        case 'o':
        return 1;
        break;
        case 'u':
        return 1;
        break;
        default:
        return 0;

    }
}

int main() {
    int i;
    char line[] = "functions can run pointers";
    for(i=0;i<strlen(line);i++){
        if(isvowel(line[i])){
            printf("Vowel %c is present at %d positon.\n" ,line[i],i+1);
        }
    }
    
}
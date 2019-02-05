#include <stdio.h>
#include "jgarcia_argtok.h"
#include  <stdlib.h>
#include <string.h>
int main(){
    char word[100];
    while(1){
        printf("$ ");
        fgets(word,100,stdin);
        if(word[0] == 'b'){
            free_tokens(argtok(word));
            break;
        }
        else{
            print_tokens(argtok(word));
        }
    }
}


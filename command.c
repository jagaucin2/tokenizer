#include <stdio.h>
#include "tokenizer.h"
#include "history.h"
#include  <stdlib.h>
#include <string.h>
int main(){
	
	char word[100];
	int going = 1;
	List * list;
	list = init_history();
	int number;
	while(1){
		printf("$ ");
		fgets(word,100,stdin);
		if(word[0]=='!'&& word[1] >= 0x30 && word[1] <= 0x39){
			number = word[1] - '0';
		 	printf("%s",get_history(list, number));
		}
		else if(word[0] == 'b'){
			free_tokens(tokenize(word));
			free_history(list);
			break;
		}
		else{
			add_history(list,word);
			print_tokens(tokenize(word));
}
	}
	print_history(list);
}


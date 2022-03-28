#include<stdio.h>
#include<string.h>

char *function(char *array,int index){
	
	int length = strlen(array);
	
	if(index>=length){
		
		return NULL;
	}
	
	else{
		
		return array+index;
	}
	
}



int main(void){
	
	
	char string[] = " ";
	int index;
	
	printf("Please enter your string: ");
	scanf("%s",string);
	
	printf("\nPlease enter the step of the string that you want to start from: ");
	scanf("%d",&index);
	
	char *p=function(string,index);
	
	printf("\n%s",p);
	
	return 0;
}

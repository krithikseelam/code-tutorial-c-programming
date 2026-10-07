//pattern $#$##$###$####$#####

#import<stdio.h>

int main(){

	int n = 6;
	for(int i = 0; i < n;i++){
		
		printf("$");
		int loops = 0;
		while (loops <= i){

			printf("#");
			loops++;

			}	


	}

}
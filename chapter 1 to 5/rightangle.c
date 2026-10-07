#include<stdio.h>
int main(){
	int height_of_triangle;
	printf("height of triangle:\n");
	scanf("%d",&height_of_triangle);
	for(int i = 1; i <= height_of_triangle;i++){
		for (int j = 0; j < i; j++){
			printf("$");
		}
		printf("\n");
	}
}

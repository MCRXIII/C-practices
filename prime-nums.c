//输出NUM以内的质数 没有做排版。
#include <stdio.h>

#define NUM 100

int main(){
	int i, j;
	int is_prime;
	
	for(i = 2; i < NUM + 1; i++){
		is_prime = 1;

		for(j = 2; j < i; j++){
			if(i % j == 0){
				is_prime = 0;
				break;
			}
		}
		if(is_prime == 1){
			printf("%d\n",i);
		}
	}
	return 0;
}
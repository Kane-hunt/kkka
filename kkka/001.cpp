#include<stdio.h>

int max() {
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", j, i, i * j);
		}
		printf("\n");
	}
	return 0;
}
int min(int x, int y) {
	if (x < y) {
		return(printf("%d小", x));
	}
	else if(x > y){
		return(printf("%d小", y));
	}
	else {
		return(printf("两个数相同"));
	}

}
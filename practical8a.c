#include<stdio.h>
int main(){
	int num=500;
	int*ptr; //pointer to int
	ptr=&num;
	printf("add of ptr is %u",ptr);
	ptr=ptr+7;
	printf("after adding add of ptr is %u",ptr);
	return 0;
}

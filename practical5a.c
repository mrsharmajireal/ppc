#include<stdio.h>
int main(){
	const int maxinput=100;
	int i;
	double number,average,sum=0.0;
	
	for(i=1;i<=maxinput;++i){
		printf("%d.enter a number:",i);
		scanf("%lf",&number);
	    if(number<0.0){
	    	goto jump;
		}
		sum+=number;
	}
	jump:
		average=sum/(i-1);
		printf("sum=%2f\n",sum);
		printf("average=%2f\n",average);
		return 0;
	}
			

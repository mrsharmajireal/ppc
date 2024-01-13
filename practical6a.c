#include<stdio.h>
struct student
{
	char firstName[50];
	int roll;
	float marks;
	}s[2];
	
	
	int main(){
		int i;
	printf("Enter information of students : \n");
	
	for(i=0;i<2;++i){
		s[i].roll=i+1;
		printf("\n for roll number%d,\n",s[i].roll);
		printf("enter first name:");
		scanf("%s",s[i].firstName);
		printf("Enter marks:");
		scanf("%f",&s[i].marks);
	}

	for(i=0;i<2;++i){
		printf("\nRoll number:%d\n",i+1);
		printf("First name:");
		puts(s[i].firstName);
		printf("Marks:%.1f",s[i].marks);
		printf("\n");
	}
	return 0;
}

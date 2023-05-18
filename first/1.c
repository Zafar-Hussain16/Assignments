#include <stdio.h>
int main()
{
	float sub_1,sub_2,sub_3,sub_4,sub_5;
	float total,percentage;
	printf("enter the marks of five subjects::\n");
	scanf("%f %f %f %f %f",&sub_1,&sub_2,&sub_3,&sub_4,&sub_5);
	total=sub_1+sub_2+sub_3+sub_4+sub_5;
	percentage=(total/500*100);
	printf("the sum of total marks is %f\t\n",total);
	printf("the percentage is %f\t\n",percentage);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, average;
	int sum=0;
	int grade[5];
	
	for(i=0;i<SIZE;i++)
	{
		printf("enter the student's score : ");
		scanf("%d",&grade[i]);
		sum += grade[i];
	
	}
	
	average = sum/SIZE;
	printf("the average of students' score is : %d\n",average);
	
	return 0;
}

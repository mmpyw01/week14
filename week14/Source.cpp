#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>  
#include <string.h>    
struct student {
	int rollno;
	char name[20];
	float point;
};
int main() {
	int i;
	struct student st[3];
	printf("Enter Records of 3 students\n");
	for (i = 0; i < 3; i++) {
		printf("\nEnter No.");
		scanf_s("%d", &st[i].rollno);
		printf("\nEnter Name:");
		scanf("%s", &st[i].name);
		printf("\nEnter Points:");
		scanf_s("%f", &st[i].point);
	}
	printf("\nStudent Information List:");
	for (i = 0; i < 3; i++) {
		if (st[i].point >= 50)
		{
			printf("\nNo.%d, Name:%s ,Points:%.2f ,Pass!", st[i].rollno, st[i].name, st[i].point);
		}
		else
		{
			printf("\nNo.%d, Name:%s ,Points:%.2f ,Fail!", st[i].rollno, st[i].name, st[i].point);
		}
	}
	return 0;
}

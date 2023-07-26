
// Write a program of structure employee that provides the following information -print and display empno, empname, address and age 

#include<stdio.h>

	struct Employee
 {
	int Emp_no;
	char Emp_name[10];
	char address[10];
	int age;
 }

main()
{
	struct Employee e1;
	
	printf("Enter Emp_no : ");
	scanf("%d",&e1.Emp_no);
	
	printf("Enter Emp_name : ");
	scanf("%s",&e1.Emp_name);
	
	printf("Enter address : ");
	scanf("%s",&e1.address);
	
	printf("Enter age : ");
	scanf("%d",&e1.age);
	
		printf("\nEmp_no : %d",e1.Emp_no);
		printf("\nEmp_name : %s",e1.Emp_name);
		printf("\nAddress : %s",e1.address);
		printf("\nAge : %d",e1.age);
	}




// Write a program of structure for five employee that provides the following information -print and display empno, empname, address and age 

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
	struct Employee e[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("Employee %d",i+1);
		printf("\nEnter Emp_no : ");
		scanf("%d",&e[i].Emp_no);
		
		printf("Enter Emp_name : ");
		scanf("%s",&e[i].Emp_name);
		
		printf("Enter address : ");
		scanf("%s",&e[i].address);
		
		printf("Enter age : ");
		scanf("%d",&e[i].age);
		
	}
	
	for(i=0;i<5;i++)
	{
		printf("\nEmp_no : %d",e[i].Emp_no);
		printf("\nEmp_name : %s",e[i].Emp_name);
		printf("\nAddress : %s",e[i].address);
		printf("\nAge : %d",e[i].age);
	}
}

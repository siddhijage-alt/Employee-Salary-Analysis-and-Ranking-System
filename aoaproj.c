#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct employee {
	char name[50];
	int id;
	double salary;
	double phone;
	char dept[20];
}emp;

int main(){
	int ch;
	printf("\nMENU\n1-ADD\n2-display\n3-sort\n4-search\n5-compare\n6-EXIT");
	while(1){
	printf("Enter choice: ");
	scanf("%d",&ch);
	if(ch==6)
	break;
	switch(ch){
		case 1:{
			emp e;
			printf("Enter name: ");
    		scanf("%s", e.name);

    		printf("Enter ID: ");
    		scanf("%d", &e.id);

    		printf("Enter salary: ");
    		scanf("%lf", &e.salary);

    		printf("Enter phone: ");
		    scanf("%lf", &e.phone);

    		printf("Enter department: ");
    		scanf("%s", e.dept);
			break;
		}
	}
	}
	
}

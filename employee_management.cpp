#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<time.h>
typedef struct employee {
	char name[50];
	int id;
	double salary;
	double phone;
	char dept[20];
}emp;
void getdata(emp*e){
	printf("enter name: ");
	scanf("%s",e->name);
	printf("enter id: ");
	scanf("%d",&e->id);
	printf("enter salary: ");
	scanf("%lf",&e->salary);
	printf("enter phone: ");
	scanf("%lf",&e->phone);
	printf("enter department: ");
	scanf("%s",e->dept);
}
void display(emp*e, int count){
	int i;
	printf("\nName\tID\tSalary\t\tPhone\t\tDepartment");
	for(i=0;i<count;i++){
		printf("\n%s\t%d\t%.f\t\t%.f\t%s\n",e[i].name,e[i].id,e[i].salary,e[i].phone,e[i].dept);
		
	}
}
void search(emp*e, int s,int count){
	int i;
	int found=0;
	for(i=0;i<count;i++){
		if(s==e[i].id){
		printf("\nemployee details");
		printf("\nName\tID\tSalary\tPhone\tDepartment");
		printf("\n%s\t%d\t%.f\t%.f\t%s\n",e[i].name,e[i].id,e[i].salary,e[i].phone,e[i].dept);
		found=1;
		break;
		}
	}
	if(found==0){
	printf("\n wrong id");
	}
}
void insertion(emp a[], int n){
    int i, j;
    emp val;
    for(i = 1; i < n; i++){
        val = a[i];
        for(j = i - 1; j >= 0; j--){
            if(val.salary > a[j].salary){
                a[j + 1] = a[j];
            }
            else{
                break;
            }
        }
        a[j + 1] = val;
    }
}
void insertion2(emp a[], int n){
    int i, j;
    emp val;
    for(i = 1; i < n; i++){
        val = a[i];
        for(j = i - 1; j >= 0; j--){
            if(val.salary < a[j].salary){
                a[j + 1] = a[j];
            }
            else{
                break;
            }
        }
        a[j + 1] = val;
    }
}
void selection(emp a[], int n){
    int i, j, p;
    emp temp;
    for(i = 0; i < n - 1; i++){
        p = i;
        for(j = i + 1; j < n; j++){
            if(a[j].salary > a[p].salary){
                p = j;
            }
        }
        temp = a[i];
        a[i] = a[p];
        a[p] = temp;
    }
}
void compare(emp a[], int n){
    emp b[100], c[100];
    int i;
    double it, st;
    if(n == 0){
        printf("\nNo employee records to compare!");
        return;
    }
    for(i = 0; i < n; i++){
        b[i] = a[i];
        c[i] = a[i];
    }
    clock_t start=clock();
    insertion(b, n);
    clock_t end=clock();
    it= (double)(end - start) / CLOCKS_PER_SEC;
    clock_t start1=clock();
    selection(c, n);
    clock_t end1=clock();
    st= (double)(end1 - start1) / CLOCKS_PER_SEC;
    printf("\nINSERTION SORT");
    printf("\nSorted salaries:");
    display(b, n);
    printf("\nSELECTION SORT");
    printf("\nSorted salaries:");
    display(c, n);
    printf("\nPERFORMANCE COMPARISON");
    printf("\nInsertion Sort Time: %f seconds",it);
    printf("\nSelection Sort Time: %f seconds",st);
    printf("\n\nANALYSIS");
    printf("\nInsertion Sort Time Complexity: O(n^2)");
    printf("\nSelection Sort Time Complexity: O(n^2)");
    if(it< st){
        printf("\nInsertion Sort was faster for this input");
    }
    else if(st< it){
        printf("\nSelection Sort was faster for this input");
    }
    else{
        printf("\nBoth took approximately the same time");
    }
}
int main(){
	int ch,s;
	emp e[100];
	int count=0;
	printf("\nMENU\n1-ADD\n2-display\n3-sort\n4-search\n5-compare\n6-EXIT");
	while(1){
	printf("\nEnter choice: ");
	scanf("%d",&ch);
	if(ch==6)
	break;
	switch(ch){
		case 1:{
			getdata(&e[count]);
			count++;
			break;
		}
		case 2:{
			display(e , count);
			break;
		}
		case 3:{
			printf("1-highest to lowest\n2-lowest to highest");
			printf("\nenter sort order: ");
			scanf("%d",&s);
			if(s==1){
				insertion(e,count);
			}
			else{
				insertion2(e,count);
			}
			display(e , count);
			break;
		}
		case 4:{
			printf("Enter employee Id: ");
			scanf("%d",&s);
			search(e,s,count);
			break;
		}
		case 5:{
			compare(e, count);
			break;
		}
	}
	}
	return 0;	
}

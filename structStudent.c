#include<stdio.h>
#include<stdlib.h>
struct student{
char name[10];
char address[15];
int marks;
};
void main()
{
struct student *p;
int i,n;
printf("enter no. of students\n");
scanf("%d",&n);
p=(struct student*)malloc(n*sizeof(struct student));
for(i=0;i<n;i++){
printf("enter a name\n");
scanf("%s",(p+i)->name);
printf("enter address\n");
scanf("%s",(p+i)->address);
printf("enter marks\n");
scanf("%d",&(p+i)->marks);
}
printf("\ndisplaying information\n");
for(i=0;i<n;i++){
printf("name: %s\n",(p+i)->name);
printf("address: %s\n",(p+i)->address);
printf("marks: %d\n",(p+i)->marks);
printf("\n");
}
}


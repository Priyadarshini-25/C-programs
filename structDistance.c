#include<stdio.h>
typedef struct distance{
int m;
int cm;
}distance;

distance add(distance n1,distance n2);
void main(){
distance n1,n2,res;
printf("for 1st set enter distance in m and cm:\n");
scanf("%d%d",&n1.m,&n1.cm);
printf("for 2nd set enter distance in m and cm:\n");
scanf("%d%d",&n2.m,&n2.cm);

res=add(n1,n2);
printf("sum= %dm and %dcm\n",res.m,res.cm);

}
distance add(distance n1,distance n2){
distance temp;
temp.m=n1.m+n2.m;
temp.cm=n1.cm+n2.cm;
if(temp.cm>100){
temp.cm=temp.cm%100;
temp.m+=1;
}
return(temp);
}

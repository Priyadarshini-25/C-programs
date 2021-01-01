#include<stdio.h>
void main(){
    char str[100];
    char *p;
    int vow=0,con=0;
    printf("enter a word\n");
    scanf("%s",str);
    p=str;
    while(*p!='\0'){

        if(*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U'||*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'){
            vow++;
        }
        else{
            con++;
        }
        p++;
    }
    printf("vowels: %d\n",vow);
    printf("consonants: %d\n",con);
}
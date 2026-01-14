#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define MAX(a,b) (a>b) ? a:b

int ADD(const int a,const int b);
int ADD(const int a,const int b){
    return a+b;
}


int main(){
#if 0
    printf("*****************test1*****************\n");
    int value1=4,value2=1;
    value1=MAX(value1,value2);
    printf("%d\n",value1);


    printf("*****************test2*****************\n");
    bool a=100;
    int value3=1;
    if (a==value3) {
        printf("equal\n");
    }
    printf("sizeof(%d)==%d\n",a,sizeof(bool));


    printf("*****************test3*****************\n");
    int arr1[2]={0,1};
    int* restrict p=arr1;
    int* q=arr1;
    printf("%d %d\n",arr1[0],arr1[1]);
    (*p)++;
    (*q)++;
    printf("%d %d\n",arr1[0],arr1[1]);


    printf("*****************test4*****************\n");
    int value4=1.1f;
    int arr2[2]={0,1};
    arr2[value4]=10;
    bool flag=1;
    flag+=-2;
    printf("%d %d %d\n",arr2[0],arr2[1],flag);


    printf("*****************test5*****************\n");
    char value5='A';
    char value6=value5+1U;
    printf("%c",value6);


    printf("*****************test6*****************\n");
    unsigned int const value7=10;
    int value8=7;
    scanf("%d",&value8);
    if (value8>=0){
            printf("%d",value7+(unsigned int)value8);
    }
    else if(value8>=-10){
        printf("%d",value7-(unsigned int)(abs(value8)));
    }
    else{
        printf("-%d",(unsigned int)(abs(value8))-value7);
    }



    printf("*****************test7*****************\n");
    int (*p)(const int a,const int b)=&ADD;
    printf("%d",ADD(1,2));

#endif
    printf("*****************test8*****************\n");
    int arr[2]={1,0};
    int *p=&arr[0];
    int *q=&arr[1];
    if(q>p){
        printf("%d",q-p);
    }







































    return 0;
}
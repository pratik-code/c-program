#include<stdio.h>
int (int[]);
void main(){

int arr[50],int a[50];

a=array(arr);

for(i=0;i<5;i++){

    printf("%d",a[i]);
}

}

int array(int arr[]){

for(i=0;i<5;i++){

    scanf("%d",arr[i]);
}
return arr;
}

#include <stdio.h>
#include <stdlib.h>
#define size 8

void sort(int a[],int N);
void printArray(int a[],int N);
void printArray_sort(int a[],int N);


//==============================================================
int main()
{

int a[size]={2,1,3,5,6,4,7,8};
printArray( a, size);
sort(a,size);
printArray_sort(a,size);

return 0;
}
//==============================================================
void sort(int a[],int N){
for (int pass=1; pass<=size-1; pass++){
    for(int i=0; i<=size-2-(pass-1);i++){
        if (a[i]<a[i+1]){
            int temp = a[i];
            a[i]=a[i+1];
            a[i+1]=temp;


            }
    }

}
}
//==============================================================
void printArray(int a[],int N)
{
    int j;
    printf("Array a:");
    for(j=0;j<N;j++)
        printf("\na[%d]=%d",j,a[j]);
}
void printArray_sort(int a[],int N)
{
    int j;
    printf("\n\nArray sort:");
    for(j=0;j<N;j++)
        printf("\na[%d]=%d",j,a[j]);
}


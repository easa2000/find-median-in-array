//program to find median values for a given array
#include<stdio.h>
void main(){
    int n,i;
    float median,values[10];
    printf("\n Enter the size of an array: ");
    scanf("%d",&n);
    printf("\n Enter the values: ");
    for(i=0;i<n;i++){
        scanf("%f",&values[i]);
    }
    if(n % 2 == 0)
       median = (values[n/2] + values[n/2+1]/2.0);
    else
       median = values[n/2 + 1];
    printf("\n MEDIAN = %.2f",median);
}


#include<stdio.h>
int main(){
    int length,i;
    printf("Enter the size of the fibonacci series\n");
    scanf("%d",&length);
    int fibonance[length];
       fibonance[0]=0,fibonance[1]=1;
    for(i=2;i<length;i++){

        fibonance[i]=fibonance[i-1]+fibonance[i-2];

    }
    displayFib(&fibonance,length);

    }

    void displayFib(int *fib[],int len){
    	int j;
      for( j=0;j<len ;j++){
          printf("%d \t", *(fib+j));
    }

    }

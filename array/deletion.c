#include <stdio.h>


int main () {


    int a[100]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int i,j,n=16;
    for(i=0;i<n;i++){
       if(a[i]%5==0){
        for(j=i;j<n;j++){
            a[j+1]=a[j+3];
            a[j+2]=a[j+4];
        }
        n=n-2;
       }
    }

    for(i=0;i<=n;i++){
        printf("%d ",a[i]);
    }


    return 0;
}
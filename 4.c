#include<stdio.h>
int main(){
    int n,col,row;
    scanf("%d", &n);
    n = n-1;

    //upper loop

    for(row=n; row>=1; row--){
        for(col=1; col<=row; col++){
            printf("#");
        }
        for(col=1; col<=n-row; col++){
            printf("  ");
        }
        for(col=1; col<=row; col++){
            printf("#");
        }
        printf("\n");
    }

    //lower loop

    for(row=1; row<=n; row++){
        for(col=1; col<=row; col++){
            printf("#");
        }
        for(col=1; col<=n-row; col++){
            printf("  ");
        }
        for(col=1; col<=row; col++){
            printf("#");
        }
        printf("\n");
    }






return 0;
}

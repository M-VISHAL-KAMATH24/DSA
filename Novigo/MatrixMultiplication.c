#include<stdio.h>
#include<stdlib.h>

int main(){
    int r1,c1,r2,c2;
    printf("enter the rows and column of the first matrix\n");

    scanf("%d %d",&r1,&c1);
    printf("enter the rows and column of the second matrix\n");
    scanf("%d %d",&r2,&c2);
    if (c1!=r2){
        printf("matrix multiplication is not possible");
        return 0;
    }
    int A[100][100],B[100][100],C[100][100];
    //inputer for the first matrix
    printf("enter the first matrix\n");
    int i,j,k;
    for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
        scanf("%d",&A[i][j]);
    }
}
printf("enter the second matrix\n");
for(i=0;i<r2;i++){
for(j=0;j<c2;j++){
scanf("%d",&B[i][j]);
}
}
//initialize the resultant matrix
for(i=0;i<r1;i++){
for(j=0;j<c2;j++){
C[i][j]=0;
}
}
//matrix multiplication
for (int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
        for(int k=0;k<c1;k++){
            C[i][j]+=A[i][k]*B[k][j];
        }
    }
}
//display the result
for(i=0;i<r1;i++){
for(j=0;j<c2;j++){
printf("%d ",C[i][j]);
}
printf("\n");
}

    return 0;
}
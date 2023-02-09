#include<stdio.h>


void read2dArray(int a[10][10],int m,int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
}

void print2dArray(int a[10][10],int m,int n){
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j< n; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
        
    }
    

}

void multiplyMatrices(int a[10][10], int b[10][10],int c[10][10],int m,int n,int p){
    int i,j,k,s;
     for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            s=0;
            for(int k=0;k<n;k++){
                s=s+a[i][k]*b[k][k];
            }
            c[i][j]=s;
        }
    }  
}


int main(){
    int a[10][10],b[10][10],c[10][10];
    printf("Enter the matrix order a :");
    int m,n,p;
    scanf("%d%d",&m,&n);
    printf("Enter column and matrix : ");
    scanf("%d",&p);
    read2dArray(a,m,n);
    read2dArray(b,m,n);
    multiplyMatrices(a,b,c,m,n,p);
    print2dArray(c,m,p);
    
    
}
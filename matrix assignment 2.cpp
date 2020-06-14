#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int matrixMul(int *tr, int *qr, int m, int n);
int main()
{
    int *tr,*qr,*q,*p,m,n,i,j;
    printf("Enter the no.of rows and columns");
    scanf("%d %d", &m, &n);
    q=(int *)malloc(sizeof(int)*m*n);
    p=(int *)malloc(sizeof(int)*m*n);
    printf("Enter the elements in matrix 1");
    tr=q;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", tr);
            tr++;
        }
    }
    printf("Enter the elements in matrix 2");
    qr=p;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", qr);
            qr++;
        }
    }
    printf("\nThe matrix 1 displayed as\n");
    tr=q;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t", *tr);
            tr++;
        }
        printf("\n");
    }
    printf("\nThe matrix 2 displayed as\n");
    qr=p;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t", *qr);
            qr++;
        }
        printf("\n");
    }
    matrixMul(q,p,m,n);
    int transposeIndividual(
	);
    printf("\n---------------------------------------------\n");
    printf("The validity is proved");
    return 0;

}
int matrixMul(int *tr, int *qr, int m, int n)
{
    int *rr,*r,i,j,sum,k,t[10][10];
    r=(int *)malloc(sizeof(int)*m*n);
    rr=r;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum=0;
            for(k=0;k<n;k++)
            {
                sum=sum+(*(tr+n*i+k))*(*(qr+n*k+j));
            }
            *rr=sum;
            rr++;
        }
    }
    rr=r;
    printf("\nThe matrix multiplication is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t", *rr);
            rr++;
        }
        printf("\n");
    }
    rr=r;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
                  t[i][j]=*(rr+n*j+i);

        }
    }
    printf("\nThe Multiplied matrix transpose is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t ", t[i][j]);
        }
        printf("\n");
    }
}
int transposeIndividual(int *tr, int *qr, int m, int n)
{
    int i,j,k, p[10][10], q[10][10],sum=0, multiply[10][10];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            p[i][j]=*(tr+n*j+i);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            q[i][j]=*(qr+n*j+i);
        }
    }
    printf("\nThe transpose of matrix 1 is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t", p[i][j]);
        }
        printf("\n");
    }
    printf("\nThe transpose of matrix 2 is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t", q[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<m;k++)
            {
                sum=sum+q[i][k]*p[k][j];
            }
            multiply[i][j]=sum;
            sum=0;
        }
    }
    printf("\nMultiplication of transpose of matrix 1 and 2 is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t ", multiply[i][j]);
        }
        printf("\n");
    }
    
}


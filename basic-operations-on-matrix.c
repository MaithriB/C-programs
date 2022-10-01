#include<stdio.h>
int sum(int a[50][50],int b[50][50],int n,int m);
int sub(int a[50][50],int b[50][50],int n,int m);
int multiply(int a[50][50],int b[50][50],int n,int m);
int transpose(int a[50][50],int n,int m);
int main()
{
    int end=0;
    for(int x=0;x<5;x++)
    {
    printf("press 1 for sum of 2 matrices \n");
    printf("press 2 for subtraction of 2 matrices \n");
    printf("press 3 for multiplication of 2 matrices \n");
    printf("press 4 for transpose of a matrix \n");
    printf("press 5 for exit \n");
    int ch;
    printf("enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        {
            int a[50][50],b[50][50],n,m;
            printf("\nyou have selected option 1 that is sum of 2 matrices \n");
            printf("enter the number of rows:");
            scanf("%d",&n);
            printf("enter the number of columns:");
            scanf("%d",&m);
            printf("enter the elements of the first matrix:");
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }
            printf("enter the elements of the second matrix:");
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    scanf("%d",&b[i][j]);
                }
            }
            printf("1st matrix:\n");
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    printf("%d\t",a[i][j]);
                }
                printf("\n");
            }
            printf("2nd matrix:\n");
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    printf("%d\t",b[i][j]);
                }
                printf("\n");
            }
            sum(a,b,n,m);
            break;
        }
        case 2:
        {
            int a[50][50],b[50][50],n,m;
            printf("\nyou have selected option 2 that is substraction of 2 matrices \n");
            printf("enter the number of rows:");
            scanf("%d",&n);
            printf("enter the number of columns:");
            scanf("%d",&m);
            printf("enter the elements of the first matrix:");
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }
            printf("enter the elements of the second matrix:");
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    scanf("%d",&b[i][j]);
                }
            }
            printf("1st matrix:\n");
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    printf("%d\t",a[i][j]);
                }
                printf("\n");
            }
            printf("2nd matrix:\n");
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    printf("%d\t",b[i][j]);
                }
                printf("\n");
            }
            sub(a,b,n,m);
            break;
        }
        case 3:
        {
            int a[50][50],b[50][50],n,m;
            printf("\nyou have selected option 3 that is multiplication of 2 matrices \n");
            printf("enter the number of rows:");
            scanf("%d",&n);
            printf("enter the number of columns:");
            scanf("%d",&m);
            printf("enter the elements of the first matrix:");
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }
            printf("enter the elements of the second matrix:");
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    scanf("%d",&b[i][j]);
                }
            }
            printf("1st matrix:\n");
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    printf("%d\t",a[i][j]);
                }
                printf("\n");
            }
            printf("2nd matrix:\n");
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    printf("%d\t",b[i][j]);
                }
                printf("\n");
            }
            multiply(a,b,n,m);
            break;
        }
        case 4:
        {
            int a[50][50],n,m;
            printf("\nyou have selected option 4 that is transpose of a matrix \n");
            printf("enter the number of rows:");
            scanf("%d",&n);
            printf("enter the number of columns:");
            scanf("%d",&m);
            printf("enter the elements of the matrix:");
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }
            printf("matrix:\n");
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    printf("%d\t",a[i][j]);
                }
                printf("\n");
            }
            transpose(a,n,m);
            break;
        }
        case 5:
        {
            printf("EXIT");
            end++;
            break;
        }
        default:
        printf("invalid input");
        break;
    }
    if(end==1)
    break;
    }
    return 0;
}
int sum(int a[50][50],int b[50][50],int n,int m)
{
    int sum[50][50];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
        printf("\n");
    }
    printf("sum of 2 matrices:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
}
int sub(int a[50][50],int b[50][50],int n,int m)
{
    int sub[50][50];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            sub[i][j]=a[i][j]-b[i][j];
        }
        printf("\n");
    }
    printf("subtraction of 2 matrices:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d\t",sub[i][j]);
        }
        printf("\n");
    }
}
int multiply(int a[50][50],int b[50][50],int n,int m)
{
    int sum=0,c[50][50];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            for(int k=0;k<m;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            sum=0;
        }
    }
    printf("product of 2 matrices:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
int transpose(int a[50][50],int n,int m)
{
    int b[50][50];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    printf("transpose of a matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}

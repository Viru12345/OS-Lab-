#include<stdio.h>
#include<stdlib.h>

void multiply()
{
    int m,n,p,q,a[3][3],b[3][3],res[3][3];
    printf("Enter the rows and col of matrix-1: ");
    scanf("%d%d",&m,&n);
    printf("Enter the rows and col of matrix-2: ");
    scanf("%d%d",&p,&q);

    if(n!=p)
    {
        printf("Matrix multiplication not possible!");
        return 0;
    }
    else
    {
        printf("Enter the elements in Mat-1:");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                scanf("%d",&a[i][j]);
        }
        
        printf("Enter the elements in Mat-2:");
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<q;j++)
                scanf("%d",&b[i][j]);
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
            res[i][j]=0;
            for(int k=0;k<q;k++){
                res[i][j]+=a[i][k]*b[k][j];
            }
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
            printf("%d\t",res[i][j]);
            }
            printf("\n");
        }
    }
    exit(0);
}

void subtract()
{
    int m,n,p,q,a[3][3],b[3][3],res[3][3];
    printf("Enter the rows and col of matrix-1: ");
    scanf("%d%d",&m,&n);
    printf("Enter the rows and col of matrix-2: ");
    scanf("%d%d",&p,&q);
    
    if(m!=p || n!=q){
        printf("Cannot subtract!");
        exit(0);
    }
    else
    {
        printf("Enter the elements in Mat-1:");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                scanf("%d",&a[i][j]);
        }
        
        printf("Enter the elements in Mat-2:");
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<q;j++)
                scanf("%d",&b[i][j]);
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=a[i][j]-b[i][j];
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
            printf("%d\t",res[i][j]);
            }
            printf("\n");
        }
    }
    exit(0);
}

void add()
{
    int m,n,p,q,a[3][3],b[3][3],res[3][3];
    printf("Enter the rows and col of matrix-1: ");
    scanf("%d%d",&m,&n);
    printf("Enter the rows and col of matrix-2: ");
    scanf("%d%d",&p,&q);
    
    if(m!=p || n!=q){
        printf("Cannot add!");
        exit(0);
    }
    else
    {
        printf("Enter the elements in Mat-1:");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                scanf("%d",&a[i][j]);
        }
        
        printf("Enter the elements in Mat-2:");
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<q;j++)
                scanf("%d",&b[i][j]);
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=a[i][j]+b[i][j];
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
            printf("%d\t",res[i][j]);
            }
            printf("\n");
        }
    }
    exit(0);
}


void transpose()
{
    int m,n,a[3][3],transpose[3][3];
    printf("Enter the rows and col of matrix: ");
    scanf("%d%d",&m,&n);
    
    printf("Enter the elements in matrix:");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    
    printf("Given matrix: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < m; ++i)
    for (int j = 0; j < n; ++j) {
    transpose[j][i] = a[i][j];
    }
    
    printf("Transposed matrix: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }

}


int main()
{
    int ch;
    printf("1. Multiply\n2. Add\n3. Subtract\n4. Transpose\n");
    printf("Enter choice: ");
    scanf("%d",&ch);
    while(1){
        switch(ch)
        {
            case 1: multiply();
                    break;
            case 2: add();
                    break; 
            case 3: subtract();
                    break;
            case 4: transpose();
                    break;
            default: printf("Invalid choice!!!");
                    break;
        }
    }
}

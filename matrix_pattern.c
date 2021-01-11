/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,j;
    int k=1,a1=0;
    int a[100][100];
    int row=0,col=0;
    printf("Enter n: ");
    scanf("%d",&n);
    
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=i;j--)
        {
            a[row][col] = j;
            printf("%d:%d - %d\n",row,col,a[row][col]);
            col++;
        }
        col=0;
        row++;
    }
    row = 0;
    col = 0;
    for(i=n;i>=2;i--)
    {
        while(a1!=k)
        {
            a1++;
            col++;
            
        }
        a1=0;
        k++;
        for(j=1;j<i;j++)
        {
            a[row][col] = i;
            printf("%d:%d - %d\n",row,col,a[row][col]);
            col++;
        }
        col = 0;
        row++;
    }
    
    for(row=0;row<n;row++)
    {
        for(col=0;col<n;col++)
        {
            printf("%d ",a[row][col]);
        }
        printf("\n");
    }

    return 0;
}


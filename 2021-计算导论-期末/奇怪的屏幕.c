#include<stdio.h>
int main()
{
    int m,n,x,y,i,j;
    int a,b,c;
    int count=0;
    scanf("%d%d",&m,&n);
    int screen[m+2][n+2];
    for(x=0;x<m+2;x++)
    {
        for(y=0;y<n+2;y++)
            screen[x][y]=0;
    }
    scanf("%d",&a);
    for(x=0;x<a;x++)
    {
        scanf("%d%d",&b,&c);
        for(i=-1;i<2;i++)
        {
            for(j=-1;j<2;j++)
                screen[b+i][c+j]=1;
        }
    }
    for(x=1;x<m+1;x++)
    {
        for(y=1;y<n+1;y++)
                count+=screen[x][y];
    }
    printf("%d",count);
    return 0;
}

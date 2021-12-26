/*根据某国选举制度，该国总统由选举人团选举产生，并非由选民直接选举产生，获得半数以上选举人票者当选总统。在该国所有的州均实行“胜者全得”规则，
即把本州的选举人票全部给予在本州获得相对多数选民票的总统候选人。
根据此规则，请你写一段程序来判断一个候选人至少在多少个州获得多数选民票才能当选总统。
输入格式:
第一行为一个整数n（0<n<1000),代表该国共有n个州。
第二行为n个用空格分隔的整数，代表每个州的选举人票数。。
输出格式:
为一个整数m，代表一个候选人当选总统至少要在m个州获得多数选民票。测试用例保证合法且所有整数可以用int存储。*/

#include<stdio.h>
int main()
{
    int n,temp,sum,s=0,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]<=a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0,sum=0;i<n;i++)
        sum+=a[i];
    for(i=0;i<n;i++)
    {
        s+=a[i];
        if(s*2>sum)
            break;
    }
    printf("%d\n",i+1);
    return 0;
}
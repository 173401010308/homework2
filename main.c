#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
	int n,m,p=0,max=0;
	int a[100]={0};      //最多100个

	printf("请输入整数个数:");
	scanf("%d",&n);      //1-100之间的正整数才有意义
	if(n<0||n>100)
	{
	    printf("输入错误，请输入1-100之间的正整数！");
	    return 0;
	}

	printf("请输入整数:");
	for(m=0;m<n;m++)
    {
        scanf("%d",&a[m]);
    }

	for(m=0;m<n;m++)
	{
		if(p<0)
			p=a[m];
		else
			p=p+a[m];
		if(max<p)
			max=p;
	}
    if(max<0)
        max=0;
	printf("最大子段和为%d\n",max);
	return 0;
}

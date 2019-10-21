#include<stdio.h>
#include <string.h>
int main()
{
 char str[1000];     //此处设置1000字符以内的文本
 int a,b,c,d,i,m;
 while(gets(str)!=NULL)
 {
 	a=b=c=d=0;
    m=strlen(str);
 	for(i=0;i<m;i++)
	{
	if(str[i]>='A'&&str[i]<='Z')   //利用大写字母个数统计句子个数（不考虑句中有特殊单词需要大写）
c++;
		{if(str[i]>='a'&& str[i]<='z'||str[i]>='A'&&str[i]<='Z') //统计字母个数
    a++;
    else
	{if(str[i]==' ')   //统计空格个数
        b++;
		
        else
        d++;}}  //统计标点符号个数
    }
 printf("字母的个数为%d ",a);
 printf("空格的个数为%d ",b);
	 printf("句子的个数为%d ",c); 
 printf("符号的个数为%d\n",d);
	 printf("单词的个数为%d\n",b+d);  //空格数加标点符号数为单词个数（不考虑连字符，引号）
}
}
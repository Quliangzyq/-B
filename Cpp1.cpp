#include<stdio.h>
#include <string.h>
int main()
{
 char str[1000];     //�˴�����1000�ַ����ڵ��ı�
 int a,b,c,d,i,m;
 while(gets(str)!=NULL)
 {
 	a=b=c=d=0;
    m=strlen(str);
 	for(i=0;i<m;i++)
	{
	if(str[i]>='A'&&str[i]<='Z')   //���ô�д��ĸ����ͳ�ƾ��Ӹ����������Ǿ��������ⵥ����Ҫ��д��
c++;
		{if(str[i]>='a'&& str[i]<='z'||str[i]>='A'&&str[i]<='Z') //ͳ����ĸ����
    a++;
    else
	{if(str[i]==' ')   //ͳ�ƿո����
        b++;
		
        else
        d++;}}  //ͳ�Ʊ����Ÿ���
    }
 printf("��ĸ�ĸ���Ϊ%d ",a);
 printf("�ո�ĸ���Ϊ%d ",b);
	 printf("���ӵĸ���Ϊ%d ",c); 
 printf("���ŵĸ���Ϊ%d\n",d);
	 printf("���ʵĸ���Ϊ%d\n",b+d);  //�ո����ӱ�������Ϊ���ʸ��������������ַ������ţ�
}
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 2048
void Encrypt()
{
char in[N];
int d,length,i;
int t[N];
printf("����������\n");
gets(in);
printf("������ƫ����(ע:���ȡ��,��ǰȡ��)\n");
scanf("%d",&d);
d%=26; //�������26������
d+=26;
d%=26; //��������Ϊ����d��Ϊ��,������ǰ2�൱�����24
length=strlen(in);
for(i=0;i<=length;i++) //��in[N]���и���
{
t[i]=in[i];
}
for(i=0;i<=length;i++)
{
if(in[i]>=('a')&&in[i]<=('z'))
{
t[i]+=d;
if(t[i]>'z') //������ֻ��Ҫ�ж�һ����󳬹�'z'�����
t[i]-=26; // char����������ʱ������Խ��128,����������t[N]�ȴ���
in[i]=t[i];
}
else if(in[i]>=('A')&&in[i]<=('Z'))
{
in[i]+=d;
if(in[i]>'Z') //������ֻ��Ҫ�ж�һ����󳬹�'Z'�����
in[i]-=26;
}
}
puts(in);
}
void Decrypt()
{
FILE *fp;
char ch[N];
int i=0,length,t,j,copy[N];
fp=fopen("password.txt","r");
if(fp!=NULL)
{
while(fscanf(fp,"%c",&ch[i])!=EOF) //��ȡ���ݵ����飬ֱ���ļ���β(����EOF)
i++; //ע���ַ����Ⱦ���i��ֵ
ch[i]='\0'; //�ɼӿɲ���
fclose(fp);
}
length=i;
for(i=0;i<=length;i++)
{
copy[i]=ch[i];
}
for(t=1;t<=26;t++) //ѭ��26�γ������н��
{
	for(i=0;i<length;i++)
	{
		if(ch[i]>='a'&&ch[i]<='z')
		{
			copy[i]+=1;  //����ط���+=1������=+t��Ϊÿ��ch����䶯
			if(copy[i]>'z')
			{copy[i]-=26;}
			ch[i]=copy[i];
		}
		else if(ch[i]>='A'&&ch[i]<='Z')
		{
			ch[i]+=1;
			if(ch[i]>'Z')
			{ch[i]-=26;}
		}

	}
printf("��%2d�ν��:",t);
puts(ch);
}
}
void Welcome()
{
printf("���������ڼ���/���ܿ�������\n");
printf("��ѡ����\n");
printf("1.����\t2.����\t3.˵��\t4.�˳�\n");
}
void Help()
{
printf("���������뵽ͬ�ļ�����password.txt��,ֱ��ѡ��\"����\"����\n");
}
void UI()
{
system("title Caesar Cipher");
system("mode con cols=80 lines=35");
system("color f0");
}
int main()
{
int choice;
UI();
Welcome();
scanf("%d%*c",&choice);
switch(choice)
{
case 1:Encrypt();system("pause");break;
case 2:Decrypt();system("pause");break;
case 3:Help();system("pause");break;
default:break;
}
return 0;
}

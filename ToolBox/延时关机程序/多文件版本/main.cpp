#include "Shutdown.h"
int main()
{
	UI();
	int flag,t;
	char input[20],output[20];
	float time=0;

	Message1();
	scanf("%d",&flag);
	getchar();

	printf("�������ӳ�ʱ��\n");
	gets(input);

	if(i_or_f(input))
		time = char_float(input);
	else
		time = char_int(input);
	printf("Your choice is No.%d\n",flag);
//	printf("Shutdown will work \n");
	switch(flag)
	{
		case 1:
			time *= 3600;
			t = int(time);
			break;
		case 2:
			t = int(time);
			break;
		case 3:
			time *= 60;
			t = int(time);
			break;
	}
	int_to_char(t,output);

	Shutdown(output);

//	printf("Your computer will shutdown in \n");


	printf("������ֹ�ػ����̣�������1���س�\n");
	scanf("%d",&flag);
	if(flag==1)
	{
		system("shutdown -a");
		printf("�ػ���������ֹ!\n");
	}
	else
		printf("�ػ��������������!\n");
	printf("������3����Զ��˳�!\n");
	Sleep(3000);
	return 0;
}



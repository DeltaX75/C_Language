#include<iostream>	// ��׼��
#include<fstream>		// �ļ���
#include<string>		// �ַ���
#include <sstream>
using namespace std;	// ʹ��std�����ռ�
int main()
{
	float a[100];
	int i=0;        //��
	string str;    	//�ַ���
	ifstream inFile;
	inFile.open("number.txt");	//���ļ�

	if(inFile.is_open())
	{
		//���ɹ����ļ�
		while( !inFile.eof() )	//��δ���ļ�����
		{
			i=0;
			getline(inFile, str, '\n');	// ��ȡһ�����ݣ������str��
			istringstream istr(str);
    		while( !istr.eof() )
    		{
      			istr >> a[i];
				cout << a[i] <<endl ;
        		i++;
   			}
		}
	// 		for(int ii=0;ii<i;ii++) 
	//        	cout << a[ii] <<endl ;
	}
	inFile.close();  // �ر��ļ�

	system("pause");
	return 0;
}

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string a[100];	//����string����,��100�е��ı�,��Ҫ������
    int i=0;
    ifstream infile;
    infile.open("D:\\DeltaX\\iStudy\\Competition\\��ѧ��ģ\\SelfMade\\_04��ѵ4\\Temp\\Temp\\data.txt",ios::in);
 
    while(!infile.eof())            // ��δ���ļ�����һֱѭ�� 
    {
        getline(infile, a[i],'\n');//��ȡһ�У��Ի��з�����������a[]��
        i++;						//��һ��
    }


    for(int ii=0;ii<i;ii++)			// ��ʾ��ȡ��txt���� 
    {  
        cout<<a[ii]<< endl;
    }
	infile.close();

	system("pause");
	return 0;
}


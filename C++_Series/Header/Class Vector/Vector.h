//Vector.h
#include <iostream>
#include <cmath>
using namespace std;
#ifndef VECTOR
#define VECTOR
class vector{
public:
	vector(){x=y=z=0;}		//Ĭ�Ϲ��캯��������
	vector(double a,double b,double c);
	void setX(double t){x=t;}
	void setY(double t){y=t;}
	void setZ(double t){z=t;}
	void set(double a,double b,double c){x=a,y=b,z=c;}
	void display();
	double getX(){return x;}
	double getY(){return y;}
	double getZ(){return z;}
	void Default(){x=y=z=0;}	//��ʼ������
	vector operator *(vector v);
	vector operator +(vector v);
	void zhijiao();		//ת��Ϊֱ������
	void haokan();		//��Լ����0�������0
	double module();	//������ģ������
private:
	double x,y,z;
};
#endif

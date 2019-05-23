#include <iostream>
using namespace std;
class Point19{
public:
	Point19();
	Point19(int a,int b);
	void getX();
	void getY();
	void MoveP(int a,int b);
	Point19 operator +(const Point19 p);
	/*
	����ֵ������Point19��ĺ���
	operator +(const Point19 p)
	operator�ؼ��� +��ʾ������+����
	Ҳ�������Ϊ�Ǻ�������+
	�������const�Ȳ���
	Point19 p
	�β��б���һ��Point19��Ľ�p�Ķ���
	*/
	Point19 operator ++(int);	//��׺����p++
	Point19 operator ++();	//ǰ������++p
	Point19 operator --();
	bool operator ==(Point19 p);
	Point19 operator =(Point19 p);
private:
	int x,y;
};

Point19::Point19(){
	x=y=0;
}
Point19::Point19(int a,int b){
	x=a,y=b;
}
void Point19::MoveP(int a,int b){
	x=a,y=b;
}
void Point19::getX()
{cout<<"x="<<x<<endl;}
void Point19::getY()
{cout<<"y="<<y<<endl;}

Point19 Point19::operator +(const Point19 p)
{
	return Point19(this->x+p.x,y+p.y);
}

Point19 Point19::operator++(int)	//��׺����p++
{
	Point19 old=*this;
	//Point19(x+1,y+1);
	(this->x)+=1;
	y+=1;
	return old;
}
Point19 Point19::operator++()	//ǰ������++p
{
	//Point19 old=*this;
	//Point19(x+1,y+1);
	x+=1;
	y+=1;
	return *this;
}
Point19 Point19::operator--()
{
	Point19 old=*this;
	//Point19(x-1,y-1);
	(this->x)-=1;
	y-=1;
	return old;
}

bool Point19::operator ==(Point19 p)
{
	if ((this->x==p.x)&&(this->y==p.y))
		return 1;
	else
		return 0;
}

Point19 Point19::operator =(Point19 p)
{
	Point19 old=*this;
	this->x=p.x;
	this->y=p.y;
	return Point19(p.x,p.y);
}


int main()
{
	int i;
	Point19 p[4]={Point19()};
	p[0].getX();
	p[0].getY();
	p[0].MoveP(10,20);
	p[1].MoveP(100,200);
	p[2].MoveP(1000,2000);
	p[3]=p[1]+p[2];
	p[3].getX();
	p[3].getY();
	cout<<endl;
	p[3]++;
	//p[3]=++p[3];
	p[3].getX();
	p[3].getY();
	p[3]--;
	p[3]++.getX();
	p[3].getY();
	
	cout<<endl;

	if(p[1]==p[2])
		cout<<"=="<<endl;
	else
		cout<<"!="<<endl;

	p[1].MoveP(1,1);
	p[2].MoveP(1,1);

		if(p[1]==p[2])
		cout<<"=="<<endl;
	else
		cout<<"!="<<endl;

	p[3]=p[2];
	p[3].getX();
	p[2].getX();


	system("pause");
	return 0;
}

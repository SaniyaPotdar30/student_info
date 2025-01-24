#include<iostream>
#include<stdio.h>
using namespace std;

class student
{
	int roll_no,s1,s2,s3,total;
	char name[15];
	float per;
	
	public:
		void get_data()
	{
		cout<<"Roll no.= ";
		cin>>roll_no;
		cout<<"Name= ";
		cin>>name;
		cout<<"Marks of 3 subjects= ";
		cin>>s1>>s2>>s3;
		total=s1+s2+s3;
		per=(float)total/3;
	}
	void show_data()
	{
		cout<<roll_no<<"\t"<<"\t"<<name<<"\t"<<s1<<"\t"<<s2<<"\t"<<s3<<"\t"<<total<<"\t"<<per<<endl;
	}
};
int main()
{
	student s[5];
	
	int i;
	for(i=0;i<=4;i++)	
	s[i].get_data();
	cout<<"\nRoll no.\tName\tPhy\tChem\tMath\tTotal\tPer\n";
	
	for(i=0;i<=4;i++)
	s[i].show_data();
}


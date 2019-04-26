#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<fstream>//header file for file management
using namespace std;

class A

{ public:
   void get_data(){
    int chemistry,maths,physics;
	ofstream file1;
	file1.open("Documents:\a.txt",ios::out);
	cout<<"total classes for PHYSICS are 100"<<endl;
	cout<<"attended classes";
	cin>>physics;
	file1<<physics<<endl;
	cout<<"total classes for MATHS are 100"<<endl;
	cout<<"attended classes";
	cin>>maths;
	file1<<maths<<endl;
	cout<<"total classes for CHEMISTRY are 100"<<endl;
	cout<<"attended classes";
	cin>>chemistry;
	file1<<chemistry<<endl;
	file1.close();
}
};
class B:public A
{
	public:
		void check()
		{   int maths,chemistry,physics;
		    float attendance;
			ifstream file2;
			file2.open("Documents:\a.txt",ios::in);
			file2>>physics;
			file2>>chemistry;
			file2>>maths;
			file2.close();
			ofstream file4;
			file4.open("Documents:\a.txt",ios::out);
			attendance=(physics+maths+chemistry)/3;
			cout<<"\-------calculating-------"<<endl;
			cout<<"your attendance is: "<<attendance<<endl;
			file4<<attendance<<endl;
			file4.close();
		}
};
class C
{
	public:
		void status()
		{   
		    int maths,physics,chemistry;
			float attendance;
			ifstream file3;
			file3.open("Documents:\a.txt",ios::in);
			file3>>attendance;
			file3>>physics;
			file3>>chemistry;
			file3>>maths;
			 if(attendance >= 75)
		{
			cout<<"you are not detained,keep it up"<<endl;
			
		}
	
	 else
	{
		if(attendance < 75)
		{
			cout<<"You are detained"<<endl;;
			cout<<"Better luck next time"<<endl;
			cout<<"--------------------------------"<<endl;
			cout<<"|lets look for partial detained|"<<endl;
			cout<<"--------------------------------"<<endl;
			
		 
			
		}
	}
	if(attendance < 75)
	{   cout<<"lets check for maths"<<endl;
	   if(maths >=75)
	   {
	   	cout<<"go with maths"<<endl;
	   	
	   }
	   else{
	   	cout<<"u cant take maths"<<endl;
	   	cout<<"lets look for physics and chemistry"<<endl;
	   }
	   
	   
	}
	if(attendance < 75)
	{
	   if(chemistry>=75)
	   {
	   	cout<<"go with chemistry"<<endl;
	   	cout<<"lets look for physics";
	   }
	   else
	   {
	   	cout<<"you cant write chemistry"<<endl;
	   }
	   
	   
	}
	
	if(attendance < 75)
	{
	   if(physics>=75)
	   {
	   	cout<<"go with physics"<<endl;
	   	
	   }
	   else
	   {
	   	cout<<"you cant write physics"<<endl;
	   }
	   
	   
	}
	
	if(attendance <75)
	{
		if(physics>=75 && chemistry>=75)
		{
			cout<<"go with both physics and chemistry";
		}
	   }   
	   
}
		
		
};
class D
{ public:
  void attendance()
    {
	float attendance;
	
	ifstream file5;
	file5.open("Documents:\a.txt",ios::in);
	file5>>attendance;
	if(attendance < 75)
	{
	int	classes;
	classes=75-attendance;
	
	cout<<"-------------------"<<endl;
	cout<<"|placement classes|"<<endl;
	cout<<"-------------------"<<endl;
	cout<<"for pep classes you should have minimum of 75% attendance"<<endl;
	cout<<"so you need to attend more classes"<<endl;
	cout<<"you are just "<<classes<<" % less for sitting in placement classes";
	}
	file5.close();
	
}
};

int main()
{   cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"---------------------------------------*******************************--------------------------------------------"<<endl;
    cout<<"--------------------------------------*WELCOME TO ATTENDANCE SIMULATOR*-------------------------------------------"<<endl;
	cout<<"---------------------------------------*******************************--------------------------------------------"<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
	
	A obj1;
	obj1.get_data();
	B obj2;
	obj2.check();
	C obj3;
	obj3.status();
	D obj4;
	obj4.attendance();
	
	
	return 0;
	
	
}

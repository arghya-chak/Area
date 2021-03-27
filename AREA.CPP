#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<process.h>
#define PI 3.14
class Area
{
 public:
 float d;
 void area(float);
 void area(float,float);
 void area(float,float,float);
 void display();
};
void Area::area(float a)
   {
       d=PI*a*a;
   }
void Area::area(float a, float b)
   {
       d=a*b;
   }
void Area::area(float a, float b, float c)
   {
       float sp;
       sp=(a+b+c)/2;
       d=sqrt((sp)*(sp-a)*(sp-b)*(sp-c));
   }
void Area::display()
   {
       cout<<"Area= "<<d;
   }
void main()
   {
       Area A;
       clrscr();
       int n;
       float a, b, c;
       char ch;
       start:
       cout<<"Please choose the shape whose area you want to calculate:\n1.Circle\n2.Rectangle\n3.Triangle\n4.Exit\n";
       cin>>n;
       switch(n)
	  {
	      case 1: cout<<"Enter Radius: ";
		      cin>>a;
		      A.area(a);
		      A.display();
		      cout<<"\nDo you want to try again? (y/n)\n";
		      cin>>ch;
		      if (ch=='y'|| ch=='Y')
			 goto start;
		      break;
	      case 2: cout<<"Enter Length: ";
		      cin>>a;
		      cout<<"Enter Width: ";
		      cin>>b;
		      A.area(a, b);
		      A.display();
		      cout<<"\nDo you want to try again? (y/n)\n";
		      cin>>ch;
		      if (ch=='y'|| ch=='Y')
			 goto start;
		      break;
	      case 3: cout<<"Enter the 3 sides: \n";
		      cin>>a>>b>>c;
		      A.area(a, b, c);
		      A.display();
		      cout<<"\nDo you want to try again? (y/n)\n";
		      cin>>ch;
		      if (ch=='y'|| ch=='Y')
			 goto start;
		      break;
	      case 4: exit(0);
	  }
       getch();
   }





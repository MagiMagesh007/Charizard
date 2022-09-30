#include<iostream>
using namespace std;
int main()
{
 int tv17box,tv22box,tv26box,tv32box,tv37box;
 int tv17num,tv22num,tv26num,tv32num,tv37num;
 tv17box = 1;
 tv22box = 2;
 tv26box = 3;
 tv32box = 4;
 tv37box = 2;
 cout<<"\nEnter number of TV-LCD 17 model to be packed:";                  
 cin>>tv17num;
 cout<<"\nEnter number of TV-LCD 22 model to be packed:";
 cin>>tv22num;
 cout<<"\nEnter number of TV-LCD 26 model to be packed:";
 cin>>tv26num;
 cout<<"\nEnter number of TV-LCD 32 model to be packed:";
 cin>>tv32num;
 cout<<"\nEnter number of TV-LCD 37 model to be packed:";
 cin>>tv37num;
 cout<<"\n      **** Requisition Note ****  ";
 cout<<"\n ========================================";
 cout<<"\n     TV Model   |  Box type  |  Numbers ";
 cout<<"\n                |  required  |   ";
 cout<<"\n ========================================";
 cout<<"\n     TV-LCD 17	"<<tv17box;
 cout<<"\n     TV-LCD 22	"<<tv22box;
 cout<<"\n     TV-LCD 26	"<<tv26box;
 cout<<"\n     TV-LCD 32	"<<tv32box;
 cout<<"\n     TV-LCD 37	"<<tv37box;
 cout<<"\n ========================================";
 return 0;
 }

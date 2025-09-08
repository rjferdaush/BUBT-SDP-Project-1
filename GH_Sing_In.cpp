#include<Gaming_Hub.h>
#include<iostream>
#include<fstream>
using namespace std;

void Gaming_Hub::Sign_In(){ 
    string name1,name2;
    cout<<"Enter 1st Player Name:";
    cin>>name1;
    cout<<"Enter 2nd Player Name:";
    cin>>name2;

    ofstream singINfile("sing in information.txt",ios::out | ios::app);
    singINfile<<name1<<count<<endl<<name2<<count<<endl;
    singINfile.close();

}

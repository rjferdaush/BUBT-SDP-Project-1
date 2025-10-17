#include"Gaming_Hub.h"
#include<iostream>
#include<fstream>
using namespace std;

void Gaming_Hub::Sign_In(){ 

    string name1,name2;
    cout<<"\033[1;37mEnter 1st Player Name: \033[1;34m";
    cin>>name1;
    cout<<"\033[1;37mEnter 2nd Player Name: \033[1;31m";
    cin>>name2;
    cout<<"\033[0m";

    ofstream singINfile("sing in information.txt",ios::out);
    singINfile<<name1<<endl<<name2<<endl;
    singINfile.close();

}

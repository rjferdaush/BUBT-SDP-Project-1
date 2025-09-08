#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main(){
    string name1,name2;
    int count=0;
    cout<<"Enter 1st Player Name:";
    cin>>name1;
    cout<<"Enter 2nd Player Name:";
    cin>>name2;

    ofstream singINfile("sing in information.txt",ios::out | ios::app);
    singINfile<<name1<<count<<endl<<name2<<count<<endl;
    singINfile.close();

    fstream readFile("sing in information.txt",ios::in);
    string line;
    cout<<name1<<count<<endl<<name2<<count<<endl;

    readFile.close();



}

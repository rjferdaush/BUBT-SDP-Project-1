#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main(){
    string name[2];

    ofstream file ("sing in information.txt");
    for(int i=0; i<2; i++){
        cin>>name[i];
    }

    for(int i=0; i<2; i++){
        file<<name[i]<<endl;
    }

    file.close();

}

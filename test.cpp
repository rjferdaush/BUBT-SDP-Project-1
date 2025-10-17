#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"\033[1;32m";
    cout<< "|---------------------------------|\n";
    cout<<"|"<<"\033[1;36m"<<"welcome To Our Gaming Hub Project"<<"\033[1;32m"<<"|\n";
    cout<<"\033[1;32m|---------------------------------| \033[0m \n\n";
    cout<<"\033[1;33mDeveloped By \033[1;36mFerdaush & Sadik \033[1;33m \ncourse Instractor: \033[1;31m Mishal Al Rahman \033[0m \n\n";

    while (true)
    {
        cout<<"\033[1;35mManu Bar:\n";
        cout<<"\033[1;32m1. \033[1;37mPlay Game\n";
        cout<<"\033[1;32m2. \033[1;37mHow To Play\n";
        cout<<"\033[1;32m3. \033[1;37mLeader Bord\n";
        cout<<"\033[1;32m4. \033[1;37mExit\033[1;37m\n\n";
        
        cout<<"Enter Your Choice:\033[0m";
        int num;
        cin >> num;
        
        if (num == 1)
        {
            cout << "hello-1"<< endl;
            cout<<"Press ENTER to return to \033[1;35mManu Bar...\033[0m";
            cin.ignore();
            cin.get();
        }
        else if (num == 2)
        {
            cout<<"\033[1;32m========= \033[1;33mHOW TO PLAY \033[1;32m========= \n\033[1;32m1.\033[1;37mConnect 4 is a two-player strategy game.\n\033[1;32m2.\033[1;37m Players take turns dropping colored discs. \n\033[1;32m3.\033[1;37m The first to connect four discs vertically, horizontally, or diagonally wins! \n\033[1;32m4.\033[1;37mInvalid moves are not allowed.\n\033[1;32m5.\033[1;37mHave fun and think smart!\n\n";
            cout<<"Press ENTER to return to \033[1;35mManu Bar...\033[0m";
            cin.ignore();
            cin.get();
        }
    }
}
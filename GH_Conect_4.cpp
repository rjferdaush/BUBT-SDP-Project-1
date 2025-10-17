#include "Gaming_Hub.h"
#include <iostream>
#include <fstream>
using namespace std;

void Gaming_Hub::Conect_4()
{
    
    char arr[6][7];
    int col, i, j,r=0,b=0;
    bool blue=false,red=false;

    // space define
    for (i = 0; i < 6; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            arr[i][j] = ' ';
        }
    }

    // blue input

    int count[7] = {0};
    while (true)
    {
        // Blue Input

        cout << "\033[1;37mBlue Input:\033[1;34m";
        cin >> col;
        cout << "\033[0m";
        count[col - 1]++;
        arr[6 - count[col - 1]][col - 1] = 'B';
        
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 7; j++)
            {
                if (arr[i][j] == 'B')
                    cout << "\033[1;34mB "; 
                else if (arr[i][j] == 'R')
                    cout << "\033[1;31mR "; 
            }
            cout << endl;
        }
        cout <<"\033[0m\n";

        // break tha game

        // Blue Row Break
        for (i = 0; i <= 5; i++)
        {
            for (j = 0; j <= 3; j++)
            {
                if (arr[i][j] == 'B' && arr[i][j + 1] == 'B' && arr[i][j + 2] == 'B' && arr[i][j + 3] == 'B')
                {
                    // cout << "Blue Win";
                    blue = true;
                }
            }
        }

        // Blue Colam Break
        for (i = 0; i <= 3; i++)
        {
            for (j = 0; j <= 6; j++)
            {
                if (arr[i][j] == 'B' && arr[i + 1][j] == 'B' && arr[i + 2][j] == 'B' && arr[i + 3][j] == 'B')
                {
                    // cout << "Blue Win";
                    blue = true;
                }
            }
        }

         // 00 to 56
        for (i = 0; i < 3; i++)
        {
            for (j = 3; j < 7; j++)
            {
                if (arr[i][j] == 'B' && arr[i + 1][j - 1] == 'B' && arr[i + 2][j - 2] == 'B' && arr[i + 3][j - 3] == 'B')
                {
                    // cout << "Blue Win";
                    blue = true;
                }
            }
        }
        
        // 50 to 06
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 4; j++)
            {
                if (arr[i][j] == 'B' && arr[i + 1][j + 1] == 'B' && arr[i + 2][j + 2] == 'B' && arr[i + 3][j + 3] == 'B')
                {
                    // cout << "Blue Win";
                    blue = true;
                }
            }
        }
        if(blue){
            b++;
            break;
        }
    
        // red input
        cout << "\033[1;37mred Input:\033[1;31m";
        cin >> col;
        cout << "\033[0m";
        count[col - 1]++;
        arr[6 - count[col - 1]][col - 1] = 'R';
        cout << "\n";
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 7; j++)
            {
                if (arr[i][j] == 'B')
                    cout << "\033[1;34mB "; 
                else if (arr[i][j] == 'R')
                    cout << "\033[1;31mR "; 
                
            }
            cout << endl;
        }
        cout <<"\033[0m\n";

        // break tha game

        // Red Row Break
        for (i = 0; i <= 5; i++)
        {
            for (j = 0; j <= 3; j++)
            {
                if (arr[i][j] == 'R' && arr[i][j + 1] == 'R' && arr[i][j + 2] == 'R' && arr[i][j + 3] == 'R')
                {
                    // cout << "Red Win";
                    red = true;
                }
            }
        }

        // Red Colam Break

        for (i = 0; i <= 3; i++)
        {
            for (j = 0; j <= 6; j++)
            {
                if (arr[i][j] == 'R' && arr[i + 1][j] == 'R' && arr[i + 2][j] == 'R' && arr[i + 3][j] == 'R')
                {
                    // cout << "Red Win";
                    red = true;
                }
            }
        }

        // Red Diagonal Break

        // long way
        //  for (i = 5; i >= 0; i--)
        //  {
        //      for (j = 0; j <= 6; j++)
        //      {
        //          // Yellow Break
        //          if (arr[i][j] == 'R' && arr[i - 1][j+1] == 'R' && arr[i - 2][j+2] == 'R' && arr[i - 3][j+3] == 'R')
        //          {
        //              cout << "Red Win";
        //              return;
        //          }

        //         // sky Break
        //         if (arr[i-1][j] == 'R' && arr[i - 2][j+1] == 'R' && arr[i - 3][j+2] == 'R' && arr[i - 4][j+3] == 'R')
        //         {
        //             cout << "Red Win";
        //             return;
        //         }
        //         // Purple Break
        //         if (arr[i-2][j] == 'R' && arr[i - 3][j+1] == 'R' && arr[i - 4][j+2] == 'R' && arr[i - 5][j+3] == 'R')
        //         {
        //             cout << "Red Win";
        //             return;
        //         }

        //         // Green Break
        //         if (arr[i][j+1] == 'R' && arr[i - 1][j+2] == 'R' && arr[i - 2][j+3] == 'R' && arr[i - 4][j+4] == 'R')
        //         {
        //             cout << "Red Win";
        //             return;
        //         }

        //         // orange Break
        //         if (arr[i][j+2] == 'R' && arr[i - 1][j+3] == 'R' && arr[i - 2][j+4] == 'R' && arr[i - 3][j+5] == 'R')
        //         {
        //             cout << "Red Win";
        //             return;
        //         }
        //         // pink Break
        //         if (arr[i][j+3] == 'R' && arr[i - 1][j + 4] == 'R' && arr[i - 2][j+5] == 'R' && arr[i - 3][j+6] == 'R')
        //         {
        //             cout << "Red Win";
        //             return;
        //         }
        //     }
        // }

        // Smart way
        // 00 to 56
        for (i = 0; i < 3; i++)
        {
            for (j = 3; j < 7; j++)
            {
                if (arr[i][j] == 'R' && arr[i + 1][j - 1] == 'R' && arr[i + 2][j - 2] == 'R' && arr[i + 3][j - 3] == 'R')
                {
                    // cout << "Red Win";
                    red = true;
                }
            }
        }
        
        // 50 to 06
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 4; j++)
            {
                if (arr[i][j] == 'R' && arr[i + 1][j + 1] == 'R' && arr[i + 2][j + 2] == 'R' && arr[i + 3][j + 3] == 'R')
                {
                    // cout << "Red Win";
                    red = true;
                }
            }
        }

        if(red){
            r++;
            break;
        }

    }
    


    // fstream readFile("sing in information.txt",ios::in);
    // string name1,name2;
    // getline(readFile,name1);
    // getline(readFile,name2);

    // if(red>blue){
    //     cout<<"Red Player:"<<name2<< "Win By"<<red<< "Point"<<endl;

    // }
    // else{
    //     cout<<"Blue Player:"<<name1<< "Win By"<<blue<< "Point"<<endl;
    // }
    // readFile.close();
    
    fstream readFile("sing in information.txt",ios::in);
    string name1,name2;
    getline(readFile,name1);
    getline(readFile,name2);
    readFile.close();
    if(r>b){
        cout<<"Red Player:"<<name2<< "Win"<<red<< "Point"<<endl;

    }
    else if(b>r){
        cout<<"Blue Player:"<<name1<< "Win By"<<blue<< "Point"<<endl;
    }

    
    ofstream leader_bord("leader bord.txt",ios::out|ios::app);
    if(r>b){
        leader_bord<<name2<<": "<<red<<endl;

    }
    else if(b>r){
        leader_bord<<name1<<": "<<blue<<endl;
    }
    leader_bord.close();




    


}
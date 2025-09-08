#include <iostream>
#include "Gaming_Hub.h"
#include <fstream>
using namespace std;

void Gaming_Hub::Conect_4()
{
    char arr[6][7];
    int row, col, i, j, r, k = 0,red=0,blue=0;

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

        cout << "Blue Input:";
        cin >> col;
        count[col - 1]++;
        arr[6 - count[col - 1]][col - 1] = 'B';
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 7; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
        cout << endl;

        // break tha game

        // Blue Row Break
        for (i = 0; i <= 5; i++)
        {
            for (j = 0; j <= 3; j++)
            {
                if (arr[i][j] == 'B' && arr[i][j + 1] == 'B' && arr[i][j + 2] == 'B' && arr[i][j + 3] == 'B')
                {
                    // cout << "Blue Win";
                    blue++;
                    return;
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
                    blue++;
                    return;
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
                    blue++;
                    return;
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
                    blue++;
                    return;
                }
            }
        }
    

        // red input
        cout << "red Input:";
        cin >> col;
        count[col - 1]++;
        arr[6 - count[col - 1]][col - 1] = 'R';
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 7; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
        cout << endl;

        // break tha game

        // Red Row Break
        for (i = 0; i <= 5; i++)
        {
            for (j = 0; j <= 3; j++)
            {
                if (arr[i][j] == 'R' && arr[i][j + 1] == 'R' && arr[i][j + 2] == 'R' && arr[i][j + 3] == 'R')
                {
                    // cout << "Red Win";
                    red++;
                    return;
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
                    red++;
                    return;
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
                    red++;
                    return;
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
                    red++;
                    return;
                }
            }
        }

        
    }


    fstream readFile("sing in information.txt",ios::in);
    string name1,name2;
    readFile.close();
    if(red==1){
        cout<<"Red Player:"<<name2<< "Win By"<<count<< "Point"<<endl;

    }
    else{
        cout<<"Blue Player:"<<name1<< "Win By"<<count<< "Point"<<endl;
    }
    readFile.close();



}
#include "Gaming_Hub.h"
#include <iostream>
using namespace std;

void Gaming_Hub::Tic_Tac_Toa() {
    cout << "Tic Tac Toe" << endl;
    
     char ar[3][3] = {{' ', ' ', ' '},
                         {' ', ' ', ' '},
                         {' ', ' ', ' '}};
        int i, j, input_x;

        cout << "Tic Tac Dice\n";
        while (true)
        {
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    if (ar[i][j] == 'X')
                    {
                        cout << "\033[31m" << ar[i][j] << "\033[0m" << "|";
                    }
                    else
                    {
                        cout << ar[i][j] << "|";
                    }
                }
                cout << "\n";
            }

            // input x
            while (true)
            {
                cout << "Enter (x):\n";
                cin >> input_x;

                // X INPUT 1 TO 3
                if (1 <= input_x && input_x <= 3)
                {
                    if (ar[0][input_x - 1] == ' ')
                    {
                        ar[0][input_x - 1] = 'X';
                        break;
                    }
                    else
                    {
                        cout << "X is already define\n";
                    }
                }

                // X INPUT 4 TO 6

                if (4 <= input_x && input_x <= 6)
                {
                    if (ar[1][input_x - 4] == ' ')
                    {
                        ar[1][input_x - 4] = 'X';
                        break;
                    }
                    else
                    {
                        cout << "X is already define\n";
                    }
                }

                // X INPUT 7 TO 9

                if (7 <= input_x && input_x <= 9)
                {
                    if (ar[2][input_x - 7] == ' ')
                    {
                        ar[2][input_x - 7] = 'X';
                        break;
                    }
                    else
                    {
                        cout << "X is already define\n";
                    }
                }
            }

            // X break tha game by row
            for (i = 0; i < 3; i++)
            {

                if (ar[i][0] == 'X' && ar[i][1] == 'X' && ar[i][2] == 'X')
                {
                    cout << "X is Win";
                    // return 0;
                }
            }

            // X break tha game by Coluam
            for (i = 0; i < 3; i++)
            {

                if (ar[0][i] == 'X' && ar[1][i] == 'X' && ar[2][i] == 'X')
                {
                    cout << "X is Win";
                    // return 0;
                }
            }

            // X break tha game by Diagonal
            if (ar[0][0] == 'X' && ar[1][1] == 'X' && ar[2][2] == 'X')
            {
                cout << "X is Win";
                // return 0;
            }

            if (ar[2][0] == 'X' && ar[1][1] == 'X' && ar[0][2] == 'X')
            {
                cout << "X is Win";
                // return 0;
            }

            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    if (ar[i][j] == 'X')
                    {
                        cout << "\033[31m" << ar[i][j] << "\033[0m" << "|";
                    }
                    else
                    {
                        cout << ar[i][j] << "|";
                    }
                }
                cout << "\n";
            }

            // input 0

            while (true)
            {
                cout << "Enter (0):\n";
                cin >> input_x;

                // 0 INPUT 1 TO 3
                if (1 <= input_x && input_x <= 3)
                {
                    if (ar[0][input_x - 1] == ' ')
                    {
                        ar[0][input_x - 1] = '0';
                        break;
                    }
                    else
                    {
                        cout << "X is already define\n";
                    }
                }

                // 0 INPUT 4 TO 6

                if (4 <= input_x && input_x <= 6)
                {
                    if (ar[1][input_x - 4] == ' ')
                    {
                        ar[1][input_x - 4] = '0';
                        break;
                    }
                    else
                    {
                        cout << "X is already define\n";
                    }
                }

                // 0 INPUT 7 TO 9

                if (7 <= input_x && input_x <= 9)
                {
                    if (ar[2][input_x - 7] == ' ')
                    {
                        ar[2][input_x - 7] = '0';
                        break;
                    }
                    else
                    {
                        cout << "X is already define\n";
                    }
                }
            }

            // 0 break tha game by row
            for (i = 0; i < 3; i++)
            {

                if (ar[i][0] == '0' && ar[i][1] == '0' && ar[i][2] == '0')
                {
                    cout << "0 is Win";
                    // return 0;
                }
            }

            // 0 break tha game by Coluam
            for (i = 0; i < 3; i++)
            {

                if (ar[0][i] == '0' && ar[1][i] == '0' && ar[2][i] == '0')
                {
                    cout << "0 is Win";
                    // return 0;
                }
            }

            // 0 break tha game by Diagonal
            if (ar[0][0] == '0' && ar[1][1] == '0' && ar[2][2] == '0')
            {
                cout << "0 is Win";
                // return 0;
            }

            if (ar[2][0] == '0' && ar[1][1] == '0' && ar[0][2] == '0')
            {
                cout << "0 is Win";
                // return 0;
            }
        }
        // return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name[50];
    int point[50], i = 0;

    ifstream file("leader bord.txt");
    string fileName;
    int filePoint;

    while (file >> fileName >> filePoint)
    {
        bool found = false;
        for (int x = 0; x < i; x++)
        {
            if (name[x] == fileName)
            {
                point[x] = point[x] + filePoint;
                found = true;
                break;
            }
        }
        if (!found)
        {
            name[i] = fileName;
            point[i] = filePoint;
            i++;
        }
    }
    file.close();

    for (int x = 0; x < i; x++)
    {
        for (int y = i + 1; y < i; x++)
        {
            if (point[x] < point[y])
            {
                int temp_P = point[x];
                point[x] = point[y];
                point[y] = temp_P;

                string temp_n = name[x];
                name[x] = name[y];
                name[y] = temp_n;
            }
        }
    }

    cout << "\033[1;32m========= \033[1;33mTop 5 Players \033[1;32m========= \n\033[1;32m";
    for (int i = 0; i < 5; i++)
    {
        cout << "\033[1;31m" << i + 1 << "." << "\033[1;37m" << name[i] << point[i] << endl;
    }
}
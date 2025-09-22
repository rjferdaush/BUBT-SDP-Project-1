void Gaming_Hub::Conect_4() {
    char arr[6][7];
    int row, col, i, j;
    int count[7] = {0};
    string winner = "";

    // initialize board
    for (i = 0; i < 6; i++)
        for (j = 0; j < 7; j++)
            arr[i][j] = ' ';

    while (true) {
        // Blue move
        cout << "Blue Input: ";
        cin >> col;
        count[col - 1]++;
        arr[6 - count[col - 1]][col - 1] = 'B';

        // print board
        for (i = 0; i < 6; i++) {
            for (j = 0; j < 7; j++) cout << arr[i][j];
            cout << endl;
        }

        // check Blue win
        if (checkWin(arr, 'B')) { // আলাদা ফাংশন বানানো সবচেয়ে ভালো
            winner = "Blue";
            break;
        }

        // Red move
        cout << "Red Input: ";
        cin >> col;
        count[col - 1]++;
        arr[6 - count[col - 1]][col - 1] = 'R';

        // print board
        for (i = 0; i < 6; i++) {
            for (j = 0; j < 7; j++) cout << arr[i][j];
            cout << endl;
        }

        // check Red win
        if (checkWin(arr, 'R')) {
            winner = "Red";
            break;
        }
    }

    // File থেকে নাম পড়া
    fstream readFile("sing in information.txt", ios::in);
    string name1, name2;
    getline(readFile, name1);
    getline(readFile, name2);
    readFile.close();

    if (winner == "Red")
        cout << "Red Player: " << name2 << " Wins!" << endl;
    else if (winner == "Blue")
        cout << "Blue Player: " << name1 << " Wins!" << endl;
}

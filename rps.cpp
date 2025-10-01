#include <iostream>
#include <ctime>

using namespace std;

char getuserchoice()
{

int c1 = 0, c2 = 0, c3 = 0;

    // You gonna see some magic out here :?

    char playerchoice;
    do
    {
        cout << "---------------------" << endl;
        cout << "ROCK PAPER SCISSORS" << endl;
        cout << "---------------------" << endl;
        cout << "choose one of the following" << endl;
        cout << "enter 'r' for rock " << endl;
        cout << "enter 'p' for paper " << endl;
        cout << "enter 's' for scissors " << endl;
        cin >> playerchoice;
    } while (playerchoice != 'r' && playerchoice != 'p' && playerchoice != 's');

    return playerchoice;
}

char getcomputerchoice()
{
    char compchoice;

    int num = ((c1 / 2) + rand() % (c1 + c2 + c3));
    if (num <= c1)
    {
        compchoice = 'r';
        c1++;
    }
    else if (num <= c1 + c2)
    {
        compchoice = 's';
        c2++;

    else
    {
        compchoice = 'p';
        c3++;
    }

    return compchoice;
}
void showchoice(char choice)
{
    switch (choice)
    {
    case 'r':
        cout << "Stone\n"
             << endl;
        break;
    case 'p':
        cout << "Paper\n"
             << endl;
        break;
    case 's':
        cout << "Scissors\n"
             << endl;
        break;
    }
}
void choosewinner(char player, char computer)
{
    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            cout << " IT'S A TIE " << endl;
        }
        else if (computer == 'p')
        {
            cout << "COMPUTER WON" << endl;
        }
        if (computer == 's')
        {
            cout << "YOU WON" << endl;
        }
        break;

    case 'p':
        if (computer == 'r')
        {
            cout << "YOU WON " << endl;
        }
        else if (computer == 'p')
        {
            cout << "IT'S A TIE" << endl;
        }
        if (computer == 's')
        {
            cout << "COMPUTER WIN" << endl;
        }
        break;

    case 's':
        if (computer == 'r')
        {
   cout << " COMPUTER WON " << endl;
        }
        else if (computer == 'p')
        {
            cout << "YOU WON " << endl;
        }
        if (computer == 's')
        {
            cout << "IT'S A TIE" << endl;
        }
        break;
    }
}

int main()
{
    c1 = 1;
    c2 = 1;
    c3 = 1;
    char player;
    char computer;
    string again;
    srand(time(NULL));
    do
    {
        player = getuserchoice();
        cout << "YOUR CHOICE IS  ";
        showchoice(player);
        computer = getcomputerchoice();
        cout << "COMP CHOOSE ";
        showchoice(computer);
        cout << " " << endl;
        choosewinner(player, computer);
        cout << "\nif you wish to play again type 'yes' else 'no' " << endl;
        cin >> again;
        cout << "\n";
    } while (again == "YES" || again == "yes");

    return 0;
}
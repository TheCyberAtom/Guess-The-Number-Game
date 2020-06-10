#include <iostream>
#include<cstdlib>
#include<time.h>
#include<windows.h>
using namespace std;

int life;
int number,var,diff;

int game(int rand_no, int user)
{
    diff=rand_no - user;
    if(diff==0)
    {
        return 1;
    }
    else
    {
        if(-5< diff && diff < 5)
        {
            cout<<"\nYou are very close at a difference of less than 5";
        }
        else if(-10< diff && diff< 10)
        {
            cout<<"\nYou are close and at a difference of less than 10";
        }
        else if(-30< diff && diff< 30)
        {
            cout<<"\nNice Try, You are at a difference of less than 30";
        }
        else if(-50< diff && diff< 50)
        {
            cout<<"\nNice Try, You are at a difference of less than 50";
        }
        else
        {
            cout<<"\nOOPS! Try again , You are too far from the number";
        }
        return 0;
    }
}
int main()
{
    SetConsoleTitle("Guess The Number : TheCyberAtom");
    srand(time(NULL));
    char again;
    int d;
    do
    {
        system("cls");
        cout<<"\t\t\t\t\t\tGuess The Number (1-100)\n\n\n\n";
        cout<<"\n\t\t\t\t\t\tDifficulty Level of Game: ";
        cout<<"\n\t\t\t\t\t\t\t 1.Easy";
        cout<<"\n\t\t\t\t\t\t\t 2.Medium";
        cout<<"\n\t\t\t\t\t\t\t 3.Hard";
        cout<<"\n\t\t\t\t\t\t\t 4.Extreme";
        cout<<"\n\n\n\t\t\t\t\t  Enter Game Difficulty (1-4) : ";
        cin>>d;
        switch(d)
        {
            case 1: life=8;
                break;
            case 2: life=7;
                break;
            case 3: life=6;
                break;
            case 4: life=4;
                break;
            default:
                cout<<"\nWrong Selection !";
                cout<<"\nCPU is making default level selection as Easy ";
                life=8;
                system("PAUSE");
                break;
        }
        system("cls");
        cout<<"\t\t\t\t\t\tGuess The Number Between 1 - 100 ";
        number = 1 + (rand()%100);

        while(true)
        {
            if(life>0)
            {
                cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Life Remaining : "<<life;
                cout<<"\nGuess The Number : ";
                cin>>var;
                if(game(number,var))
                {
                    system("cls");
                    cout<<"\n\t\t\t\t\t\t\tYou WON";
                    cout<<"\n\t\t\t\t\t You Guessed the Correct Number : "<<number;
                    cout<<"\n\n";
                    break;
                }
            }
            else
            {
                system("cls");
                cout<<"\n\t\t\t\t\t\t  You are Out of Lives";
                cout<<"\n\t\t\t\t\t\t\tYou Loose";
                cout<<"\n\t\t\t\t\t\t    Number was : "<<number;
                cout<<"\n\n";
                break;
            }
            cout<<"\t\t\t\t\t\t Your Guess : "<<var;
            life--;
        }
    cout<<"\nDo you want to play Again (Y|N): ";
    cin>>again;
    }while(again=='Y' || again =='y');


    return 0;
}

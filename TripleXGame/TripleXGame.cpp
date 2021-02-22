// TripleXGame.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <ctime>

using namespace std;


bool PlayGameAtDifficulty(int Difficulty)
{
    int CodeA = rand() % Difficulty + Difficulty;
    int CodeB = rand() % Difficulty + Difficulty;
    int CodeC = rand() % Difficulty + Difficulty;
    int GuessA = 0;
    int GuessB = 0;
    int GuessC = 0;

    int const CodeSum = CodeA + CodeB + CodeC;
    int const CodeProduct = CodeA * CodeB * CodeC;
    int const GuessSum = GuessA + GuessB + GuessC;
    int const GuessProduct = GuessA * GuessB * GuessC;

    cout << "+ There are three numbers in the code.\n";
    cout << "+ The code integers add up to: " << CodeSum << ".\n";
    cout << "+ The code integers multiply to equal: " << CodeProduct << ".\n";

    cin >> GuessA;
    cin >> GuessB;
    cin >> GuessC;
    cout << "You entered: " << GuessA << " " << GuessB << " " << GuessC << ".\n";

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        cout << "Code confirmed. Access granted...\n";
        cout << "Data exported successfully. Continuing to scan for available servers.\n\n\n";
        return true;
    }

    else
    {
        cout << "Security breach protocol initiated. Security arrival: Immediate.\n";
        cout << "You have been found, imprisoned, tortured and fed to stray dogs.\n\n\n";
        return false;
    }
}

void PrintIntroduction(int Difficulty)
{
    cout << "You are a secret agent breaking into a level " << Difficulty << "\n";
    cout << "secure server room...  Enter the correct code to continue...\n\n";
}

int main()
{
    int Difficulty = 2;
    int MaxDifficulty = 10;
        
    PrintIntroduction(Difficulty);

    while (Difficulty <= MaxDifficulty)
    {
        bool bLevelComplete = PlayGameAtDifficulty(Difficulty);
        cin.clear();
        cin.ignore();

        if (bLevelComplete)
        {
            Difficulty++;
        }
        
    }

    cout << "You have successfully accessed all server permissions.\n";
    cout << "Server data exporting to remote repository.\n";
    cout << "Your work here is done. Prepare for exfil.\n\n";
    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

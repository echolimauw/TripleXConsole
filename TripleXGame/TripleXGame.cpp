// TripleXGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int Difficulty = 2;
int MaxDifficulty = 10;

bool PlayGameAtDifficulty(int difficulty)
{
    int Difficulty = 2;
    int MaxDifficulty = 10;

    int CodeA = 4;
    int CodeB = 3;
    int CodeC = 2;
    int GuessA = 0;
    int GuessB = 0;
    int GuessC = 0;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;
    const int GuessSum = GuessA + GuessB + GuessC;
    const int GuessProduct = GuessA * GuessB * GuessC;

    cout << "+ There are three numbers in the code.\n";
    cout << "+ The code integers add up to: " << CodeSum << ".\n";
    cout << "+ The code integers multiply to equal: " << CodeProduct << ".\n";

    cin >> GuessA;
    cin >> GuessB;
    cin >> GuessC;
    cout << "You entered: " << GuessA << " " << GuessB << " " << GuessC << ".\n";

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        cout << "Code confirmed. Access granted.\n";
        return true;
    }

    else
    {
        cout << "Security breach protocol initiated. Security arrival: Immediate.\n";
        cout << "You have been found, imprisoned, tortured and fed to stray dogs.\n";
        return false;
    }
}

void PrintIntroduction()
{
    cout << "You are a secret agent breaking into a secure server room...\n";
    cout << "Enter the correct code to continue...\n\n";
}

int main()
{
    int Difficulty = 2;
    int MaxDifficulty = 10;
        
    PrintIntroduction();
    while (Difficulty <= MaxDifficulty)
    {
        bool bLevelComplete;
        PlayGameAtDifficulty(Difficulty);
        cin.clear();
        cin.ignore();

        if (bLevelComplete)
        {
            Difficulty++;
        }
        
    }

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

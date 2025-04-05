#include <iostream>
#include "main.h"

using namespace std;

string player_name = "";

int main() 
{
    InputPlayerName();

    ChooseYourFirstPokemon();

    return 0;
}

void ChooseYourFirstPokemon()
{
    int chosenPokemon = 0;
    cout << endl << endl << "You meet Professor Oak and he gives you a choice." << endl;
    cout << "A choice to choose your first Pokemon on your journey to become the best trainer in the world" << endl;
    bool choseValidPokemon = false;
    while (choseValidPokemon == false)
    {
        cout << "Press 1 to choose Bulbasaur" << endl;
        cout << "Press 2 to choose Charmander" << endl;
        cout << "Press 3 to choose Squirtle" << endl;
        cin >> chosenPokemon;

        if (chosenPokemon == 1)
        {
            choseValidPokemon = true;
            cout << "You chose Bulbasaur! A wise choice.\n";
        }
        else if (chosenPokemon == 2)
        {
            choseValidPokemon = true;
            cout << "You chose Charmander! A fiery choice.\n";
        }
        else if (chosenPokemon == 3)
        {
            choseValidPokemon = true;
            cout << "You chose Squirtle! A cool choice.\n";
        }
        else
        {
            cout << "That is an invalid input. Please try again!\n";
        }
    }
}

void InputPlayerName()
{
    cout << "Trainer! Before you embark on your journey," << endl
        << "the Pokémon world needs to know who you are!" << endl << endl
        << "Time to step up and tell us your name." << endl
        << "And remember, a great name is the start of every great adventure!" << endl;
    cin >> player_name;
    cout << "Great start, Trainer! Looks like you’ve mastered the opening of every code adventure." << endl
        << "Keep this up, and you’ll be a coding master in no time!" << endl;
}

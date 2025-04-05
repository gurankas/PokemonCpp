#include <iostream>
#include "main.h"

using namespace std;

enum class PokemonChoice
{
    Bulbasaur,
    Charmander,
    Squirtle,
    Pikachu,
    InvalidChoice
};

enum class PokemonType
{
    Fire,
    Electric,
    Water,
    Earth,
    Normal
};

string player_name = "";
PokemonChoice chosen_pokemon = PokemonChoice::InvalidChoice;

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

        switch (chosenPokemon)
        {
        case 1:
        {
            choseValidPokemon = true;
            cout << "You chose Bulbasaur! A wise choice.\n";
            chosen_pokemon = PokemonChoice::Bulbasaur;
            cout << "Bulbasaur and you, " << player_name << " are going to be the best of friends\n";
            break;
        }
        case 2:
        {
            choseValidPokemon = true;
            chosen_pokemon = PokemonChoice::Charmander;
            cout << "You chose Charmander! A fiery choice.\n";
            cout << "Charmander and you, " << player_name << " are going to be the best of friends\n";
            break;
        }
        case 3:
        {
            choseValidPokemon = true;
            chosen_pokemon = PokemonChoice::Squirtle;
            cout << "You chose Squirtle! A cool choice.\n";
            cout << "Squirtle and you, " << player_name << " are going to be the best of friends\n";
            break;
        }
        default:
            choseValidPokemon = true;
            chosen_pokemon = PokemonChoice::Pikachu;
            cout << "Since you tried something unorthodox, Professor Oak decided to give you a Pikachu!\n";
            cout << "Pikachu and you, " << player_name << " are going to be the best of friends\n";
            break;
        }
    }

    cout << "But beware, Trainer,\nthis is only the beginning.\n"
        << "Your journey is about to unfold.\nNow let’s see if you’ve got what it takes to keep going!\n"
        << "Good luck, and remember… Choose wisely!\n";
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

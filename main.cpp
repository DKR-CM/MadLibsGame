//Author:
#include <iostream>
#include <string>
using namespace std;

int main()
{
  // I. Variable declaration
  string friendName;
    int numberOfPizzas;
    double priceEach;
    char grade;
    string shout; 


  // II. Prompt the user for input and get their responses
    cout << "Enter your friend's first name: ";
    cin >> friendName;

    cout << "Enter the number of pizzas bought: ";
    cin >> numberOfPizzas;

    cout << "Enter the price of each pizza: ";
    cin >> priceEach;

    cout << "Enter a letter grade: ";
    cin >> grade;

    cout << "Enter something they shouted: ";
    cin >> shout;
  
  // III. Display the mad lib story
    cout << "My friend " << friendName
     << " bought " << numberOfPizzas
     << " pizzas for $" << priceEach
     << " each, then gave the cashier a grade of "
     << grade << ". They were so happy they shouted \""
     << shout << "!\"" << endl;

  return 0;
}

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int getRandom()
{
    return rand() % 100 +1;
    
}

void compare(int guess)
{
    int randomNumber = getRandom();
    if(randomNumber<guess){
         cout << "Random number was " << randomNumber << ". " << "Your guess was higher." << endl;
    }else if(randomNumber>guess){
         cout << "Random number was " << randomNumber << ". " << "Your guess was lower." << endl;
    } else {
         cout << "Random number was " << randomNumber << ". " << "Your guess was the same." << endl;
    }
}

int main()
{
    srand(time(NULL));
    int guess;
    cout <<"Enter your guess: ";
    cin >> guess;
    compare(guess);
    
    return 0;   
}
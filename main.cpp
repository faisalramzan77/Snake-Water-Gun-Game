#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

char getComputerChoice() {
    int num = rand() % 3;  
    if (num == 0) return 's'; 
    if (num == 1) return 'w'; 
    return 'g';               
}

string getResult(char user, char computer) {
    if (user == computer) return "It's a tie!";
    if ((user == 's' && computer == 'w') ||
        (user == 'w' && computer == 'g') ||
        (user == 'g' && computer == 's')) {
        return "You win!";
    }
    if (user == 's' || user == 'w' || user == 'g')
        return "Computer wins!";
    return "Invalid input!";
}

int main() {
    srand(time(0));  

    cout << "Snake, Water, Gun Game\n";
    cout << "Enter your choice: 's' for Snake, 'w' for Water, 'g' for Gun\n";

    char user;
    cout << "Your choice (s/w/g): ";
    cin >> user;

    char computer = getComputerChoice();
    cout << "Computer chose: " << computer << endl;

    string result = getResult(user, computer);
    cout << result << endl;

    return 0;
}

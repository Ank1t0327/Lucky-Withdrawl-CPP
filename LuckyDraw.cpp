#include <iostream>
#include <ctime>
using namespace std;

int main() {
    cout << "Welcome to LUCKY WITHDRAWL🥳🥳🥳!!\n";
    char wish;
    cout << "Press 'Y' if you would like to play! \nIf not, press 'N': \n";
    cin >> wish;

    if (wish == 'Y' || wish == 'y') {
        int rounds;
        cout << "How many rounds would you like to play? (1-5): ";
        cin >> rounds;

        srand(time(0)); 

        for (int i = 1; i <= rounds; i++) {
            int randNum = rand() % 6 + 1;

            cout << "\nRound " << i << " Result:\n";
            switch (randNum) {
                case 1:
                    cout << "You win $5000!🥳\n";
                    break;
                case 2:
                    cout << "You win IPhone16 Pro Max!😎\n";
                    break;
                case 3:
                    cout << "You win Acer Nitro!✌️\n";
                    break;
                case 4:
                    cout << "You win Apple Watch!😁\n";
                    break;
                case 5:
                    cout << "You win a Tshirt!😊\n";
                    break;
                case 6:
                    cout << "Sorry, better luck next time😢\n";
                    break;
            }

            if (i < rounds) {
                char next;
                cout << "Ready for next round? (Y/N): ";
                cin >> next;
                if (next == 'N' || next == 'n') {
                    cout << "Exiting the game... Thanks for playing!😄\n";
                    break;
                }
            } else {
                cout << "All rounds completed!\n";
            }
        }

    } else if (wish == 'N' || wish == 'n') {
        cout << "Thanks for visiting!";
    } else {
        cout << "Please enter 'Y' or 'N'";
    }

    return 0;
}

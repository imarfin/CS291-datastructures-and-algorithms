#include <iostream>
#include <vector>
using namespace std;

void printRoster(vector<int> jersey, vector<int> rating) {

  cout << "=== UPDATED ROSTER ===" << endl;

  for (int i = 0; i < 5; i++) {
    cout << "Player " << i + 1 << " -- Jersey number:" << jersey.at(i)
         << " Rating:" << rating.at(i) << endl;
  }
}

int main() {

  int temp;

  // vectors for jersu and rating
  vector<int> jerseyNum;
  vector<int> ratingNum;

  //
  int i;
  int n;

  for (i = 0; i < 5; i++) {
    cout << "Enter the player " << i + 1 << "\'s jersey number (0-99):" << endl;
    cin >> n;
    jerseyNum.push_back(n);
    cout << "Enter the player " << i + 1 << "\'s rating (0-9):" << endl;
    cin >> n;
    ratingNum.push_back(n);
    cout << endl;
  }

  cout << "=== ROSTER ===" << endl;

  for (i = 0; i < 5; i++) {
    cout << "Player " << i + 1 << " -- Jersey number:" << jerseyNum.at(i)
         << " Rating:" << ratingNum.at(i) << endl;
  }
  cout << endl;

  // char variablel for menu option
  char letter;

  cout << "==== MENU ====" << endl;
  cout << "a - Add player" << endl;
  cout << "d - Remove player" << endl;
  cout << "u - Update player rating" << endl;
  cout << "r - Output players above a rating" << endl;
  cout << "o - Output roster" << endl;
  cout << "q - Quit" << endl;
	cout << endl;
  cout << "Enter your chooice: ";
  cout << endl;

  cin >> letter;

  switch (letter) {
  case 'a':
    cout << "Enter a new player's jersey number: ";
    cin >> temp;
    jerseyNum.push_back(temp);

    cout << "Enter the player's rating: ";
    cin >> temp;
    ratingNum.push_back(temp);
    cout << endl;

    // calling the funciotn
    printRoster(jerseyNum, ratingNum);
	
    break;

  case 'd':
    cout << "Enter a jersey number: ";
    cin >> temp;
    int i;

    for (i = 0; i < jerseyNum.size(); i++) {
      if (jerseyNum.at(i) == temp) {
        jerseyNum.erase(jerseyNum.begin() + i);
        ratingNum.erase(ratingNum.begin() + i);
        cout << endl;

        printRoster(jerseyNum, ratingNum);

        break;
      }
    }

    break;

  case 'u':
    cout << "Enter a jersey number: ";
    cin >> temp;

    for (int i = 0; i < jerseyNum.size(); i++) {
      if (jerseyNum.at(i) == temp) {
        cout << "Enter a new rating for player: ";
        cin >> temp;
        ratingNum.at(i) = temp;
        cout << endl;

        printRoster(jerseyNum, ratingNum);

        break;
      }
    }
    break;

  case 'r':
    cout << "Enter a rating: ";
    cin >> temp;
    cout << endl << "ROSTER" << temp << endl;

    for (int i = 0; i < jerseyNum.size(); i++)
      if (ratingNum.at(i) > temp)
        cout << "Player " << i + 1 << " -- Jersey number: " << jerseyNum.at(i)
             << ", Rating: " << ratingNum.at(i) << endl;
    cout << endl;
    printRoster(jerseyNum, ratingNum);

    break;

  case 'o':
    cout << "ROSTER" << endl;
    for (int i = 0; i < jerseyNum.size(); i++)
      cout << "Player " << i + 1 << " -- "
           << "Jersey number: " << ratingNum.at(i) << endl;
    cout << endl;
    printRoster(jerseyNum, ratingNum);

    break;

  case 'q':
    cout << endl;
    cout << "Goodbye! Thank you" << endl;

    return 0;
  default:
    cout << "Invalid menu option. Try again." << endl;
  }

  return 0;
}

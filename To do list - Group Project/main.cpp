// Menu-Driven in the main() - Once the program is executed, display a
//welcome message to users. Then, using a while loop, display all possible menu
// options to the users. Once an option is selected, print out the name of the
//menu. Keep presenting the menu options to the users until an ‘exit condition’
//is entered. b. Class definition – Define a class for your ‘element’ in a list
// for your program. Complete all the member variables and member functions for
//your class. c. Your code should be well structured and easy to read. This
// includes:
// printNewLine and main function done by Mohamed Mogali
#include <iostream>
using namespace std;


void printNewLine() {
  cout << endl;
} // Created a void funtion to add a new line.
void toDoListMenu() {
  // Created a void function to hold the toDoListMenu.
  char menuOption; // declared a char called menuOption to let the user to
                   // choice there option.
  char choice; // declared a char called choice to give a user an option to cont
               // or not.
  do {
    // Used a do{}while loop to show the menu of the toDoList.
    // Switch case done by Jonathan Shields
    cout << "ToDOList MENU" << endl;
    cout << "n - User Name " << endl;
    cout << "a - Add toDoList" << endl;
    cout << "r - Remove toDoList" << endl;
    cout << "u - Update toDoList" << endl;
    cout << "o - Output toDoList" << endl << endl;
    cout << "Choose an option: ";
    cin >> menuOption;
    
    switch (menuOption){
      case 'n':
        cout << "Selected n";
        break;
      case 'a':
        cout << "Selected a";
        break;
      case 'r':
        cout << "Selected r";
        break;
      case 'u':
        cout << "Selected u";
        break;
      case 'o':
        cout << "Selected o";
        break;
      default: 
        cout << "Error";
        break;
    }
    cout << " To continue Y! (Yes)OR Q(Quit) " << endl;
    cin >> choice;
  } while (choice == 'Y' || choice == 'y');
}
class toDoList {

public:
  void SetName(string Listname);
  void SetAdd(string toDoList);
  void SetRemove(string toDoList);
  void Print();

private:
  string name;
  string NewData;
  string add;

};

// sets the toDoList name
// Definition of public member functions done by Pronab Patra
void toDoList::SetName(string Listname)
{
name = Listname;
}
void toDoList :: SetAdd(string Newdata) 
{
  add = NewData;
}
void toDoList::SetRemove(string RemoveData) 
{
  // remove element form list 
}

void toDoList::Print() 
{
  // a function that will display all the elements in the list 

}


// a function that will display task priority lsit , time and date 
// by Shah Arfin

class toDoNow {

public:
  void Setlist(int listNum);
  void SetDate(string listDate);
  void SetTime(string listTime);
  void Print();

private:
  int num;
  string dueDate;
  string dueTime;

};

void toDoNow::Setlist(int listNum)
{
  num = listNum;
}
void toDoNow::SetDate(string listDate)
{
  dueDate = listDate;
}
void toDoNow::SetTime(string listTime) {
  
  dueTime = listTime;

}

void toDoNow::Print() 
{
  // a function that will display all the elements in the list 

}


int main() {
  cout << "Welcome All.";
  printNewLine();
  toDoListMenu();

}
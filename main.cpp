/* Stewart Sheppard
   COSC 1437-58000
   Text Editor: Repl.it
A decision program menu to help students who are taking a Physics
(Mechanics) class perform simple foundation calculations.*/
#include "functions.h" //reference the header file 

int main() 
{
  string option = ""; //the option local to int main()
  string color = "\x1b[" + to_string(32) + ";1m";
  string reset = "\x1b[0m";
  //loop until the user provides "e" or (&&) "E" as exit condition
  
  do
  {
    showMenu(); //call a menu void function here
    cout << "\nPlease enter an option: ";
    //cin >> option; //getline(cin,option); //get the entire line
    cout << color; //change text to green 
    option = validateString(option); 
    cout << reset; //reset back to standard
    handleOption(option); //call handleOption and pass the user option as an argument
    
  
  }while(option != "e" && option != "E"); //DeMorgan's Law!!! 
  cout << "\n… Goodnight, Goodnight, Goodnight!" << endl;
  return 0; 
}
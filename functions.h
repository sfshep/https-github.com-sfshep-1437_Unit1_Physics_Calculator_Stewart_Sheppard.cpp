/* A header file to hold the 
main defintions of the program
Student: Stewart Sheppard
Teacher: Dr_T 10-17-2019, updated 3-24-2020 (clear screen methods for Ubuntu)
*/
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
//put libraries here
#include <iostream>
#include<string>
#include "Input_Validation_Extended.h" 
using namespace std;

//put prototypes here
void handleOption(string); //function prototype 
void showMenu(); 
double velocityCalc (double, double);
double accelerCalc (double, double);
void showSubmenu();
double newtons2nd(double, double);
double earthWeight(double, double);
double moMentum(double, double);
  

//put definitions here
void handleOption(string userOption)
{
    double ds; //represents displacment
    double dt; // represents time
    double dv; //represents delta-v (change in velocity0
    double m;  //represents mass
    double a;  // represents accerlation
    double g; // represents gravity
    double v; // velocity
    //string subMotion;
    //int rows = 0, num = 0;
    //char theChar = '\0'; //null char '\0' 
    //double num1 = 0.0, num2 = 0.0, num3 = 0.0; 
    
    if(userOption == "1")
    {
      cout << "\n To determine Velocity: \n";
      cout << "\n Please enter in the ds units \n"; 
      ds = validateDouble(ds);
      cout << "\n Please enter the dt units \n";
      dt = validateDouble(dt);
      cout << "\n You entered " << ds << " for ds Units \n";
      cout << " and " << dt <<   " for dt Units \n";
      velocityCalc (ds,dt); //call the Velocity Calculation function 
    }
    else if(userOption == "2")
    {
      cout << "\n To determine Acceleration: \n";
      cout << "\n Please enter in the dv Units \n"; 
      dv = validateDouble(dv);
      cout << "\n Please enter the dt \n";
      dt = validateDouble(dt);
      cout << "\n You entered" << dv << "for dv Units \n";
      cout << " and " << dt <<   "for dt Units \n";
      accelerCalc(dv,dt); //call the Acceleration Calculation function 
    }
    else if(userOption == "3")
    {
      cout << "\nWould you like to calculate motion? ";
      cout << "\nPress \"Y\" to continue, or press \"R\" to return to main menu. "; 
      
    }

    else if(userOption == "4")
    { 
      cout << "\n To determine Newton\'s Second Law. \n";
      cout << "\n Please enter in the mass \"m\" units \n"; 
      m = validateDouble(m);
      cout << "\n Please enter the acceleration \"a\" units. \n";
      a = validateDouble(a);
      cout << "\n You entered " << m << " for mass Units \n";
      cout << " and " << a <<   " for accerlation units \n";
      cout << "\n\n"<< newtons2nd(m,a)<< endl; //call the Newton's 2nd Law Calculation function 
   
    }
    
    else if(userOption == "5")
    { 
      cout << "\n To determine Weight. \n";
      cout << "\n Please enter in the mass \"m\" units \n"; 
      m = validateDouble(m);
      cout << "\n Please enter the gravity \"g\" units. \n";
      g = validateDouble(g);
      cout << "\n You entered " << m << " for mass Units \n";
      cout << " and " << g <<   " for gravity units \n";
      cout << "\n\n"<< earthWeight(m,g)<< endl; //call the Weight Calculation function 
   
    }

    else if(userOption == "6")
    { 
      cout << "\n To determine Momentum. \n";
      cout << "\n Please enter in the mass \"m\" units \n"; 
      m = validateDouble(m);
      cout << "\n Please enter the velocity \"v\" units. \n";
      v = validateDouble(v);
      cout << "\n You entered " << m << " for mass Units \n";
      cout << " and " << v <<   " for velocity units \n";
      cout << "\n\n"<< moMentum(m,v)<< endl; //call the Weight Calculation function 
   
    }



    else if(userOption == "X" || userOption == "x")
    {
      string reset = "\x1b[0m";
      //Linux Umbunu
      cout << reset; 
      cout << "\033[2J\033[1;1H";  //for ubuntu Linux Option 1 of 2
      //Windows: system("cls"); 
      system("clear"); //for ubuntu Linux Option 2 of 2
    }
    else if(userOption == "E" || userOption == "e")
    {
      cout << "\n… So long, farewell, auf Wiedersehen, goodbye" << endl; 
    }
    else
    {
      cout << "\nInvalid input: try again." << endl; 
    }
}

void showMenu()
{
  cout << "\nMENU" << endl; 
  cout << "1: Calculate Velocity" <<endl; 
  cout << "2: Calculate Acceleration" << endl; 
  cout << "3: Calculate Motion" << endl; 
  cout << "4: Newton’s Second Law" << endl; 
  cout << "5: Calculate Weight" << endl;
  cout << "6: Calculate Momentum" << endl;
  cout << "E: Exit" << endl; 
  cout << "X: clear the screen" << endl;   
}
//definintion  
double velocityCalc(double ds, double dt)
{
   //Process
    string dtUnits = " km/hour ";
    //string dsUnits;
        double v  = ds / dt;

        //Output:

        cout << "Velocity is equal to: " << v << dtUnits << endl;  
return (v);
}

double accelerCalc(double dv, double dt)
{
   //Process
    string dvUnits = " m/sec";
    string dtUnits;
        double a  = dv / dt;

        //Output:

        cout << a << dvUnits << "/" << dtUnits << endl;  
return (a);
}

void motionSubCalc()
{
  cout << "\nMotion MENU" << endl; 
  cout << "=============" << endl;
  cout << "1: Solve for v " <<endl; 
  cout << "2: Solve for s " << endl; 
  cout << "3: Solve for v^2 " << endl; 
  cout << "4: Solve for v_bar " << endl; 
  
}

double newtons2nd(double m,double a)
{
//Process
    string NUnits = " = kg m/s^2 ";
   
        double N  = m * a;

        //Output:

        cout << N << NUnits << endl;  
return (N);

}

double earthWeight(double m,double g)
{
//Process
    string WUnits = " = lbs ";
   
        double W  = m * g;

        //Output:

        cout << W << WUnits << endl;  
return (W);

}

double moMentum(double m,double v)
{
//Process
    string PUnits = " = kg m/s ";
   
        double P  = m * v;

        //Output:

        cout << P << PUnits << endl;  
return (P);

}



#endif
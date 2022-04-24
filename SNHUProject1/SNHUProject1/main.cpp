/*
    Steven Cognata
    Programming Languages Project 1
    March 22nd 2022
    Clock with menu to update clock

*/

#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

// all functions created with limitations in order for them not to go over set numbers

// creating function to add one hour and 
void clockAddHour(int& clock12Hour_Hour1, int& clock12Hour_Hour2, int& clock24Hour_Hour1, int& clock24Hour_Hour2, string& am_pm) {
	
	
	if(clock12Hour_Hour2 < 10) {
		clock12Hour_Hour2 = clock12Hour_Hour2 + 1;
		
	}
	
	if(clock12Hour_Hour2 == 10) {
		
		clock12Hour_Hour1 = 1;
		clock12Hour_Hour2 = 0;	
		
	
	}	
	
	if (clock12Hour_Hour1 == 1 && clock12Hour_Hour2 == 3) {
		clock12Hour_Hour1 = 0;
		clock12Hour_Hour2 = 1;
		
	}
	
	if(clock24Hour_Hour2 < 10) {
		clock24Hour_Hour2 = clock24Hour_Hour2 + 1;
		
	}
	
	if(clock24Hour_Hour1 == 1 && clock24Hour_Hour2 == 10) {
		clock24Hour_Hour1 = 2;
		clock24Hour_Hour2 = 0;
		
	}
	
	if(clock24Hour_Hour2 == 10) {
		clock24Hour_Hour2 = 0;
		clock24Hour_Hour1 = 1;
		
	}
	
	if(clock24Hour_Hour1 == 2 && clock24Hour_Hour2 == 4) {
		clock24Hour_Hour1 = 0;
		clock24Hour_Hour2 = 0;
		
	}
    
    if(clock24Hour_Hour1 == 1 && clock24Hour_Hour2 == 2) { // to update to PM
        am_pm = "P M";
        
    }
	
}

// creating function to add one minute
void clockAddMinute(int& minute1, int& minute2, int& clock12Hour_Hour1, int& clock12Hour_Hour2, int& clock24Hour_Hour1, int& clock24Hour_Hour2, string& am_pm) {
	
	if(minute2 < 10) {
		minute2 = minute2 + 1;
		
	}
	
	if(minute1 == 5 && minute2 == 10) {
		minute1 = 0;
		minute2 = 0;
		
		if(clock12Hour_Hour2 < 10) {
			clock12Hour_Hour2 = clock12Hour_Hour2 + 1;
		
		}
	
		if(clock12Hour_Hour2 == 10) {
			clock12Hour_Hour1 = 1;
			clock12Hour_Hour2 = 0;	
	
		}	
	
		if(clock12Hour_Hour1 == 1 && clock12Hour_Hour2 == 3) {
			clock12Hour_Hour1 = 0;
			clock12Hour_Hour2 = 1;
			
		}
		
		if(clock24Hour_Hour2 < 10) {
			clock24Hour_Hour2 = clock24Hour_Hour2 + 1;
		
		}
	
		if(clock24Hour_Hour1 == 1 && clock24Hour_Hour2 == 10) {
			clock24Hour_Hour1 = 2;
			clock24Hour_Hour2 = 0;
		
		}
	
		if(clock24Hour_Hour2 == 10) {
			clock24Hour_Hour2 = 0;
			clock24Hour_Hour1 = 1;
		
		}
	
		if(clock24Hour_Hour1 == 2 && clock24Hour_Hour2 == 4) {
			clock24Hour_Hour1 = 0;
			clock24Hour_Hour2 = 0;
		
		}
	
	}
	
	if(minute1 == 4 && minute2 == 10) {
		minute1 = 5;
		minute2 = 0;
		
	}
	
	if(minute1 == 3 && minute2 == 10) {
		minute1 = 4;
		minute2 = 0;
		
	}
	
	if(minute1 == 2 && minute2 == 10) {
		minute1 = 3;
		minute2 = 0;
		
	}
	
	if(minute1 == 1 && minute2 == 10) {
		minute1 = 2;
		minute2 = 0;
		
	}
	
	if(minute2 == 10) {
		minute1 = 1;
		minute2 = 0;
		
	}
	 
	
}

// creating function to add one second
void clockAddSecond(int& second1, int& second2, int& minute1, int& minute2, int& clock12Hour_Hour1, int& clock12Hour_Hour2, int& clock24Hour_Hour1, int& clock24Hour_Hour2,
				string& ampm) {
	
	if(second2 < 10) {
		second2 = second2 + 1;
		
	}
	
	if(second1 == 5 && second2 == 10) {
		second1 = 0;
		second2 = 0;
		
		if(minute2 < 10) {
			minute2 = minute2 + 1;
		
		}
	
		if(minute1 == 5 && minute2 == 10) {
			minute1 = 0;
			minute2 = 0;
		
			if(clock12Hour_Hour2 < 10) {
				clock12Hour_Hour2 = clock12Hour_Hour2 + 1;
		
			}
	
			if(clock12Hour_Hour2 == 10) {
				clock12Hour_Hour1 = 1;
				clock12Hour_Hour2 = 0;	
	
			}	
	
			if(clock12Hour_Hour1 == 1 && clock12Hour_Hour2 == 3) {
				clock12Hour_Hour1 = 0;
				clock12Hour_Hour2 = 1;
		
			}
		
			if(clock24Hour_Hour2 < 10) {
				clock24Hour_Hour2 = clock24Hour_Hour2 + 1;
		
			}
	
			if(clock24Hour_Hour1 == 1 && clock24Hour_Hour2 == 10) {
				clock24Hour_Hour1 = 2;
				clock24Hour_Hour2 = 0;
		
			}
	
			if(clock24Hour_Hour2 == 10) {
				clock24Hour_Hour2 = 0;
				clock24Hour_Hour1 = 1;
		
			}
	
			if(clock24Hour_Hour1 == 2 && clock24Hour_Hour2 == 4) {
				clock24Hour_Hour1 = 0;
				clock24Hour_Hour2 = 0;
		
			}
	
		}	
	
		if(minute1 == 4 && minute2 == 10) {
			minute1 = 5;
			minute2 = 0;
		
		}
	
		if(minute1 == 3 && minute2 == 10) {
			minute1 = 4;
			minute2 = 0;
		
		}
	
		if(minute1 == 2 && minute2 == 10) {
			minute1 = 3;
			minute2 = 0;
		
		}
	
		if(minute1 == 1 && minute2 == 10) {
			minute1 = 2;
			minute2 = 0;
		
		}
	
		if(minute2 == 10) {
			minute1 = 1;
			minute2 = 0;
		
		}
		
	}
		
	if(second1 == 4 && second2 == 10) {
		second1 = 5;
		second2 = 0;
		
	}
	
	if(second1 == 3 && second2 == 10) {
		second1 = 4;
		second2 = 0;
		
	}
	
	if(second1 == 2 && second2 == 10) {
		second1 = 3;
		second2 = 0;
		
	}
	
	if(second1 == 1 && second2 == 10) {
		second1 = 2;
		second2 = 0;
		
	}
	
	if(second2 == 10) {
		second1 = 1;
		second2 = 0;
		
	}
	
	
}

// main function
int main() {
    
	// declaration of menuInput and menu variables later initialized
	int menuInput;
	string menu;
	
	// declatation and initalization of int variables below
	int clock12Hour_Hour1 = 1; 
	int clock12Hour_Hour2 = 2;
	int clock24Hour_Hour1 = 0;
	int clock24Hour_Hour2 = 0;
	int minute1 = 0;
	int minute2 = 0;
	int second1 = 0;
	int second2 = 0;
    
    // declaration and initalization of char variables below
	char firstColon = ':'; // between hour and minute
	char secondColon = ':'; // between minute and second
    
    // declaration and initalization of string variable below
	string am_pm = "A M";
	

    // Outputting exactly how to access the menu options
    cout << "==========================" << endl;
    cout << "--------------------------" << endl;
	cout << "TO ACCESS MENU TYPE 'MENU'" << endl;
    cout << "--------------------------" << endl;
    cout << "==========================" << endl;
    cout << endl; //extra end line to push the clocks down for display purposes
    
    // top of clock border
	cout << "**************************\t" << "**************************" << endl;
	cout << "*     12-Hour Clock      *\t" << "*     24-Hour Clock      *" << endl;
    
    // 12 hour clock (left)
	cout << "*     " << clock12Hour_Hour1 << clock12Hour_Hour2 << firstColon << minute1 << minute2 << secondColon << second1 << second2 << " " << am_pm << "       *\t" 
    
    // 24 clock (right)
		 << "*     \t" << clock24Hour_Hour1 << clock24Hour_Hour2 << firstColon << minute1 << minute2 << secondColon << second1 << second2 << "         *" << endl; 
	
    // bottom of clock border
    cout << "**************************\t" << "**************************" << endl;
	cout << endl;
	
	do { // creating a do while loop so that the block of code will execute once before seeing if the condition is true or false
		// this will repeat as long as the condition is true
        
		cin >> menu; // taking the imput from the user to access the menu
		if(menu == "MENU" || menu == "menu" || menu == "Menu") { // this is to make sure the user can input multiple forms of the word to access the menu
			
            // outputting the menu options 
			cout << "\t\t**************************" << endl;
			cout << "\t\t*  1-Add One Hour        *" << endl;
			cout << "\t\t*  2-Add One Minute      *" << endl;
			cout << "\t\t*  3-Add One Second      *" << endl;
			cout << "\t\t*  4-Exit Program        *" << endl;
			cout << "\t\t**************************" << endl;

			//taking menuInput to toggle through the menu options
			cin >> menuInput; //taking input from user in order know what they want to do
            
			switch(menuInput) { // passing menuInput from the user into switch statement in order to know which case to do
            
				case 1: // this is the first case which will add one hour
					clockAddHour(clock12Hour_Hour1, clock12Hour_Hour2, clock24Hour_Hour1, clock24Hour_Hour2, am_pm); // calling the function to add one hour
					cout << "**************************\t" << "**************************" << endl; // using \t to tab over the clocks from one another
					cout << "*     12-Hour Clock      *\t" << "*     24-Hour Clock      *" << endl;
					cout << "*     " << clock12Hour_Hour1 << clock12Hour_Hour2 << firstColon << minute1 << minute2 << secondColon << second1 << second2 << " " 
					 	 << am_pm << "       *\t" 
		 			 	 << "*     " << clock24Hour_Hour1 << clock24Hour_Hour2 << firstColon << minute1 << minute2 << secondColon << second1 << second2 << "           *" 
					 	 << endl;
					cout << "**************************\t" << "**************************" << endl;
					cout << endl;
					break;
				
                case 2: // this is the second case which will add one minute 
					clockAddMinute(minute1, minute2, clock12Hour_Hour1, clock12Hour_Hour2, clock24Hour_Hour1, clock24Hour_Hour2, am_pm); //calling the function to add one minute
					cout << "**************************\t" << "**************************" << endl;
					cout << "*     12-Hour Clock      *\t" << "*     24-Hour Clock      *" << endl;
					cout << "*     " << clock12Hour_Hour1 << clock12Hour_Hour2 << firstColon << minute1 << minute2 << secondColon << second1 << second2 << " " 
					 	 << am_pm << "       *\t" 
		 				 << "*     " << clock24Hour_Hour1 << clock24Hour_Hour2 << firstColon << minute1 << minute2 << secondColon << second1 << second2 << "           *" 
					 	 << endl;
					cout << "**************************\t" << "**************************" << endl;
					cout << endl;
					break;
				
                case 3: // this is the third case which will add one second
					clockAddSecond(second1, second2, minute1, minute2, clock12Hour_Hour1, clock12Hour_Hour2, clock24Hour_Hour1, clock24Hour_Hour2, am_pm);
					cout << "**************************\t" << "**************************" << endl;
					cout << "*     12-Hour Clock      *\t" << "*     24-Hour Clock      *" << endl;
					cout << "*     " << clock12Hour_Hour1 << clock12Hour_Hour2 << firstColon << minute1 << minute2 << secondColon << second1 << second2 << " " 
					 	 << am_pm << "       *\t" 
		 			 	 << "*     " << clock24Hour_Hour1 << clock24Hour_Hour2 << firstColon << minute1 << minute2 << secondColon << second1 << second2 << "           *" 
					 	 << endl;
					cout << "**************************\t" << "**************************" << endl;
					cout << endl;
					break;
                    
				case 4: // this is the 4th and last case that will retuwn EXIT_SUCCESS and quit the program
					return EXIT_SUCCESS;
					break;
				default:
					break;
		
    
			}
		}
		
		else {
			return EXIT_SUCCESS;
			
		}
	
	} while(menu != "q");
	
	return 0;
	
}
#include "program.h"

using namespace std;

class CleanInputs {
		
		string cleanUserNumberInput(string userInput){
			if (userInput.toFloat()) {
				userInput = userInput.toFloat();
				return userInput;
			} else {
				userInput = "Bad";
				return userInput;
			}
		}	
		string cleanUserCharacterInput(string userInput){
			if (userInput.toChar()) {
				userInput = userInput.toChar();
				cout << expression;
				cout << "This is the expression and it worked";
				return userInput;
			} else {
				userInput = "Bad";
				cout << userInput;
				return userInput;
			}
		}
		string handleBadInput(string userInput){
			string message;
			if (userInput == "Bad") {
				message = "Input is bad, please follow the directions and try again!";
				return message;
			} else {
				return 0;
			}
		}	
	
};

#include <iostream>

class Calculations {
	private:
		double userInput1, userInput2;
		double result;
		char expression;
	
	public:	
			
		double calculate(double userInput1, double userInput2, char expression) {
			switch (expression) {
				case '+':
					result = userInput1 + userInput2;
					std::cout << userInput1 << " " << expression << " " << userInput2 << " = " << result;
					break;
				case '-':
					result = userInput1 - userInput2;
					std::cout << userInput1 << " " << expression << " " << userInput2 << " = " << result;
					break;
				case '*':
					result = userInput1 * userInput2;
					std::cout << userInput1 << " " << expression << " " << userInput2 << " = " << result;
					break;
				case '/':
					result = userInput1 / userInput2;
					std::cout << userInput1 << " " << expression << " " << userInput2 << " = " << result;
					break;
				default:
					std::cout << " Something went wrong!";
					break;
			
			}
			return result;		
		}
		
		
};


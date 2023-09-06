#include <string>
#include <iostream>
#include <regex>


class Program {
	public:
		std::string userStringInput1;
		std::string userStringInput2;
		std::string userStringInput3;
		std::string statement;
		std::string userInput; //holds response on tests
		int inputChecks;
		double userInput1, userInput2, result;
		char expression;
		//std::regex numbers_only("[0-9]+$");
		//std::regex chars_only("[a-z]+[A-Z]");

		//std::string userStringInput1;
		//std::string userStringInput2;
		//std::string userStringInput3;
		//std::string statement;
		//std::string userInput; //holds response on tests
		//std::int inputChecks;
		//std::double userInput1, userInput2, result;
		//std::char expression;
		//std::regex numbers_only("[0-9]+$");
		//std::regex chars_only("[a-z]+[A-Z]");

		void setUserStringInput1(std::string userStringInput1) {
			this->userStringInput1 = userStringInput1;
		}
		void setUserStringInput2(std::string userStringInput2) {
			this->userStringInput2 = userStringInput2;
		}
		void setUserStringInput3(std::string userStringInput3) {
			this->userStringInput3 = userStringInput3;
		}
		void setUserInput(std::string userInput) {
			this->userInput = userInput;
		}
		void setInputChecks(int inputChecks) {
			this->inputChecks = inputChecks;
		}
		void setUserInput1(double userInput1) {
			this->userInput1 = userInput1;
		}
		void setUserInput2(double userInput2) {
			this->userInput2 = userInput2;
		}
		void setExpression(char expression) {
			this->expression = expression;
		}
		//std::string getUserStringInput1(std::string userStringInput1, std::regex numbers_only, double userInput1, int inputChecks) {
			//if (std::regex_match(userStringInput1, std::numbers_only)) {
				//userInput1 = std::stod(userStringInput1);
				//setUserInput1(userInput1);
				//std::cout << "String was translated to double!";
			//} else {
				//std::cout << "String could not be translated to double";
				//inputChecks ++;
				//setInputChecks(inputChecks);
			//}
			//return userStringInput1;
			
		//}
		//std::string getUserStringInput2(std::string userStringInput2, std::regex numbers_only, double userInput2, int inputChecks) {
			//if (std::regex_match(userStringInput2, std::numbers_only)) {
				//userInput2 = std::stod(userStringInput2);
				//setUserInput2(userInput2);
				//std::cout << "String was translated to double!";
			//} else {
				//std::cout << "String could not be translated to double";
				//inputChecks ++;
				//setInputChecks(inputChecks);
			//}
			//return userStringInput2;
		//}
		std::string getUserStringInput3(std::string userStringInput3, char expression, int inputChecks) {
			expression = userStringInput3.find_first_of("+-*/");
			if (!expression) {
				std::cout << "Expression is empty";
				inputChecks++;
			} else {
				setExpression(expression);
			}
			return userStringInput3;
		}
};



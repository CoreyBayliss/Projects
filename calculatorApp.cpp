//#include "program.h"
//#include "calculations.h"
#include <iostream>
#include <cmath>

using namespace std;

class programData{
	double userInput1, userInput2, result;
	char expression;
	

	public:
	//getter methods to read data values
	double getUserInput1(){
		return userInput1;
	
	}
	double getUserInput2(){
		return userInput2;
	
	}
	char getExpression(){
		return expression;

	}
	double getResult(){
		return result;
	}
	//call calculate method from calculations class
	void calculateData() {
		getUserInput1();
		getUserInput2();
		getExpression();
		double resultTemp;
		switch (expression) {
			case '+':
				resultTemp = userInput1 + userInput2;
				cout << userInput1 << " " << expression << " " << userInput2 << " = " << resultTemp << endl;
				setResult(resultTemp);
				break;
			case '-':
				resultTemp = userInput1 - userInput2;
				cout << userInput1 << " " << expression << " " << userInput2 << " = " << resultTemp << endl;
				setResult(resultTemp);
				break;
			case '*':
				resultTemp = userInput1 * userInput2;
				cout << userInput1 << " " << expression << " " << userInput2 << " = " << resultTemp << endl;
				setResult(resultTemp);
				break;
			case '/':
				resultTemp = userInput1 / userInput2;
				cout << userInput1 << " " << expression << " " << userInput2 << " = " << resultTemp << endl;
				setResult(resultTemp);
				break;
			default:
				cout << " Something went wrong!";
				break;
			
		}
	}
	



	//setter methods to set data values
	void setUserInput1(double userInput1){
		this->userInput1 = userInput1;

	}
	void setUserInput2(double userInput2){
		this->userInput2 = userInput2;

	}
	void setExpression(char expression){
		this->expression = expression;

	}
	void setResult(double resultTemp){
		this->result = resultTemp;
	}
	
	

};

int main() {
	programData p;
	double number1, number2;
	char expEntry;
	cout << "What numbers do you want to include in your math equation? (Enter 2 numbers int or float) \n ";
	cin >> number1;
	p.setUserInput1(number1);
	
	cin >> number2;
	p.setUserInput2(number2);

	cout << "What equation do you want to do? (Addition (+), Subtraction (-), Mutiplication (*), or Division(/) \n";
	cin >> expEntry;
	p.setExpression(expEntry);
	
	//calculate(myProgram.userInput1, myProgram.userInput2, myProgram.expression, myProgram.result);
	//program get result and it passes a reference to calculations??
	p.calculateData();
	p.getResult();
	system("pause");
	
	return 0;

}
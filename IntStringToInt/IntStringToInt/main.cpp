/*========================================================================
Griffin Fujioka 
6/18/12 

This was given to me at a MSFT interview. 

The problem: Given a string of integers, return the integer value of the string. 

I.e., 
	"12345" => 12,345
	"73" => 73

=========================================================================*/ 

#include<string> 
#include<iostream>
using namespace std; 

int IntStringToInt(string inputString); 

int main()
{
	int total = 0, retCatch; 

	retCatch = IntStringToInt("12345"); 
	cout << "'12345' = " << retCatch << " as integer" << endl;  
	total += retCatch; 

	retCatch = IntStringToInt("73"); 
	cout << "'73' = " << retCatch << " as integer" << endl;  
	total += retCatch; 

	retCatch = IntStringToInt("548789"); 
	cout << "'548789' = " << retCatch << " as integer" << endl;  
	total += retCatch; 

	cout << "======================================" << endl; 
	cout << "Total: " << total << endl; 
	
	system("pause");		// So the console doesn't close automatically 
	return 0; 
}

int IntStringToInt(string inputString)
{
	int i, retVal = 0; 
	cout << "Entering IntStringToInt function with " << inputString << endl; 
	cout << "======================================" << endl; 
	for(i=0; i<inputString.length(); i++)
	{
		cout << "inputString[" << i << "] = " << inputString[i] << endl; 
		retVal *= 10; 
		retVal += (inputString[i] - '0');	// inputString[i] will give the ASCII value, so we convert by subtracting the ASCII value '0' 
		// ASCII table: 0=48, 1=49, 2=50, 3=51, etc. 
	}
	return retVal; 
}
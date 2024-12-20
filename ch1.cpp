// C++ Program to implement 
// C++ 20 - std::format 
#include <format> 
#include <iostream> 

using namespace std; 

int main() 
{ 
	// Declare variables 
	int num = 42; 
	std::string name = "John"; 

	// Use std::format to format a string with placeholders 
	// for variables 
	std::string formatted_str = std::format( 
		"My name is {} and my favorite number is {}", name, 
		num); 

	// Print formatted string to console 
	std::cout << formatted_str << std::endl; 

	return 0; 
}

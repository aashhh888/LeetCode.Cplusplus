#include <iostream>
using namespace std;

class Solution {
    public:
        string templateMethod() {
            return "Template";
        }
    };

int main() {
    Solution sol;
	// Test cases go here
    cout << boolalpha << (sol.templateMethod() == "Template") << endl;
}

// Run code without creating an executable
// bash
// g++ Template.cpp -o temp_program && ./temp_program && rm temp_program
// cmd
// g++ Template.cpp -o temp_program & temp_program & del temp_program.exe
// PowerShell
// g++ Template.cpp -o temp_program; ./temp_program; Remove-Item temp_program.exe
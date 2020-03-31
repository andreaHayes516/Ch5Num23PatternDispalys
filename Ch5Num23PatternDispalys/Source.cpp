/************************************************
** Author: Andrea Hayes
** Date: March 31, 2020
** Purpose: Create pattern loop
** Input: Loop
** Processing: Loop
** Output: Display Pattern A and Pattern B
*************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {

   int line = 0;
    
   cout << "Pattern A" << endl;
    while (line < 10) // Display of Pattern A with a while loop
    {
        int column = 1;
        while (column <= line + 1)
        {
            cout << "+";
            column++;
        }
        cout << endl;
        line++;
    }
    cout << "Pattern B" << endl;
    for (int line = 0; line < 10;line++) // Displays Pattern B with a for loop
    {
            
        for (int column = 10; column > line;column--)
        {
             cout << "+";
        }
    cout << endl;
    }

return 0;
}

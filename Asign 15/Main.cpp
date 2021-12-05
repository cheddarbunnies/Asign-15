#include <iostream>
using namespace std;

//Invalid character exception class
class Invalid_Character_Exception {

};

//Character Function
char character(char start, int offset)
{
    int startChar = int(start);
    int output = startChar + offset;

    //Try block
    try {
        if (startChar < 65 || (startChar > 90 && startChar < 97) || output > 122)
        {
            throw Invalid_Character_Exception();
        }
    }

    //Catch block
    catch (Invalid_Character_Exception) {
        //Display exception message if character is invalid
        cout << "Invalid Character Exception" << endl;
    }

    //Return alphabet letter
    return char(output);
}
    


//Main Function
int main()
{
    //Test drivers
    cout << character('a', 3) << endl;
    cout << character('?', 1) << endl;
}
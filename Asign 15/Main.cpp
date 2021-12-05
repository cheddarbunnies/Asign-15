#include <iostream>
using namespace std;

//Invalid character exception class
class Invalid_Character_Exception {

};

//Invalid range exception class
class Invalid_Range_Exception {

};

//Invalid case exception case
class Invalid_Case_Exception {

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
            throw Invalid_Character_Exception(); //Throw
        }
        else if (output < 65 || (output > 90 && output < 97) || output > 122)
        {
            throw Invalid_Range_Exception(); //Throw
        }
        else if ((output >= 65 && output <= 90 && startChar >= 95 && startChar <= 122) || (output >= 95 && output <= 122 && startChar >= 65 && startChar <= 90))
        {
            throw Invalid_Case_Exception(); //Throw
        }
    }

    //Catch block
    catch (Invalid_Character_Exception) {
        //Display exception message if character is invalid
        cout << "Not a valid alphebet letter";
        return 0;
    }
    catch (Invalid_Range_Exception) {
        //Display exception message if character not in range
        cout << "Not a valid alphebet letter in range";
        return 0;
    }
    catch (Invalid_Case_Exception) {
        //Display incorrect case messange
        cout << "Not a valid case";
        return 0;
    }
    //Return alphabet letter if not an exception
    return char(output);
}

//Main Function
int main()
{
    //Test drivers
    cout << character('a', 3) << endl;
    cout << character('?', 1) << endl;
    cout << character('a', -2) << endl;
    cout << character('Z', -20) << endl;
    cout << character('A', 32) << endl;
}
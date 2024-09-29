#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int  strcmp_case_insensitive(string str1, string str2)
{

    for (int i = 0; i < str1.length(); i++)
    {
        str1[i] = tolower(str1[i]);
    }
    string _str1 = str1;

    for (int i = 0; i < str2.length(); i++)
    {
        str2[i] = tolower(str2[i]);

    }
    string _str2 = str2;

    if (_str1.compare(_str2) == 0)
    {
        return 0;
    }
    else if (_str1.compare(_str2) < 0)
    {
        return -1;
    }
    else if (_str1.compare(_str2) > 0)
    {
        return 1;
    }


}
//string strcmp_case_insensitive(string, string);
int main() {



    //test1 (equality)

    string string1 = "Hi";
    string string2 = "hi";
    int value1 = strcmp_case_insensitive(string1, string2);

    cout << "Start of test for strings: " << string1 << " and " << string2 << endl;
    assert(strcmp_case_insensitive(string1, string2) == 0);
    cout << "End of test succesfully\nThe result of the value returned by function is: " << value1 << endl;

    //test2 (ascii order)
    string A = "A";
    string B = "B";
    int value2 = strcmp_case_insensitive(A, B);

    cout << "\n\nStart of test for strings: " << A << " and " << B << endl;
    assert(strcmp_case_insensitive(A, B) == -1);
    cout << "End of test succesfully\nThe result of the value returned by function is: " << value2 << endl;


    //test3 (uppercase)
    string ABD = "ABD";
    string ABC = "ABC";
    int value3 = strcmp_case_insensitive(ABD, ABC);

    cout << "\n\nStart of test for strings: " << ABD << " and " << ABC << endl;// ABD > ABC bec d= 64 and c= 63 from ASCII
    assert(strcmp_case_insensitive(ABD, ABC) == 1);
    cout << "End of test succesfully\nThe result of the value returned by function is: " << value3 << endl;

    //test4 (mix of lowcase and upcase)
    string rdStr1 = "cctRRyh";
    string rdStr2 = "agdhRTj";
    int value4 = strcmp_case_insensitive(rdStr1, rdStr2);

    cout << "\n\nStart of test for strings: " << rdStr1 << " and " << rdStr2 << endl;
    assert(strcmp_case_insensitive(rdStr1, rdStr2) == 1);
    cout << "End of test succesfully\nThe result of the value returned by function is: " << value4 << endl;


    //test5 
    string rdStr3 = "HeLLOOOO";
    string rdStr4 = "Hi";
    int value5 = strcmp_case_insensitive(rdStr3, rdStr4);

    cout << "\n\nStart of test for strings: " << rdStr3 << " and " << rdStr4 << endl;
    assert(strcmp_case_insensitive(rdStr3, rdStr4) == -1);
    cout << "End of test succesfully\nThe result of the value returned by function is: " << value5 << endl;


    return 0;


}

#include <iostream>
#include <limits>
using namespace std;
int main()
{
    int userinput;
    bool isValid = false;
    cout << " please enter a valid integer betweeen 5 and 10. ";
while (isValid) {
    if (cin >> userinput) { 
        if (userinput >= 5 && userinput <= 10) {
            isValid = true;
        }
        else {
            cout << "invalid input. please enter an integer betwween 5 and 10. ";
        }
    } else { 
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "invalid input. please enter an integer between 5 and 10. " ;
    }
}
cout << "your input value (" << userinput << ") has been accepted. " << endl;
return 0;
}
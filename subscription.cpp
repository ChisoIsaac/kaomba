#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
    srand(time(0));
    int DaysUntillExpiretion = rand() % 12;
    cout << "Days untill expiretion: " << DaysUntillExpiretion << endl;
    if (DaysUntillExpiretion == 0) {
        cout << "your subscription has expired. " << endl;
    }
    else if (DaysUntillExpiretion == 1) {
        cout << "your subscription expires within a day." << endl;
        cout << "renew and save 20%! " << endl;
    }
    else if (DaysUntillExpiretion <= 5) {
        cout << "your subscriptin expires in " << DaysUntillExpiretion << " days " << endl;
        cout << "renew and save 10%! " << endl;
    }
    else if (DaysUntillExpiretion <= 10) {
        cout << "your subscription will expire soon. renew now! " << endl;
    }
    else {
        cout << "you've an active subscription. " << endl;
    }
    return 0;
}
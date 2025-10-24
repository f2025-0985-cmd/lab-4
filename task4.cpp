#include <iostream>
using namespace std;

int main() {
    int currentyear, birthyear, age;


    cout << "Enter the current year: ";
    cin >> currentyear;

    cout << "Enter the applicant's year of birth: ";
    cin >> birthyear;

    age = currentyear - birthyear;

    cout << "\nApplicant's Age: " << age << " years";

    if (age >= 18 && age <= 28) {
        cout << "\n Eligible for recruitment.";
    }
    else {
        cout << "\n Not eligible for recruitment.";
    }


    return 0;
}

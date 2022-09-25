/*
Define the missing function. licenseNum is created as: (100000 * customID) + licenseYear, where customID is a function parameter. Sample output with inputs 2014 777:
Dog license: 77702014
*/

#include <iostream>
using namespace std;

class DogLicense {
public:
    void   SetYear(int yearRegistered);
    void   CreateLicenseNum(int customID);
    int    GetLicenseNum() const;
private:
    int    licenseYear;
    int    licenseNum;
};

void DogLicense::SetYear(int yearRegistered) {
    licenseYear = yearRegistered;
}

// FIXME: Write CreateLicenseNum()

/* Your solution goes here  */

void DogLicense::CreateLicenseNum(int customID) {
    licenseNum = (100000 * customID) + licenseYear;
}

int DogLicense::GetLicenseNum() const {
    return licenseNum;
}

int main() {
    DogLicense dog1;
    int userYear;
    int userId;

    cin >> userYear;
    cin >> userId;

    dog1.SetYear(userYear);
    dog1.CreateLicenseNum(userId);
    cout << "Dog license: " << dog1.GetLicenseNum() << endl;

    return 0;
}
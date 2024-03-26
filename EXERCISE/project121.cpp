#include <future>
#include <iostream>
#include <string>
using namespace std;

string viewDonor(string data[5][4], string donor) {
    for (int i = 0; i < 5; i++) {
        if (donor == data[i][0]) {
            cout << "Donor ID: " << data[i][0] << endl;
            cout << "Blood Bank: " << data[i][1] << endl;
            cout << "Donation Date: " << data[i][2] << endl;
            cout << "Contact Number: " << data[i][3] << endl;
        }
        cout << endl;
    }
}
void bloodData() {
    string data[8][4] = {
        {"BL_ABP", "AB+", "542", "4300"},  {"BL_ABN", "AB-", "361", "3165"},
        {"BL_APO", "A+", "193", "1100"},   {"BL_ANE", "A-", "200", "1100"},
        {"BL_BPO", "B+", "106", "2560"},   {"BL_BNE", "B-", "487", "2100"},
        {"BL_OPO", "O+", "1290", "15200"}, {"BL_ONE", "O-", "2126", "10932"}};

    for (int i = 0; i < 8; i++) {
        cout << "Code: " << data[i][0] << endl;
        cout << "Blood Group: " << data[i][1] << endl;
        cout << "Current Stock(bags): " << data[i][2] << endl;
        cout << "Cumulative collection (bags): " << data[i][3] << endl;
        cout << endl;
    }
}
string lastDntnDate(string data[5][4], string donor) {
    for (int i = 0; i < 5; i++) {
        if (donor == data[i][0]) {
            cout << "Donor ID: " << data[i][0] << endl;
            cout << "Last Donation Date: " << data[i][2] << endl;
        }
        cout << endl;
    }
}
int main() {
    string data[5][4] = {
        {"ABP-08-3220", "BL_ABP", "02-Feb-2022", "010-123 4567"},
        {"ONE-12-1111", "BL_ONE", "15-Oct-2022", "011-234 5678"},
        {"ABP-08-3220", "BL_ABP", "27-May-2022", "010-123 4567"},
        {"BNE-01-3220", "BL_BNE", "16-Nov-2022", "013-456 7890"},
        {"ONE-36-7572", "BL_ONE", "01-Nov-2021", "014-567 8901"}};
    string donor;

    cout << "Enter a donor ID: ";
    cin >> donor;

    cout << endl;

    // capitalize all letter
    for (int i = 0; i < donor.length(); i++) {
        donor[i] = toupper(donor[i]);
    }
    // async the function execution
    future<string> f1 = async(viewDonor, data, donor);
    future<void> f2 = async(bloodData);
    future<string> f3 = async(lastDntnDate, data, donor);
    return 0;
}
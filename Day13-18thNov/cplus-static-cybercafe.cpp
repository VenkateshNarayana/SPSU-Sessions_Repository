/******************************************************************************
static vs local
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

class CyberCafe {
public:
    // Static members
    static int count;
    static int noOfSystems;
    static int sysIDs[5];

    // Non-static members
    string systemID;
    string user;
    int sysIndex;

    CyberCafe() {
        noOfSystems = 5;
        sysIndex = -1;
    }

    static void display_availability() {
        cout << "Systems Available = "
             << (noOfSystems - count) << endl;
    }

    void allocateSystem(string user) {

        if (count < noOfSystems) {

            for (int i = 0; i < noOfSystems; i++) {

                if (sysIDs[i] == 0) {

                    count++;

                    this->user = user;
                    this->sysIndex = i;
                    this->systemID = "Sys" + to_string(i + 1);

                    sysIDs[i] = 1;

                    cout << systemID
                         << " allocated to " << user << endl;

                    return;
                }
            }
        }
        else {
            cout << "All systems are already allocated."
                 << " Please wait for release." << endl;
        }
    }

    void releaseSystem() {

        if (sysIndex == -1) {
            cout << "System is not allocated!" << endl;
            return;
        }

        count--;

        sysIDs[sysIndex] = 0;

        cout << systemID
             << " successfully released by "
             << user << endl;

        systemID = "";
        user = "";
        sysIndex = -1;
    }
};

// Static member definitions
int CyberCafe::count = 0;
int CyberCafe::noOfSystems = 0;
int CyberCafe::sysIDs[5] = {0};

int main() {

    CyberCafe vecCafe[10];

    cout << "Initial Availability" << endl;
    CyberCafe::display_availability();

    vecCafe[0].allocateSystem("Raj");
    vecCafe[1].allocateSystem("Rai");
    vecCafe[2].allocateSystem("Tariq");
    vecCafe[3].allocateSystem("Tanvi");
    vecCafe[4].allocateSystem("Gavi");
    vecCafe[5].allocateSystem("Aavi");

    CyberCafe::display_availability();

    vecCafe[0].releaseSystem();
    CyberCafe::display_availability();

    vecCafe[5].allocateSystem("Aavi");
    CyberCafe::display_availability();

    return 0;
}


#include <iostream>
#include <map>
using namespace std;

class stateList {
    map<string, int> list;

public:
    stateList() {
        list["andaman nicobar"] = 400000;
        list["andhra pradesh"] = 52787000;
        list["arunachal pradesh"] = 1533000;
    }

    int getPopulation(string state)
    {
        return list[state];
    }

    void displayAll() {
        cout << "All states data available is" << endl;
        for (pair<string, int> state : list) {
            cout << state.first << " - " << state.second << endl;
        }
    }
};

int main() {
    string str;
    int population;

    stateList database;
    while(true) {
        cout << "Enter the name of the state (0 for all)(exit for end) : ";
        getline(cin, str);
        if (str == "exit") {
            break;
        }
        population = database.getPopulation(str);
        if (population == 0) {
            cout << "No data available for " << str << endl;
            database.displayAll();
        } else {
            cout << "Population of " << str << " is " << population << endl;
        }
    }


    cout << "Thank you" << endl;
    return 0;
}

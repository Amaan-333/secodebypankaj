#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Person
{
public:
    string name;
    int birth_date;
    long phone_number;
    int roll_number;
    void get()
    {
        cout<<"Enter the roll number of the student- \n";
        cin >> roll_number;
        cout << "Enter the name of the person-\n";
        cin >> name;
        cout << "Enter birth date of the person-\n";
        cin >> birth_date;
        cout << "Enter phone number of the person-\n";
        cin >> phone_number;
    }
    void display()
    {
        cout << endl;
        cout << "Roll number of the student- "<<roll_number<<endl;
        cout << "The name of the person is- " << name << endl;
        cout << "The birth date of the person is- " << birth_date << endl;
        cout << "The phone number of the person is- " << phone_number << endl;
        cout << endl;
    }
};


int main()
{
    int n;
    cout << "ENTER THE NUMBER OF PERSONS HERE-\n";
    cin >> n;
    string key1;
    vector<Person> v(n);
    vector<string> name(n);
    vector<int> roll_num(n);
    char choice1 = 'y';

    while (choice1 == 'y' or choice1 == 'Y')
    {
        int operation;
        cout << endl;
        cout << "Enter 1 for inserting the records" << endl;
        cout << "Enter 2 for displaying the person's record" << endl;
        cout << "Enter 3 for sorting the record" << endl;
        cout << "Enter 4 for searching a person's record" << endl;
        cout << "Enter 5 for deleting a person's record" << endl;
        cout << "Enter 6 for terminating the program" << endl;
        cin >> operation;
        if (operation == 6)
        {
            break;
        }
        switch (operation)
        {
            case 1:
                for (int i = 0; i < n; i++)
                {
                    v[i].get();
                }
                break;

            case 2:
                for (int i = 0; i < n; i++)
                {
                    v[i].display();
                }
                break;

            case 3:
                for (int i = 0; i < n; i++)
                {
                    roll_num[i] = (v[i].roll_number);
                }

                sort(roll_num.begin(), roll_num.end());

                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        if (roll_num[i] == v[j].roll_number)
                        {
                            v[j].display();
                        }
                    }
                }
                break;

            case 4:
                for (int i = 0; i < n; i++)
                {
                    name.push_back(v[i].name);
                }

                cout << "Enter the name to be searched in the record-\n";
                cin >> key1;
                if (binary_search(name.begin(), name.end(), key1))
                {
                    cout << "THE PERSON'S DATA IS PRESENT IN THE RECORD\n";
                }
                else
                {
                    cout << "THE PERSON'S DATA IS NOT PRESENT IN THE RECORD\n";
                }
                break;

            case 5:
                for (int i = 0; i < n; i++)
                {
                    name.push_back(v[i].name);
                }
                cout << "Enter the name to be deleted in the record-\n";
                cin >> key1;
                if (binary_search(name.begin(), name.end(), key1))
                {
                    cout << "THE PERSON'S DATA IS PRESENT IN THE RECORD\n";
                    cout << "THE PERSON'S DATA IS DELETED FROM THE RECORD\n";
                    for (int i = 0; i < n; i++)
                    {
                        if (v[i].name == key1)
                        {
                            v.erase(v.begin() + i);
                        }
                    }
                }
                else
                {
                    cout << "THE PERSON'S DATA IS NOT PRESENT IN THE RECORD\n";
                }
                break;

            default:
                cout << "INVALID INPUT\n";
                break;
        }
        cout << "Do you want to continue? Press Y or else press N to terminate!\n";
        cin >> choice1;
    }
    cout << "The program has been terminated!";
    return 0;
}

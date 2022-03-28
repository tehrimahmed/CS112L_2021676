#include <iostream>
#include <string>
using namespace std;
class Security{
private:
    static int count;
public:
    void check(int id)
    {
        int tempID = id, remainder, reversedNum = 0;
        while (tempID)
        {
            remainder = tempID % 10;
            reversedNum = reversedNum * 10 + remainder;
            tempID /= 10;
        }
        if (reversedNum == id) {
            cout << "Officer not allowed to enter.\n";
        }
        else {
            cout << "Officer allowed to enter.\n";
            count++;
        }
    }

    static int getcount()
    {
        return count;
    }
};

int Security::count = 0;

int main()
{
    Security off;
    int select, id;
    string name, rank;
    while (1)
    {
        cout << "Select a desired option:\n1.To check if officer entry is allowed.\n2.To see how many officers have been entered.\n3.Exit\n";
        cin >> select;
            switch (select) {
            case 1:
                cout << "Enter officer ID: ";
                cin >> id;
                cout << "Enter officer name: ";
                cin >> name;
                cout << "Enter officer rank: ";
                cin >> rank;
                off.check(id);
                break;
            case 2:
                cout << off.getcount()<<endl;
                break;
            case 3:
                return 0;
        }
    }
}

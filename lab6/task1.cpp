#include <iostream>
#include<string>
using namespace std;
class coordinator;
class person
{
public:
    friend class coordinator;
private:
    string comp_uni_name;
};

class coordinator
{
private:
    person p1, p2;
    int room;
public:
    void input()
    {
        cout << "Enter the competition and University name: ";
        getline(cin, p1.comp_uni_name);
        cout << endl;
        cout << "Enter the competition and University name: ";
        getline(cin, p2.comp_uni_name);
        cout << endl;
    }

    void comparison()
    {
        string uniname1 = " ", uniname2 = " ";
        int a = 0, b = 0;
        for (int i = 0; p1.comp_uni_name[i] != ' '; i++)
            a++;
        for (int j = 0; p2.comp_uni_name[j] != ' '; j++)
            b++;
        for (int i = a; i < p1.comp_uni_name.length(); i++)
            uniname1 = uniname1 + p1.comp_uni_name[a + 1];
        for (int j = b; j < p2.comp_uni_name.length(); j++)
            uniname2 = uniname2 + p2.comp_uni_name[b + 1];
        if (uniname1 == uniname2)
        {
            if (a > b)
                room = a;
            else if (b > a)
                room = b;
            else
                room = a;
            cout << "Person 1 and person 2 are roomates, the room number is " <<
                room << endl;
        }
        else if (uniname1 != uniname2)
            cout << "Person 1 and Person 2 aren't roomates.\n";
    }
};

int
main()
{
    coordinator run;
  
    run.input();
    run.comparison();

    return 0;
}

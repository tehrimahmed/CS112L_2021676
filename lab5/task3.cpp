#include <iostream>
#include<string>
using namespace std;
class stringtype
{
private:
  string s1, s2;
public:
  stringtype ()
  {
    s1 = " ";
    s2 = " ";
  }
  void setvalues (string first, string second)
  {
    s1 = first;
    s2 = second;
  }
  void printvalues ()
  {
    cout << "String 1: " << s1 << endl << "String 2: " << s2 << endl;
  }
  int maxlength ()
  {
    int j = 0, i = 0;
    while (s1[i] != '\0')
      i++;
    while (s2[j] != '\0')
      j++;
    if (i > j)
      return i;
    else
      return j;
  }
  void copy (string s1, string s2)
  {
    s1 = s2;
    cout << s1;
  }
  string concatenate (string s1, string s2)
  {
    string s3 = s1 + s2;
    return s3;
  }
  int compare ()
  {
    int k = 0;
    while (s1[k] != '\0' && s2[k] != '\0')
      {
	if (s1[k] > s2[k])
	  return 2;
	else if (s2[k] > s1[k])
	  return -1;
      }
    return 0;
  }
  int searchchar (char ch)
  {
    int i = 0, j = 0;
    bool flag = false;
    while (s1[i] != '\0')
      {
	if (ch == s1[i])
	  flag = true;
	i++;
      }
    while (s2[j] != '\0')
      {
	if (ch == s2[j])
	  flag = true;
	j++;
      }
    if (flag == false)
      return 0;
    else
      return 1;
  }
  int searchword (string word)
  {
    int i = 0, j = 0, k = 0, l = 0;
    while (s1[i] != '\0' && word[j] != '\0')
      {
	if (word[j] != s1[i])
	  {
	    i++;
	    j = 0;
	  }
	else
	  {
	    i++;
	    j++;
	  }
      }
    while (s2[k] != '\0' && word[l] != '\0')
      {
	if (word[l] != s2[k])
	  {
	    k++;
	    l = 0;
	  }
	else
	  {
	    k++;
	    l++;
	  }
      }
    if (word[j] == '\0' || word[l] == '\0')
      return 1;
    else
      return 0;
  }
};

int
main ()
{
  stringtype yay;
  string s1, s2, word;
  char ch;
  cout << "Please enter first string: \n";
  getline (cin, s1);
  cout << "Please enter second string: \n";
  getline (cin, s2);
  yay.setvalues (s1, s2);
  yay.printvalues ();
  cout << "The length of the larger string is: " << yay.maxlength () << endl;
  cout << "Result of the comparison is: " << yay.compare () << endl;
  cout << "The concatenated string is: " << yay.concatenate (s1, s2) << endl;
  cout << "Enter the character to search in string: ";
  cin >> ch;
  cout << "The result of our search is: " << yay.searchchar (ch) << endl;
  cout << "Enter the word to search in both strings: ";
  cin >> word;
  cout << "The result of our search is: " << yay.searchword (word) << endl;
  cout << "The 2nd string copied into the 1st is:\n";
  yay.copy (s1, s2);
  return 0;
}

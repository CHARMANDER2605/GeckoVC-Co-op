#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

void generate();

int leagth = 0;
string YesOrNo = "";

void main()
{
    cout << "How long should the password be?"
    cin >> leagth;
    cout << "Is it correct, you wanted the password to be " << leagth << " charecters long?"
    cin >> YesOrNo;
    if(YesOrNo == "Yes" || "yes" || "y")
    {
        generate();
    }
    else if(YesOrNo == "No" || "no" || "n")
    {
        main();
    }
}
void generate()
{ 
    //password generation system.
}

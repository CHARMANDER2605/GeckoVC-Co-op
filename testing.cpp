#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

void generate();

int leagth = 0;
string YesOrNo = "";
char charecters[];

void main()
{
    cout << "How long should the password be?" << endl;
    cin >> leagth;
    cout << "Is it correct, you wanted the password to be " << leagth << " charecters long?" << endl;
    cin >> YesOrNo;
    if(YesOrNo == "Yes" || "yes" || "y")
    {
        generate();
    }
    else
    {
        main();
    }
}
void generate()
{ 
    //password generation system.
}

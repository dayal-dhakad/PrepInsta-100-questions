// find the Quadrant in which Coordinates lie
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter the value of x" << endl;
    cin >> x;
    cout << "Enter the value of y" << endl;
    cin >> y;

    //  cout<<y<<endl;

    if (x > 0 && y > 0)
    {
        cout << "I quadrant" << endl;
    }
    else if (x < 0 && y > 0)
    {
        cout << "II quadrant" << endl;
    }
    else if (x < 0 && y < 0)
    {
        cout << "III quadrant" << endl;
    }
    else if (x > 0 && y < 0)
    {
        cout << "IV quadrant" << endl;
    }
     else if (x == 0 && y != 0)
    {
        cout << "y axis" << endl;
    }
     else if (x != 0 && y == 0)
    {
        cout << "x axis" << endl;
    }
    else{
        cout<<"origin"<<endl;
    }
    

    return 0;
}
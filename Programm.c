#include <iostream>
using namespace std;

int main()
{
    char buffer[5];
    int admin = 0;

    cin>>buffer;
    if(strcmp(buffer,"in") == 0)
    {
        admin = 1;
        cout<<"Correct"<<endl;
    }
    if(admin != 0)
        cout << "Access" << endl;
    return 0;
}

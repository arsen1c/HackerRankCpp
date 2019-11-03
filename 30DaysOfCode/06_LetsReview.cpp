#include <iostream>
#include <string>
using namespace std;

// my solutoion
int main()
{
    int intake;
    string a;
    string b;
    string c;
    cout << "Enter test case\n>";
    cin >> intake;
    
    for(int x = 0; x < intake; x++)
    {
        cout << "\nEnter string\n>";
        cin >> a;
        //cin.ignore();
        
        for(int i = 0; i < a.length(); i++)
        {
            if(i % 2 == 0)
            {
                b += a[i];
            }
            else c += a[i];
        }
        cout << b << " " << c << endl;
        b.clear();
        c.clear();

    }
        /* (COPIED:)
    int t, i, j;
    string s, ev, od;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>s;
        ev="";od="";
        for(j=0; j<s.length();j++){
            if(j%2==0) ev += s[j];
            else od += s[j];
        }
        cout<<ev;
        cout<<" "<<od<<endl;
    }*/ 
    return 0;
    
    
}

// stuff i learned- a.clear(). swap(a[0], b[0]);
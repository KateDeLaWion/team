#include <iostream>
using namespace std;

int main()
{
    int n,x =0;
    cin>>n;
    while(n--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if( a+b+c >= 2) // it requires only 2 people to think they can solve the problem.
        x++;
    }
    cout<<x;
}












// #include <iostream>
// using namespace std;

// int main()
// {
//     int n,x =0;
//     cin>>n;
//     while(n--)
//     {
//         int a,b,c;
//         cin >> a >> b >> c;
//         if((a==1 & b==1) || (a==1 & c==1) || (b==1 & c==1) || (a==1 & b==1 & c==1))
//         x++;
//     }
//     cout<<x;
// }



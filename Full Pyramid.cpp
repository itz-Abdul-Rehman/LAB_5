#include <iostream>
using namespace std;

int main()
{
    int n;
    string ch;
    cout <<"Enter the size of Pyramid: ";
    cin>>n;
    cout<<"Enter character to print: ";
    cin>>ch;
    for(int i = 1; i <= n; i++){
        for(int x = n; x >= i; x--){
            cout<<" ";
        }
        for(int j=1; j <= (2 * i - 1); j++){
            cout<<ch;
        }
        cout<<endl;
    }

    return 0;
}
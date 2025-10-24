#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = false;
    cout << "Enter a Number: ";
    cin>>n;
    if(n == 2){
        cout<<n<<" is a prime Number!";
    }
    else{
    for(int i=2; i < n; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
        else{
            isPrime = true;
        }
    }
    if (isPrime == true){
        cout<<n << " is a prime Number!";
    }
    else{
        cout<<n<<" is a composite number!";
    }
    }

    return 0;
}
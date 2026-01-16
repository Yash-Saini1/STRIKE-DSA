#include<iostream>
using namespace std;

int main() {
    int num, sum = 0, rem;
    cout<<"Enter the Number: ";
    cin>>num;

    while(num) {
        rem = num%10;
        sum+=rem;
        num /= 10;
    }
    cout<<sum;
}
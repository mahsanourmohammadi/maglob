#include <iostream>

using namespace std;

int reverseNumber(int num){

    int reversed=0;

    while(num >0){
        int digit = num % 10;

        reversed = reversed * 10 + digit;
        num/=10;
    }
        return reversed;
}
int main(){
    int inputnumber;
    cout<<"enter a number:";
    cin>> inputnumber;

    int result= reverseNumber(inputnumber);
    cout<<"the reversed number is:"<<result<<endl;

return 0;



}































#include <iostream>

using namespace std;

void odbroji(int n) {
    if(n <= 0){
        return;
    }
cout << n << endl;
odbroji(n-1);

}

int faktorijel(int n){
if(n==0){
return n;
}
return n * faktorijel(n-1);
}
void broji(int n){
if(n<=0){
    return;
}
broji(n-1);
cout << n << endl;
}

int main()
{
    //odbroji(n);

    //Faktorijela
    //4! = 4 * 3 * 2 * 1

    //cout << faktorijel(4);

    odbroji(5);
    broji(5);

    return 0;
}

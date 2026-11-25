#include<iostream>
using namespace std;
class overload{
    public:
    int value;
    overload(int v){
        value=v;
    }
    overload operator+( overload&obj){
        overload temp(0);
        temp.value=value+obj.value;
        return temp;
    }
};
int main(){
overload n1(10),n2(20),n3(0);
n3=n1+n2;
cout<<"sum is:"<<n3.value<<endl;
}
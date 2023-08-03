#include<bits/stdc++.h>
using namespace std;
class Number
{
private:
    int num1 ;
    int num2 ;
    int num3 ;
public:
    void setnum(int num1 , int num2 , int num3){
        if (num1 % 2 == 0 && num2 % 2 == 0 && num3 % 2 == 0)
        {
            this-> num1 = num1 ;
            this-> num2 = num2 ;
            this-> num3 = num3 ;
        }else
        {
            cout<<"-1";
        }
        
        
    }
    int getnum(){
        return num1 + num2 + num3 ;
    }
};
int main(){
    int num1 , num2 , num3 ;
    cin >> num1 >> num2 >> num3 ;
    Number number ;
    number.setnum(num1 , num2 , num3);
    cout<<number.getnum();
}


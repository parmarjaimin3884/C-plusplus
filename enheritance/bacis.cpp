#include<iostream>
using namespace std;
struct basic
{
    int i;
    void input()
    {
        
        cin >> i;
    }
    void print()
    {
        cout << i;
    }
};
int main()
{
    basic.input();
    basic.print();
}
#include<iostream>
using namespace std;

int countOperations(int num1, int num2) 
{
        int no_of_oper = max(num1,num2);
        int start = 0 ;
        int no1 = num1 ;
        int no2 = num2;
        while(start<no_of_oper)
        {
            if(no1==0 || no2==0)
            {
                return start ;
            }
            else if(no1>=no2)
            {
                no1 = no1 - no2 ;
            }
            else
            {
                no2 = no2 - no1 ;
            }
            start++;
        }

        return start ;
}

int main()
{
    cout << countOperations(2,3) << endl;
}
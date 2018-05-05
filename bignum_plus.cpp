#include "merge_sa.h"

vector<int> plusOne(vector<int> &digits)
{
    for(int i=digits.size()-1;i>=0;i--)
    {
        if(digits[i]==9)
        {
            digits[i]=0;
        }
        else
        {
            // 不进位则+1，结束
            digits[i]++;
            break;
        }
    }
    if(digits[0]==0)
        digits.insert(digits.begin(),1);
    return digits;
}

void test_plusOne()
{
    vector<int> va;
    for(int i=0;i<5;i++)
        va.push_back(9);
    plusOne(va);
    for(int i=0;i<va.size();i++)
        cout<<va[i]<<" ";
}

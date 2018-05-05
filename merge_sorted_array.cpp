#include "merge_sa.h"


void merge1(int A[], int m, int B[], int n)
{
    for(int i=0;i<n;i++)
    {
        A[m+i]=B[i];
    }
    sort(A,A+m+n);
}

//从后往前处理,i为A末尾，j为B末尾，比较后大的放在末端
//比较完后，若j未完说明剩下都比A小，放在最前
void merge2(int A[], int m, int B[], int n)
{
    int i=m-1, j=n-1, index=m+n-1;
    while(i>=0 && j>=0)
    {
        if(A[i] > B[j])
        {
            A[index--]=A[i];
            i--;
        }
        else
        {
            A[index--]=B[j];
            j--;
        }
    }
    //若j未完说明剩下都比A小，放在最前
    while(j>=0)
    {
        A[j]=B[j];
        j--;
    }
}

void test_merge()
{
    int a[30]={0};
    for(int i=0;i<20;i++)
    {
        a[i]=i+3;
    }
    int b[10];
    for(int i=0;i<10;i++)
    {
        b[i]=i+5;
    }
    merge2(a,20,b,10);
    for(int i=0;i<30;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

//This is your certificate's link: http://www.codility.com//cert/view/certD73M8U-2K5QZK3FUSXBC95B/
//

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int falling_disks ( const vector<int> &A,const vector<int> &B ) {
    int ans = 0;
    int ib = 0;
    int temp = A[0];
    vector<int> tA;
    for (int ia = 0; ia < A.size(); ++ia)
    {
        if (A[ia] < temp)
        {
            temp = A[ia];
        }

        tA.push_back(temp);
    }

    for (int ia = tA.size()-1; ia>=0 && ib<B.size(); --ia)
    {
       if (tA[ia] >= B[ib])
       {
            ++ib;
            ++ans;
       }
    }

    return ans;
}

int main()
{
    return 0;
}


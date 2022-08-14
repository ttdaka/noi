#include<bits/stdc++.h> 
using namespace std;
int main()
{
	long long a[101], b[101];//a[i]:第i个月有多少对虫  b[i]:第i个月出生的卵的数量 
    int x, y, z;
    cin >> x >> y >> z;
    for(int i = 1; i <= x; i++)//前x个月只有第一对幼年虫 
    {
        a[i] = 1;
        b[i] = 0;
    }
    for(int i = x + 1; i <= z + 1; i++)//求第z个月后，即第z+1个月 
    {
        b[i] = a[i-x]*y; 
        a[i] = a[i-1]+b[i-2];
    }
    cout << a[z+1] << endl;
    return 0;
}

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n][n];
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"Transposed 2D array:"<<endl;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cout<<arr[j][i]<<" ";
//         }
//         cout<<endl;
//     }
//     }
#include <iostream>
using namespace std;

// int main() {
// 	// your code goes here
// 	double accept;
// 	cin>>accept;
// 	double balance;
// 	cin>>balance;
// 	double newbalance;
// 	if((accept/5)==0)
// 	{
// 	    if(accept<balance)
// 	    {
// 	      newbalance=balance-accept-0.50; 
// 	      cout<<newbalance<<endl;
// 	    }
// 	    else
// 	    {
// 	        cout<<balance<<endl;
// 	    }
// 	}
//       else
// 	    {
// 	        cout<<balance<<endl;
// 	    }
// 	return 0;
// }
int main()
{int x,y;
cin>>x;
cin>>y;
if(x>y||x%5!=0)
cout<<y;
else
cout<<y-x-0.50;
return 0;
}
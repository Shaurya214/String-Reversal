#include<iostream>
#include<string>
using namespace std;
int main()
{
string str;
cout<<"Enter string:"<<endl;
getline(cin,str);
int n=str.length();
int left=0;
int right=n-1;
while(left<right)
{
    char temp=str[left];
    str[left]=str[right];
    str[right]=temp;
    left++;
    right--;
}
cout<<"The reversed string is: "<<str<<endl;
return 0;
}

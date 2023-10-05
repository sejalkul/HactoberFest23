#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string toLower(string &str){
    for(int i=0;i<str.length();i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
    }
    return str;
}
int main()
{
    string str="nAman";
    toLower(str);
    string str2;
    int j=str.length()-1;
    //reversing the str2
  
   for(int i=0;i<str.length();i++){
       str2.push_back(str[j]);
       j--;
   }
   cout<<str2<<endl;
    if(str==str2){
        cout<<"palimdrome";
    }
    else{
        cout<<"not palindrome";
    }
    return 0;
}

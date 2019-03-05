#include <bits/stdc++.h> 
using namespace std;
string K_String(string s, int k) 
{  
    int n = s.size(); 
    int fre[26] = { 0 };
    for (int i=0;i<n;i++) 
        fre[s[i] - 'a']++;
    string str = "";
    for (int i=0;i<26;i++)
    { 
        if (fre[i] % k == 0)
        { 
            int x = fre[i] / k;
            while (x--)
            { 
               str+=(char)(i+'a'); 
           } 
       } 
          else
           { 
              return "-1"; 
           } 
      } 
  
    return str; 
} 
int main() 
{ 
    string s="aabb"; 
    int k = 2;
    cout<<K_String(s,k); 
    return 0; 
} 

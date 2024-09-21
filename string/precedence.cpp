#include<bits/stdc++.h> 
#include <iostream>
using namespace std; 


int precedence(char m) 
{ 
  if(m == '^') 
  return 3; 
  else if(m == '*' || m == '/') 
  return 2; 
  else if(m == '+' || m == '-') 
  return 1; 
} 
void infix_to_postfix(string t) 
{ 
  stack<char> s;
  int l = t.length(); 
  string ans; 
  for(int i = 0; i < l; i++) 
  { 
      //for alphabets from string - concate
    if((t[i] >= 'a' && t[i] <= 'z') || (t[i] >= 'A' && t[i] <= 'Z')) 
        ans+=t[i]; 
//push 
    else if(t[i] == '(') 
        s.push('('); 
       //pop 
    else if(t[i] == ')') 
    { 
      while(s.top() != '(') 
      { 
        char c = s.top(); 
        ans += c;
        s.pop(); 
           
      } 
      if(s.top() == '(') 
      { 
        char c = s.top(); 
        s.pop(); 
      } 
    } 
    else{ 
      while(s.empty()==false && precedence(t[i]) <= precedence(s.top())) 
      { 
        char c = s.top(); 
        ans += c; 
        s.pop(); 
      
      } 
      s.push(t[i]); 
    } 

  } 
  
  while(s.empty() == false) 
  { 
    char c = s.top(); 
    ans += c; 
    s.pop(); 
    
  } 
  
  cout << ans << endl; 
}

int main() 
{ 
  string s ="a+b+c"; 
  infix_to_postfix(s); 
  return 0; 
}

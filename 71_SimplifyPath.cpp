#include <iostream>
#include <bits/stdc++.h>
#include<string>
using namespace std;

    string simplifyPath(string path) {
        stack<string> st;
        istringstream ss(path);
        string paths;
        

        while (getline(ss, paths, '/')) {
            if(paths=="" || paths==".")
            continue;
            if(paths!="..")
            st.push(paths);
            else if(!st.empty()){
                st.pop();
            }
        }
       if(st.empty())
       return "/";

        string a = "";

        while (!(st.empty())) {
            a = "/" + st.top() + a;
            st.pop();
        }
        return a;
        }
    

        


int main()
{
    string s = "/home/user/Documents/../Pictures/homee/.../";
    cout<<simplifyPath(s);
}
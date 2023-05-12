#include<iostream>
#include<stack>
using namespace std;
int main(){
    string a="namtab";
    stack<char> ch;
    for(int i=0;i<a.length();i++){
        char c=a[i];
        ch.push(c);
        
    


    }
    string ans=" ";
    while(!ch.empty()){
        char c=ch.top();
        ans.push_back(c);
        ch.pop();



    }
    cout<<"answer is"<<ans<<endl;
    return 0;

}
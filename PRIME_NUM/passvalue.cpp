#include<bits/stdc++.h>
using namespace std;

void pass_value(string s){
    s[0] = 'M' ;
    cout << s << endl; // show fake
}

void pass_by_refrence(string &s){ // totly hide oringinal also change 
    s[0] = 'M';
    cout << s << endl;
}
int main(){
    string s = "Sonu"; // hiding original 
    pass_value(s);
    pass_by_refrence(s);
    cout << s ;
}
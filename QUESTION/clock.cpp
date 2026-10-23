#include<bits/stdc++.h>
using namespace std;

string timeconversion(string S){
    string shift = S.substr(8, 2);
    string hour = S.substr(0, 2);

    if(shift == "AM" && hour == "12"){
        S.replace(0, 2, "00");
    }else{
        if(hour != "12" ){
        int h = stoi(hour);
        h += 12;

            if(h < 10){
                S.replace(0, 2, "0" + to_string(h));
            } else{
                S.replace(0, 2, to_string(h));
            }
        }
        S.erase(8, 2);    
    }
    return S;
}

int main(){
    string S = "09:05:45AM";
    string result = timeconversion(S);
    cout << result << endl;

    return 0;
}
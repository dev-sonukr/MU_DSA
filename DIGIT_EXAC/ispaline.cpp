
bool isPalindrome(int n){
    int org = abs(n);
    int rev = ReverseDigits(org);
    if(org==rev){
        return true;
    }
    return false;
}


int main(){
    int n=-12321;
    cout<<boolalpha<<isPalindrome(n);
}
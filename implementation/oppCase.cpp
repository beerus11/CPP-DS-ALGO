#include<iostream>
using namespace std;

void convertOpposite(string &str){
    int ln = str.length();
    for(int i=0;i<ln;i++){
        if (str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
        else if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
    }
}

//Driver Program
 int main(){
    string str = "GeEkSfOrGeEkS";
    // Calling the Function
    convertOpposite(str);  
    cout << str;
    return 0;
 }
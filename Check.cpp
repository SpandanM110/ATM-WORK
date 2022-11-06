#include <iostream>
#include<cstring>

/// To check the number of a currency is right or fake


using namespace std;
int check(string s){
     int k=1;
    if((s.size())!= 9) k=0;
    else{
    for(int i=0;i<(s.size());i++){
        if((i==0) && ((s[i]>57) || (s[i]<48))) { k=0; break; }   // non - numeric digit
        else if ((i==1) || (i==2)){
            if((s[i]>='A') && (s[i]<='Z')) ;
            else {
                //2nd and 3rd character if not capital alphabet
                k=0;
                break;
            }
        }
        else {
            if((s[i]<=57) && (s[i]>=48)) ;
            else {
                //if we encounter any other character other than digit after 3rd character.
                k=0;
                break;
            }
        }
    }
    }
    
    return k;
}
int main()
{
    string s;
    cin>>s;
   
    
    if((check(s))==1) cout<<"Valid";
    else cout<<"Invalid";
    
    
    return 0;
}

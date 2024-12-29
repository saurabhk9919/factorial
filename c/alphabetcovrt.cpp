#include<iostream>
using namespace std;
char convert(char alfa){
    char res=alfa-'a'+'A';
    return res;
}
int main(){
    char alfa;
    cin>>alfa;
    cout<<convert(alfa);
    }

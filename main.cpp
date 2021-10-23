#include <iostream>
#include <list>
#include<string>

using namespace std;

int main(int argc, char * argv[]){

    string w1=argv[1];
    string w2=argv[2];
    if(w1.size()==w2.size()){
        list<char> l1,l2;
        for(char & c:w1){
            l1.push_back(c);
        }
        for(char & c:w2){
            l2.push_back(c);
        }
        l1.sort();
        l2.sort();
        if(l1==l2){
            cout<<"VERDADEIRO"<<endl;
        }
        else{
            cout<<"FALSO"<<endl;
        }

}else
    {
        cout<<"FALSO"<<endl;
    }








}
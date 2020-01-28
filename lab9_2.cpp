#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ifstream source;
    source.open("D:\\lab9-2562-2-upup2544\\cheerbook.txt");
    string text,all,n="\n";
    while(getline(source,text)){
        cout<<text<<"\n";
        all+=text+n;
    }
    ofstream dest("D:\\lab9-2562-2-upup2544\\cheerbook_copy.txt");
    dest << "-------------------- SOTUS ---------------------"<<"\n";
    dest<<all;
    dest << "-------------------- SOTUS ---------------------";
    dest.close();
    }

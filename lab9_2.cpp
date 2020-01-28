#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ifstream source("D:\\lab9-2562-2-upup2544\\cheerbook.txt");
    string text;
    ofstream dest("D:\\lab9-2562-2-upup2544\\cheerbook_copy.txt");
    dest << "-------------------- SOTUS ---------------------"<<"\n";
    while(getline(source,text)){
        dest<<text<<"\n";
    }
    dest << "-------------------- SOTUS ---------------------"<<"\n";
    dest.close();
    
   
 }

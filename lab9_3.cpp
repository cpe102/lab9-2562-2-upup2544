#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<cstdlib>
using namespace std;

int main(){
    ifstream source;
    source.open("D:\\lab9-2562-2-upup2544\\score.txt");
    string text;
    double all,alltwo;
    int num;
    while(getline(source,text)){
        cout<<text<<"\n";
        all+=atof(text.c_str());
        alltwo+=pow(atof(text.c_str()),2);
        num++;    
    }
    cout << "Number of data = "<<num<<"\n";
    double mean=all/num,x=alltwo/num-pow(mean,2);
    cout << "Mean = "<<mean<<"\n";
    cout << "Standard deviation = "<<pow(x,0.5);
    }
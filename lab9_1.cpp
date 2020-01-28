#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int num=1;
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<"\n";
	do{
		cout << "Student ["<<num<<"]:";
		cin >> grade; //The loop must be terminated when grade = '0'
		num++;
		if(grade=='0'){break;}
		else{if(grade=='A'){ 
			count[0]++;
		}else{ if(grade=='B'){
			count[1]++;
		}else{ if(grade=='C'){
			count[2]++;
		}else{if(grade=='D'){
			count[3]++;
		}else{if(grade=='F'){
			count[4]++;
		}else{
			cout<<"Wrong input. Please input again."<<"\n";
			num--;
		}}}}}}
	}while(true);
	
	
	cout << "In total "<<num-2<<" students."<<"\n";
	cout << "A = " << count[0] <<",";
	cout << "B = " << count[1] <<",";
	cout << "C = " << count[2] <<",";	
	cout << "D = " << count[3] <<",";	
	cout << "F = " << count[4] <<",";		
	//	and so on ... for grade = C, D, F	
	
	
	return 0;
}

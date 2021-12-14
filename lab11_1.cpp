#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int numIndex = 1;
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	do{
		cout << "Student [" << numIndex << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == '0') break;
		if(grade == 'A'){
			count[0]++;
			numIndex++;
		} // if grade is A
		else if(grade == 'B'){
			count[1]++;
			numIndex++;
		}
		else if(grade == 'C'){
			count[2]++;
			numIndex++;
		}
		else if(grade == 'D'){
			count[3]++;
			numIndex++;
		}
		else if(grade == 'F'){
			count[4]++;
			numIndex++;
		}
		else // grade is wrong input
			cout << "Wrong input. Please input again.\n";
	}while(true);
	
	
	cout << "In total " << numIndex-1 << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	//	and so on ... for grade = C, D, F	
	
	return 0;
}

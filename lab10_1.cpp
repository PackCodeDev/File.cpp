#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	char grade;
	int total = 1;

	cout << "Please input grade of each student (A-F) or input 0 to exit."<< "\n";
	
	do{
		cout << "Student [" << total << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == '0'){
			break;
		} // if grade is A
			//Do something
		else if(grade == 'A') {
			count [0]++;
			total++;
		}
		else if(grade == 'B') {
			count [1]++;
			total++;
		}
		else if(grade == 'C') {
			count [2]++;
			total++;
		}
		else if(grade == 'D') {
			count [3]++;
			total++;
		}else if(grade == 'F') {
			count [4]++;
			total++;
		}else{ 
			cout << "Wrong input. Please input again.\n";
		} 
	}while(true);
	
	
	cout << "In total " << total - 1 << " students."<< "\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] << ", ";
    cout << "D = " << count[3] << ", ";
    cout << "F = " << count[4] << "\n";
	
	return 0;
}

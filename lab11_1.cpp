#include<iostream>
using namespace std;

int main(){
	int count[5] = {'A','B','C','D','F'}; // initialize all element = 0
    int gradeA=0,gradeB=0,gradeC=0,gradeD=0,gradeF=0,N;
    int i = 0;
    char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit.";
    cin >> grade;
	do{
		cout << "Student [" << i+1 << "]: ";
		cin >> N;
		if(grade = 65)
		gradeA++;
		else if(grade = 66)
		gradeB++;
        else if(grade = 67)
        gradeC++;
        else if(grade = 68)
        gradeD++;
        else if(grade = 69)
        gradeF++;
		else
        cout << "Wrong input. Please input again.";
		i++;
        if(grade = 0) break;
	}while(i < grade);
	
	
	cout << "In total " << N << " students.";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
    cout << "C = " << count[2] <<", ";
    cout << "D = " << count[3] <<", ";
    cout << "F = " << count[4] <<", ";	
	return 0;
}
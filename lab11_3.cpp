#include<iostream>
#include<fstream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
    int N = 0;
    double mean,num,sd = 0;
    double sum = 0;
    string score;
    ifstream source;
    source.open("score.txt");
    while(getline(source,score)){
        num += atof(score.c_str());
        sum += pow(atof(score.c_str()),2);
        N++; 
    }
    mean = num/N;
    sd = sqrt((sum/N)-pow(mean,2));
    cout << "Number of data = "<< N << endl;
    cout << setprecision(3);
    cout << "Mean = "<< mean << endl;
    cout << "Standard deviation = "<< sd;
    return 0;
}
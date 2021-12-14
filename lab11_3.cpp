#include<iostream>
#include<fstream>
#include<cmath>
#include<string>
#include <iomanip>

using namespace std;

int main(){
    int numLine = 0;
    double mean, stdDev, sum = 0, sum2 = 0;
    string textline;
    ifstream source;
    source.open("score.txt");
    while(getline(source, textline)){
        sum += atof(textline.c_str());
        sum2 += atof(textline.c_str())*atof(textline.c_str());;
		numLine++;
	}
    mean = sum/numLine;
    stdDev = sqrt(((1.0/numLine)*(sum2))-(mean*mean));
    source.close();
    cout << "Number of data = " << numLine << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = "<< stdDev;
    return 0;
}


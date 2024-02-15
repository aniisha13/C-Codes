#include<iostream>
//file to include vector array
#include<vector> 
using namespace std;

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> output;
        double kelvin = celsius+ 273.15;
        double Fahrenheit = (celsius*1.8) + 32;

        //Add elements to the vector using push_back()
        output.push_back(kelvin);
        output.push_back(Fahrenheit);
        return output;
    }
};

int main()
{
	double celsius;
	cout<<"Enter temperature in Celsius: ";
    cin>>celsius;
	Solution s;
	s.convertTemperature(celsius);
	vector<double> result = s.convertTemperature(celsius);
	cout<<"Temperature in Kelvin: "<<result[0]<<endl;
    cout<<"Temperature in Fahrenheit: "<<result[1]<<endl;
	return 0;
}
// Define the class Observation which will help record observational data from a scientific outpost in Antarctica. The class should have a constructor that accepts parameters for date, temperature, elevation, and penguins. There should also be an attribute for precipitation. Since Antarctica is a desert, precipitation should default to 0.
date- string with the date of the observation, e.g. "October 26, 2019"
temperature - double with the temperature in Celsius, e.g. -47
elevation - double with elevation in meters, e.g. 329.4
penguins - integer representing the number of penguins observed, e.g. 3
precipitation- double with precipitation in centimeters, defaults to 0
// Expected Result:
Today is October 26, 2019.
Temperature: -47
Elevation: 329.4
3 penguins observed with 0 precipitation.
// DO NOT CHANGE the existing code in main.
Observation o("October 26, 2019", -47, 329.4, 3);
cout << "Today is " << o.date << "." << endl;
cout << "Temperature: " << o.temperature << endl;
cout << "Elevation: " << o.elevation << endl;
cout << o.penguins << " penguins observed with " << o.precipitation << " precipitation." << endl;

// Current Code
#include <iostream>
using namespace std;

//add class definitions below this line
    

  
//add class definitions above this line

int main() {

  Observation o("October 26, 2019", -47, 329.4, 3);
  cout << "Today is " << o.date << "." << endl;
  cout << "Temperature: " << o.temperature << endl;
  cout << "Elevation: " << o.elevation << endl;
  cout << o.penguins << " penguins observed with " << o.precipitation << " precipitation." << endl;
  
  return 0;
  
}

// Solved Code
#include <iostream>
using namespace std;

//add class definitions below this line
    
class Observation {
public:
    string date;
    double temperature;
    double elevation;
    int penguins;
    double precipitation;

    // Constructor with parameters
    Observation(string observationDate, double temp, double elev, int penguinCount)
        : date(observationDate), temperature(temp), elevation(elev), penguins(penguinCount), precipitation(0.0) {}
};
  
//add class definitions above this line

int main() {

  Observation o("October 26, 2019", -47, 329.4, 3);
  cout << "Today is " << o.date << "." << endl;
  cout << "Temperature: " << o.temperature << endl;
  cout << "Elevation: " << o.elevation << endl;
  cout << o.penguins << " penguins observed with " << o.precipitation << " precipitation." << endl;
  
  return 0;
  
}

// Create the Watch class following the conventions of encapsulation.
// Given Code
#include <iostream>
using namespace std;

//add class definitions below this line



//add class definitions above this line


int main() {
  
  //DO NOT EDIT CODE BELOW THIS LINE

  Watch my_watch("Omega", "Speedmaster", 42, 50, "steel");
  cout << my_watch.GetManufacturer() << endl;
  cout << my_watch.GetModel() << endl;
  cout << my_watch.GetDiameter() << endl;
  cout << my_watch.GetWaterResistance() << endl;
  cout << my_watch.GetMaterial() << endl;
  my_watch.SetManufacturer("Rolex");
  my_watch.SetModel("Explorer");
  my_watch.SetDiameter(36);
  my_watch.SetWaterResistance(60);
  my_watch.SetMaterial("gold");
  my_watch.Summary();

  //DO NOT EDIT CODE ABOVE THIS LINE
  
  return 0;
  
}
// Requirements
Create a Watch class with the following attributes:
manufacturer - string that represents who makes the watch
model - string that represents the specific watch
diameter - integer that represents (in millimeters) the diameter of the watch
water_resistance - integer that represents (in meters) the water resistance of the watch
material - string that represents what the watch is made of
Include all necessary getter and setter functions for each attribute (10 total)
Create a class function called Summary that prints all of the attributes of the class (see expected output below)
Include BOTH the public as well as the private access modifiers in your class
// DO NOT edit the specified code in main or you might not receive credit for your work!
// Expected Output
Omega
Speedmaster
42
50
steel
Manufacturer: Rolex
Model: Explorer
Diameter: 36 mm
Water Resistance: 60 m
Material: gold

// Solved Code
#include <iostream>
using namespace std;

//add class definitions below this line

class Watch {
private:
    string manufacturer;
    string model;
    int diameter;
    int water_resistance;
    string material;

public:
    Watch(string man, string mod, int dia, int waterRes, string mat) {
        manufacturer = man;
        model = mod;
        diameter = dia;
        water_resistance = waterRes;
        material = mat;
    }

    string GetManufacturer() const {
        return manufacturer;
    }

    string GetModel() const {
        return model;
    }

    int GetDiameter() const {
        return diameter;
    }

    int GetWaterResistance() const {
        return water_resistance;
    }

    string GetMaterial() const {
        return material;
    }

    void SetManufacturer(string man) {
        manufacturer = man;
    }

    void SetModel(string mod) {
        model = mod;
    }

    void SetDiameter(int dia) {
        diameter = dia;
    }

    void SetWaterResistance(int waterRes) {
        water_resistance = waterRes;
    }

    void SetMaterial(string mat) {
        material = mat;
    }

    void Summary() const {
        cout << "Manufacturer: " << manufacturer << endl;
        cout << "Model: " << model << endl;
        cout << "Diameter: " << diameter << " mm" << endl;
        cout << "Water Resistance: " << water_resistance << " m" << endl;
        cout << "Material: " << material << endl;
    }
};

//add class definitions above this line


int main() {
  
  //DO NOT EDIT CODE BELOW THIS LINE

  Watch my_watch("Omega", "Speedmaster", 42, 50, "steel");
  cout << my_watch.GetManufacturer() << endl;
  cout << my_watch.GetModel() << endl;
  cout << my_watch.GetDiameter() << endl;
  cout << my_watch.GetWaterResistance() << endl;
  cout << my_watch.GetMaterial() << endl;
  my_watch.SetManufacturer("Rolex");
  my_watch.SetModel("Explorer");
  my_watch.SetDiameter(36);
  my_watch.SetWaterResistance(60);
  my_watch.SetMaterial("gold");
  my_watch.Summary();

  //DO NOT EDIT CODE ABOVE THIS LINE
  
  return 0;
  
}

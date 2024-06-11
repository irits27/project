#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <string>
using namespace std;

void addCar(string*& licensePlates, string*& brands, string*& models, int& size);
void deleteCar(string*& licensePlates, string*& brands, string*& models, int& size, const string& licensePlate);
void editCar(string* licensePlates, string* brands, string* models, int size, const string& licensePlate);
void searchCars(const string* licensePlates, const string* brands, const string* models, int size, const string& brand);
void displayCars(const string* licensePlates, const string* brands, const string* models, int size);
void saveCars(const string* licensePlates, const string* brands, const string* models, int size, const string& filename);
void loadCars(string*& licensePlates, string*& brands, string*& models, int& size, const string& filename);

#endif
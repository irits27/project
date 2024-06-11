#include <iostream>
#include <string>
#include "function.h"
#include <fstream>
using namespace std;

void addCar(string*& licensePlates, string*& brands, string*& models, int& size) {
    string newLicensePlate, newBrand, newModel;
    cout << "Enter license plate: ";
    cin >> newLicensePlate;
    cout << "Enter Brand: ";
    cin >> newBrand;
    cout << "Enter Model: ";
    cin >> newModel;

    string* tempLicensePlate = new string[size + 1];
    string* tempBrand = new string[size + 1];
    string* tempModels = new string[size + 1];

    for (int i = 0; i < size; i++) {
        tempLicensePlate[i] = licensePlates[i];
        tempBrand[i] = brands[i];
        tempModels[i] = models[i];
    }

    tempLicensePlate[size] = newLicensePlate;
    tempBrand[size] = newBrand;
    tempModels[size] = newModel;

    delete[] licensePlates;
    delete[] brands;
    delete[] models;

    licensePlates = tempLicensePlate;
    brands = tempBrand;
    models = tempModels;
    ++size;
}

void deleteCar(string*& licensePlates, string*& brands, string*& models, int& size, const string& targetLicensePlate) {
    int deleteIndex = -1;
    for (int i = 0; i < size; i++) {
        if (licensePlates[i] == targetLicensePlate) {
            deleteIndex = i;
            break;
        }
    }

    if (deleteIndex == -1) {
        cout << "Car is not found" << endl;
        return;
    }

    string* tempLicensePlate = new string[size - 1];
    string* tempBrand = new string[size - 1];
    string* tempModels = new string[size - 1];
    for (int i = 0, j = 0; i < size; ++i) {
        if (i != deleteIndex) {
            tempLicensePlate[j] = licensePlates[i];
            tempBrand[j] = brands[i];
            tempModels[j] = models[i];
            ++j;
        }
    }

    delete[] licensePlates;
    delete[] brands;
    delete[] models;

    licensePlates = tempLicensePlate;
    brands = tempBrand;
    models = tempModels;
    --size;
}
void editCar(string* licensePlates, string* brands, string* models, int size, const string& licensePlate) {
    for (int i = 0; i < size; ++i) {
        if (licensePlates[i] == licensePlate) {
            cout << "Enter new Brand: ";
            cin >> brands[i];
            cout << "Enter new Model: ";
            cin >> models[i];
            return;
        }
    }
    cout << "Car not found.\n";
}
void searchCar(string* licenseplates, string* brands, string* models, int size, const string& brand) {
    for (int i = 0; i < size; i++) {
        if (brands[i] == brand) {
            cout << "License plate: " << licenseplates[i] << "Model: " << models << endl;
        }
    }
}
void displayCars(const string* licensePlates, const string* brands, const string* models, int size) {
    for (int i= 0; i < size; i++) {
        cout << "License plate: " << licensePlates[i] << "Brands: " << brands[i] << "Model: " << models[i]<<endl;
    }
}
void saveCars(const string* licensePlates, const string* brands, const string* models, int size, const string& filename) {

}


int main() {
    string* licensePlates = nullptr;
    string* brands = nullptr;
    string* models = nullptr;
    int size = 0;

    int choice;
    string licensePlate, brand, model;


    FILE* file;
    file = fopen("Avtostoyanka.txt", "w");
    if (file == NULL) {
        cout << "You can't made this file or open it.\n";
    }

 
}

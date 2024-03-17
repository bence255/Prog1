#include <iostream>
using namespace std;

int main(){

    cout << "Specify the search criteria with numbers" << endl;
    cout << "1 Model" << endl;
    cout << "2 Manufacturer" << endl;
    cout << "3 Color" << endl;
    cout << "4 License plate" << endl;
    cout << "5 Year" << endl;
    cout << "6 Maximum km traveled" << endl;
    cout << "7 Maximum price (USD)" << endl;
    
    int criteria;
    string word;
    int num;
    cin >> criteria;
    cout << endl;
    if (criteria < 1 or criteria > 7){
        cout << "Invalid number" << endl;
    } else if (criteria < 5){
        cout << "Specify the search word" << endl;
        cin >> word;
        cout << endl;
    } else {
        cout << "Specify the search number" << endl;
        cin >> num;
        cout << endl;
    }

    struct car{
        string model;
        string manufacturer;
        string color;
        string license_plate;
        int year;
        int km;
        int price;
    };

    car records[10]={{"Accord", "Honda", "silver", "XYZ1234", 2018, 45000, 15000},
        {"Camry", "Toyota", "black", "ABC5678", 2017, 55000, 16000},
        {"Focus", "Ford", "blue", "DEF9012", 2016, 65000, 12000},
        {"Civic", "Honda", "red", "GHI3456", 2019, 30000, 18000},
        {"Corolla", "Toyota", "white", "JKL7890", 2015, 70000, 13000},
        {"Sonata", "Hyundai", "grey", "MNO123", 2017, 48000, 14000},
        {"Fusion", "Ford", "green", "PQR456", 2018, 40000, 17000},
        {"Altima", "Nissan", "silver", "STU789", 2016, 60000, 14000},
        {"Malibu", "Chevrolet", "black", "VWX234", 2017, 52000, 15000},
        {"Elantra", "Hyundai", "blue", "YZA567", 2019, 35000, 16000}};

    bool found=false;
    for (int i=0;i<10;i++){
        bool match=false;
        if (criteria == 1 and records[i].model == word){
            match=true;
        } else if (criteria == 2 and records[i].manufacturer == word){
            match=true;
        } else if (criteria == 3 and records[i].color == word){
            match=true;
        } else if (criteria == 4 and records[i].license_plate == word){
            match=true;
        } else if (criteria == 5 and records[i].year == num){
            match=true;
        } else if (criteria == 6 and records[i].km <= num){
            match=true;
        } else if (criteria == 7 and records[i].price <= num){
            match=true;
        }
        if (match){
            found=true;
            cout << "Model: " << records[i].model << endl;
            cout << "Manufacturer: " << records[i].manufacturer << endl;
            cout << "Color: " << records[i].color << endl;
            cout << "License plate: " << records[i].license_plate << endl;
            cout << "Year: " << records[i].year << endl;
            cout << "Traveled: " << records[i].km << " km" << endl;
            cout << "Price: " << records[i].price << " USD" << endl << endl;
        }
    }
    if (!found){
        cout << "No record found" << endl;
    }
    return 0;
}

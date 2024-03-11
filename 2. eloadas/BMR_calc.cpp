#include <iostream>
using namespace std;

int BMR(int weight, int height, int age, bool male){
    if (male){
        return 66.5 + 13.75 * weight + 5 * height - 6.75 * age;
    }
    else{
        return 655.1 + 9.56 * weight + 1.85 * height - 4.68 * age;
    }
}   
int main(){
    struct person {
        int weight;
        int height;
        int age;
        bool male;
    };

    person p1;
    person p2;
    p1.weight = 81;
    p1.height = 159;
    p1.age = 45;
    p1.male = true;
    p2.weight = 59;
    p2.height = 178;
    p2.age = 23;
    p2.male = false;
    
    cout << "First BMR is " << BMR(p1.weight, p1.height, p1.age, p1.male) << " kcal." << endl;
    cout << "Second BMR is " << BMR(p2.weight, p2.height, p2.age, p2.male) << " kcal." << endl;

    return 0;
}

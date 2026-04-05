#include <iostream>
using namespace std;

int main() {
    double weight, height;
    cout << "Enter your weight(kg) :  ";
    cin >> weight;
    while (weight <= 0) {
        cout << "Invalid Weight." << endl;
        cout << "Please Enter your actual weight: ";
        cin >> weight;
    }
    cout << "Your Weight is " << weight << "Kg" << endl;

    cout << "Enter your height (m) : ";
    cin >> height;
    while(height <= 0) {
        cout << "Invalid height. " << endl;
        cout << "Please Enter your actual height now: ";
        cin >> height;
    }
    cout << "Your height is " << height << "m" << endl;
    cout << "*************** Calculating BMI ****************" << endl << endl;
    const double BMI = weight / (height * height);
    cout << "Your Body Mass Index(BMI) is " << BMI << endl;

    if (BMI < 18.5) {
        cout << " CATEGORY: Underweight." << endl;
        cout <<
                "Increase your calorie intake with nutritious foods like nuts, eggs, and whole grains. Consider seeing a doctor or nutritionist."
                << endl;
    } else if (BMI < 25.0) {
        cout << " CATEGORY: Normal Weight. " << endl;
        cout <<
                "Great job! Maintain your weight by staying active, eating balanced meals, and drinking enough water daily."
                << endl;
    } else if (BMI < 30.0) {
        cout << " CATEGORY: Overweight. " << endl;
        cout <<
                "Try to exercise at least 30 minutes a day and reduce intake of processed foods, sugar, and saturated fats."
                << endl;
    } else{
        cout << " CATEGORY: Obese!!. " << endl;
        cout <<
                "It is strongly advised to consult a doctor or dietitian. Focus on gradual lifestyle changes; small steps lead to big results."
                << endl;
    }
    return 0;
}

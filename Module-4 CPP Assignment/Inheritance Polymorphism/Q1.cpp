#include <iostream>
using namespace std;

// Base class
class Cricketer {
protected:
    string name;
    int matches;

public:
    void inputCricketerData() {
        cout << "Enter Cricketer's name: ";
        getline(cin, name);
        cout << "Enter number of matches: ";
        cin >> matches;
    }
};

// Derived class
class Batsman : public Cricketer {
private:
    int totalRuns;        
    float averageRuns;     
    int bestPerformance;   

public:
    void inputData() {
        inputCricketerData(); // Get cricketer details from base class
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter best performance (runs in a single match): ";
        cin >> bestPerformance;
        calculateAverageRuns(); // Calculate average runs after input
    }

    // Function to calculate average runs
    void calculateAverageRuns() {
        if (matches > 0) {
            averageRuns = static_cast<float>(totalRuns) / matches;
        } else {
            averageRuns = 0.0; 
        }
    }

    void displayData() {
        cout << "\nName: " << name << endl;
        cout << "Number of matches: " << matches << endl;
        cout << "Total runs: " << totalRuns << endl;
        cout << "Average runs: " << averageRuns << endl;
        cout << "Best performance: " << bestPerformance << endl;
    }
};

int main() {
    Batsman b;
    b.inputData();
    b.displayData();
    return 0;
}

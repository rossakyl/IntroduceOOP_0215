#include <iostream>
using namespace std;

class planet
{
private:
    float gravitasi;

public:
    string nama;
    float diameter;

    void displaydata()
    {
        cout << "gravitasiku " << gravitasi << endl;
    }
    void inputdata()
    {
        cout << "input nama : ";
        cin >> nama;
        cout << "ukuranku : ";
        cin >> diameter;
        cout << "gravitasiku : ";
        cin >> gravitasi;
    }
};
int main()
{
    planet venus;
    venus.inputdata();
    cout << "namanya adalah " << venus.nama << endl;
    cout << "diameter adalah " << venus.diameter << endl;
    venus.displaydata();
}
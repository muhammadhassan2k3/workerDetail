#include <iostream>
using namespace std;
struct worker_detail {
    string name;
    int id;
    string job;
    float salary;
    string detail;
};
int main() {
    int j;

    cout << "how many worker work in company " << endl;
    cin >> j;

    worker_detail w[j], s;
    cout << endl;

    cout << "Add Worker Detail " << endl;
    for (int i = 0; i < j; i++)
    {
        cout << "enter worker Name ";
        cin >> w[i].name;

        cout << "enter worker ID ";
        cin >> w[i].id;

        cout << "enter worker Job ";
        cin >> w[i].job;

        cout << "enter worker Salary ";
        cin >> w[i].salary;
    }
    cout << "---------------------------------" << endl;
    cout << "find the worker detail " << endl;
    cout << "---------------------------------" << endl;

    cout << "enter the worker name " << endl;
    cin >> s.detail;

    for (int i = 0; i < j; i++) {

        if (s.detail == w[i].name) {

            cout << "name of worker: " << w[i].name << endl;
            cout << "ID of worker: " << w[i].id << endl;
            cout << "Job of worker: " << w[i].job << endl;
            cout << "salary of worker: " << w[i].salary << endl;
        }
    }
}
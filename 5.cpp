#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct process {
    int pid;  
    int at;  
    int bt;   
    int ct;  
    int tat;  
    int wt;   
};
int main() {
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    vector<process> p(n);

    for (int i = 0; i < n; i++) {
        p[i].pid = i + 1;
        cout << "Enter the Arrival time for Process " << p[i].pid << ": ";
        cin >> p[i].at;
        cout << "Enter the Burst time for Process " << p[i].pid << ": ";
        cin >> p[i].bt;
    }

    int current_time = 0;
    for (int i = 0; i < n; i++) {
        if (current_time < p[i].at) {
            current_time = p[i].at; 
        }
        p[i].ct = current_time + p[i].bt; 
        p[i].tat = p[i].ct - p[i].at;     
        p[i].wt = p[i].tat - p[i].bt;     
        current_time = p[i].ct;          
    }

    cout << "\nProcess\tAT\tBT\tCT\tTAT\tWT\n";
    for (int i = 0; i < n; i++) {
        cout << "P" << p[i].pid << "\t"
             << p[i].at << "\t"
             << p[i].bt << "\t"
             << p[i].ct << "\t"
             << p[i].tat << "\t"
             << p[i].wt << "\n";
    }
    return 0;
}

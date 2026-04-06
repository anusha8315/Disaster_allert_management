#include <iostream>
#include <queue>
using namespace std;

// Structure to store disaster details
struct Disaster {
    int severity;
    string location;

    // Comparator for priority queue
    bool operator<(const Disaster& d) const {
        return severity < d.severity;
    }
};

int main() {
    priority_queue<Disaster> pq;

    int n;
    cout << "Enter number of disaster locations: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        Disaster d;
        cout << "Enter location: ";
        cin >> d.location;
        cout << "Enter severity (1-10): ";
        cin >> d.severity;

        pq.push(d);
    }

    cout << "\nResource Allocation Order:\n";

    while(!pq.empty()) {
        cout << pq.top().location 
             << " (Severity: " << pq.top().severity << ")" << endl;
        pq.pop();
    }

    return 0;
}

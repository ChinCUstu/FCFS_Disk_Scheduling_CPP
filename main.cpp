#include <iostream>
#include <vector>

using namespace std;

void fcfsDiskScheduling(const vector<int> &requests, int headPosition) {
    int totalSeekTime = 0;
    for (int request: requests) {
        int seekDistance = abs(request - headPosition);
        totalSeekTime += seekDistance;
        headPosition = request;
    }
    cout << "Total seek time using FCFS: " << totalSeekTime << endl;
}

int main() {
    vector<int> requests = {98, 183, 37, 122, 14, 124, 65, 67};
    int headPosition = 53;

    fcfsDiskScheduling(requests, headPosition);
    return 0;
}
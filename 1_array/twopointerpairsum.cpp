#include <iostream>
#include <vector>
using namespace std;

void pairsum(vector<int> *a, int k, int n) {
    int i = 0, j = n - 1;
    bool found = false;  
    while (i < j) {
        if ((*a)[i] + (*a)[j] == k) {
            cout << (*a)[i] << " " << (*a)[j] << endl;
            found = true;  
            i++; 
            j--;
        } else if ((*a)[i] + (*a)[j] > k) {
            j--;
        } else {
            i++;
        }
    }
    if (!found) {
        cout << "No pair found with sum " << k << endl;
    }
}

int main() {
    vector<int> *a = new vector<int>{1, 1,1};
    

    int n = a->size();
    int k;
    cin >> k;
    pairsum(a, k, n);
    return 0;
}

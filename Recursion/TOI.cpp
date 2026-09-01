#include <iostream>
using namespace std;

// Function to print moves and return total move count
int towerOfHanoi(int n, int from, int to, int aux) {
    if (n == 0) return 0;

    // Step 1: Move n-1 disks from 'from' rod to 'aux' rod
    int count = towerOfHanoi(n - 1, from, aux, to);

    // Step 2: Move the nth disk from 'from' rod to 'to' rod
    cout << "move disk " << n << " from rod " << from << " to rod " << to << endl;
    count++;

    // Step 3: Move n-1 disks from 'aux' rod to 'to' rod
    count += towerOfHanoi(n - 1, aux, to, from);

    return count;
}

int main() {
    int n = 3; // Number of disks
    int source = 1, destination = 3, auxiliary = 2;

    cout << "Steps to solve Tower of Hanoi with " << n << " disks:" << endl;
    int totalMoves = towerOfHanoi(n, source, destination, auxiliary);
    
    cout << "\nTotal moves required: " << totalMoves << endl;

    return 0;
}
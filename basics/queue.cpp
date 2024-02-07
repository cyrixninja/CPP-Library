// Queue Example Code in C++

#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    cout << "Front of the queue: " << q.front() << endl;
    cout << "Back of the queue: " << q.back() << endl;

    q.pop();

    cout << "Front of the queue: " << q.front() << endl;
    cout << "Back of the queue: " << q.back() << endl;

    return 0;
}

// Output
// Front of the queue: 1
// Back of the queue: 3
// Front of the queue: 2
// Back of the queue: 3
  

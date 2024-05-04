#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);

    int start, end, x, y;
    cin >> start >> end >> x >> y;

    int temp;
    if (start > end) {
        temp = start;
        start = end;
        end = temp;
    }
    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }

    int a = (start > x) ? start - x : x - start;
    int b = (end > y) ? end - y : y - end;

    int distance = (a + b) < (end - start) ? (a + b) : end - start;
    cout << distance << endl;
    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

struct Point {
    double x, y;
};

bool isInside(const vector<pair<Point, Point>>& edges, double xp, double yp) {
    int cnt = 0;

    for (const auto& edge : edges) {
        Point p1 = edge.first;
        Point p2 = edge.second;

        if ((yp < p1.y) != (yp < p2.y) && xp < p1.x + ((yp - p1.y) / (p2.y - p1.y)) * (p2.x - p1.x)) {
            cnt++;
        }
    }

    return cnt % 2 == 1;
}

int main() {
    vector<pair<Point, Point>> edges(5);

    // Get the coordinates of the pentagon vertices from the user
    cout << "Enter the coordinates of the 5 vertices of the pentagon:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Enter x" << i + 1 << ": ";
        cin >> edges[i].first.x;
        cout << "Enter y" << i + 1 << ": ";
        cin >> edges[i].first.y;
    }

    // Automatically close the pentagon by linking the last vertex to the first
    for (int i = 0; i < 4; i++) {
        edges[i].second = edges[i + 1].first;
    }
    edges[4].second = edges[0].first;

    // Get the point coordinates to check
    double xp, yp;
    cout << "Enter the x-coordinate of the point to check: ";
    cin >> xp;
    cout << "Enter the y-coordinate of the point to check: ";
    cin >> yp;

    // Check if the point is inside the pentagon
    if (isInside(edges, xp, yp)) {
        cout << "The point is inside the pentagon.\n";
    } else {
        cout << "The point is outside the pentagon.\n";
    }

    return 0;
}
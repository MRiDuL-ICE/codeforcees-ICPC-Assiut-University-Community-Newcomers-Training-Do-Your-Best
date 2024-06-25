
#include <iostream>

using namespace std;

int main() {
    int eyes, mouths, bodies;

    cin >> eyes >> mouths >> bodies;

    // Find the minimum number of each component needed for a Katryoshka
    int minEyes = min(eyes, min(mouths, bodies));
    int minMouths = min(mouths, bodies);
    int minBodies = bodies;

    // Calculate the maximum number of Katryoshkas
    int maxKatryoshkas = minEyes;

    cout << maxKatryoshkas << endl;

    return 0;
}

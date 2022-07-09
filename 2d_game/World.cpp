#include <iostream>
#include <string>

using namespace std;


class World {

    int XY[10][10] = {0};
    int P[10] = {0};

    public: World() {
     this->P[0] = 5;
     this->P[1] = 29;
     this->P[5] = 5;
    }

    void showGrid() {
        int x = sizeof(this->XY[0])/sizeof(*this->XY[0]);
        int y = sizeof(this->XY[1])/sizeof(*this->XY[1]);
        for (int i=0 ; i < x ; i++) {
            for (int k=0 ; k < y ; k++) {
                cout << " " << this->XY[i][k];
            }
            cout << "\n";
        }
    }

};

int main() {

    World world = World();
    world.showGrid();
    
    cout << "\n";
    return 0;
}
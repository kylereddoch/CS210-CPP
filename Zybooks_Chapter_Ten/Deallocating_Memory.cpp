#include <iostream>
using namespace std;

class PaintContainer {
public:
    ~PaintContainer();
    double gallonPaint;
};

PaintContainer::~PaintContainer() { // Covered in section on Destructors.
    cout << "PaintContainer deallocated." << endl;
}

int main() {
    PaintContainer* kitchenPaint;

    kitchenPaint = new PaintContainer;
    kitchenPaint->gallonPaint = 26.3;

    /* Your solution goes here  */
    delete kitchenPaint;

    return 0;
}
#include <iostream>
#include <vector>

#include <bezier/bezier.hpp>

int main() {

    std::cout << "Bezier Lib Version: v" << bezier::VERSION_MAJOR << "." << bezier::VERSION_MINOR << std::endl;

    std::vector<bezier::Node> nodes = {{0, 0}, {0, 1}, {1, 1}};

    bezier::NDCurve curve(nodes);

    for (float i = 0.0; i <= 1.1; i += 0.1) {
        bezier::Node result = curve.Evaluate(i);

        std::cout << "t: " << i;
        std::cout << ", x: " << result.x;
        std::cout << ", y: " << result.y << std::endl;
    }

    return 0;
}

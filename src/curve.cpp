#include "bezier/curve.hpp"

#include <iostream>

namespace bezier {
    NDCurve::NDCurve(std::vector<Node> nodes) {
        this->nodes = nodes;
    }

    NDCurve::~NDCurve() {}

    std::vector<Node> NDCurve::GetNodes() {
        return this->nodes;
    }
    
    void NDCurve::SetNode(std::vector<Node> nodes) {
        this->nodes = nodes;
    }

    Node NDCurve::Evaluate(float t) {
        std::vector<Node> beta = this->nodes;
        size_t length = beta.size();

        if (length == 0) {
            // err
        }
        if (length == 1) {
            return beta[0];
        }

        for (int i = 1; i < length; i++) {
            for (int j = 0; j < (length - j); j++) {
                beta[j] = beta[j] * (1 - t) + beta[j + 1] * t;
            }
        }

        return beta[0];
    }
} // namespace bezier

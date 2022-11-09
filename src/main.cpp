#include "matplotlib.h"

namespace plt = matplotlib.cpp;

int main() {
    plt::plot({1,2,3,4});
    plt::show();
}
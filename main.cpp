#include <ostream>
#include "Board.h"

using namespace bit;


int main() {
    Board b;
    b.mark<X, 1>();
    b.mark<O, 8>();
    b.mark<X, 0>();
    b.mark<X, 2>();
    std::cout << b;
    std::cout << b.hasVictory<X>();
    b.mark<X, 2>();
    std::cout << b;
    std::cout << b.hasVictory<X>();
    std::cout << b.isFull();
    b.mark<X, 2>();
    b.mark<O, 3>();
    b.mark<X, 4>();
    b.mark<X, 5>();
    b.mark<O, 6>();
    b.mark<X, 7>();
    std::cout << b;
    std::cout << b.isFull();

    std::cout << '\n';

    constexpr Alliance f = X, q = ~f;

    std::cout << AllianceToChar[~q];
    std::cout << AllianceToChar[q];
    return 0;
}

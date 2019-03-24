#include "rxcpp/rx.hpp"
#include <array>

namespace Rx {
using namespace rxcpp;
using namespace rxcpp::sources;
using namespace rxcpp::operators;
using namespace rxcpp::util;
}
using namespace Rx;


int main(int, char**) {

    std::array<int, 5> data{-2, -1, 0, 1, 2};

    auto num$ = rxcpp::observable<>::iterate(data);

    num$.subscribe(
        [](int v){
            printf("OnNext: %d\n", v);
        },
        [](){printf("OnCompleted\n");});
    

    

}
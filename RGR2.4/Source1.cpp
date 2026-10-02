#include "Header1.h"
namespace Myns {
    void foo(int x) {

        // статическая перепеная нужна, чтобы хадать первый y , а потом про него забыть
        static int y = 0;

        std::cout << y + x << std::endl;
        y = x;
        return;
    }
}
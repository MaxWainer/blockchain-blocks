#include "blockchain-blocks.h"
#include <cassert>

int main() {
    blockchain_blocks::Greeter greeter;
    assert(greeter.greeting().compare("Hello, World!") == 0);
    return 0;
}

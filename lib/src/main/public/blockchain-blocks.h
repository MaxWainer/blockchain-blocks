#ifndef BLOCKCHAIN_BLOCKS_H
#define BLOCKCHAIN_BLOCKS_H

#ifdef _WIN32
#define BLOCKCHAIN_BLOCKS_EXPORT_FUNC __declspec(dllexport)
#else
#define BLOCKCHAIN_BLOCKS_EXPORT_FUNC
#endif

#include <string>

namespace blockchain_blocks {
    class Greeter {
        public:
        std::string BLOCKCHAIN_BLOCKS_EXPORT_FUNC greeting();
    };
}

#endif

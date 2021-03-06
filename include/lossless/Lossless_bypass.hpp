//
// Created by Kai Zhao on 4/21/20.
//

#ifndef SZ_LOSSLESS_BYPASS_HPP
#define SZ_LOSSLESS_BYPASS_HPP

#include "zstd.h"
#include "def.hpp"
#include "utils/MemoryUtil.hpp"
#include "utils/FileUtil.hpp"
#include "lossless/Lossless.hpp"

namespace SZ {
    class Lossless_bypass : public concepts::LosslessInterface {

    public:

        void postcompress_data(uchar *data) {};

        void postdecompress_data(uchar *data) {};

        uchar *compress(uchar *data, size_t dataLength, size_t &outSize) {
            outSize = dataLength;
            return data;
        }

        uchar *decompress(const uchar *data, size_t &compressedSize) {
            return (uchar *) data;
        }
    };
}
#endif //SZ_LOSSLESS_BYPASS_HPP
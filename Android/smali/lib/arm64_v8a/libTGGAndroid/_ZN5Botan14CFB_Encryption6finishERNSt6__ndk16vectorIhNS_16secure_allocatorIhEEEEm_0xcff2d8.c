// 函数: _ZN5Botan14CFB_Encryption6finishERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEm
// 地址: 0xcff2d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *arg2
int64_t x9_1 = *(arg2 + 8) - x8
int64_t entry_x2

if (x9_1 u< entry_x2)
    uint8_t* x0_2
    uint64_t x1_3
    x0_2, x1_3 = Botan::assertion_failure("buffer.size() >= offset", "Offset ok", "update", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x9a9)
    return Botan::CFB_Decryption::process(x0_2, x1_3) __tailcall

int64_t result = (*(*arg1 + 0x38))(arg1, x8 + entry_x2, x9_1 - entry_x2)
int64_t x8_1 = *arg2
int64_t x9_4 = result + entry_x2
int64_t x10_1 = *(arg2 + 8) - x8_1

if (x9_4 u> x10_1)
    return std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg2)
        __tailcall

if (x9_4 u< x10_1)
    *(arg2 + 8) = x8_1 + x9_4

return result

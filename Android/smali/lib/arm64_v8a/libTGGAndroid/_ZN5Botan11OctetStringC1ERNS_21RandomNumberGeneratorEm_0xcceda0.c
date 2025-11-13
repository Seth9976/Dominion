// 函数: _ZN5Botan11OctetStringC1ERNS_21RandomNumberGeneratorEm
// 地址: 0xcceda0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
int64_t x1_1
int64_t entry_x2
int64_t x8

if (entry_x2 == 0)
    x1_1 = 0
    x8 = 0
else
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg1)
    x1_1 = *arg1
    x8 = *(arg1 + 8)

return (*(*arg2 + 0x10))(arg2, x1_1, x8 - x1_1)

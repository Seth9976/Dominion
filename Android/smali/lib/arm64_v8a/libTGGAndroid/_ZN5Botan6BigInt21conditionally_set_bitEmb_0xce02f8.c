// 函数: _ZN5Botan6BigInt21conditionally_set_bitEmb
// 地址: 0xce02f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *arg1
uint64_t x20 = arg2 u>> 5
int64_t x9_2 = (*(arg1 + 8) - x8) s>> 2
int32_t entry_x2
int32_t x21 = (entry_x2 & 1) << arg2.d

if (x9_2 u> x20)
    int32_t x8_1 = *(x8 + (x20 << 2))
    *(arg1 + 0x18) = -1
    *(*arg1 + (x20 << 2)) = x8_1 | x21
    return 

*(arg1 + 0x18) = -1

if (x21 == 0)
    return 

if (x20 u< (*(arg1 + 0x10) - x8) s>> 2 || ((x20 + 1) & 0xffffffffffffff8) + 8 u> x9_2)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg1)
else if (((x20 + 1) & 0xffffffffffffff8) + 8 u< x9_2)
    *(arg1 + 8) = x8 + ((((x20 + 1) & 0xffffffffffffff8) + 8) << 2)

*(*arg1 + (x20 << 2)) = x21

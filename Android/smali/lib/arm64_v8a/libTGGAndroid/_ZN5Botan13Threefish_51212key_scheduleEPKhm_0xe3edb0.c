// 函数: _ZN5Botan13Threefish_51212key_scheduleEPKhm
// 地址: 0xe3edb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *(arg1 + 0x20)
void* x10 = *(arg1 + 0x28) - x8

if (x10 s>> 3 u<= 8)
    std::__ndk1::vector<uint64_t, Botan::secure_allocator<uint64_t> >::__append(&arg1[0x20])
    x8 = *(arg1 + 0x20)
else if (x10 != 0x48)
    *(arg1 + 0x28) = &x8[9]

*x8 = *arg2
*(*(arg1 + 0x20) + 8) = *(arg2 + 8)
*(*(arg1 + 0x20) + 0x10) = *(arg2 + 0x10)
*(*(arg1 + 0x20) + 0x18) = *(arg2 + 0x18)
*(*(arg1 + 0x20) + 0x20) = *(arg2 + 0x20)
*(*(arg1 + 0x20) + 0x28) = *(arg2 + 0x28)
*(*(arg1 + 0x20) + 0x30) = *(arg2 + 0x30)
*(*(arg1 + 0x20) + 0x38) = *(arg2 + 0x38)
int64_t* x8_8 = *(arg1 + 0x20)
x8_8[8] =
    *x8_8 ^ x8_8[1] ^ x8_8[2] ^ x8_8[3] ^ x8_8[4] ^ x8_8[5] ^ x8_8[6] ^ x8_8[7] ^ 0x1bd11bdaa9fc1a22
int64_t result = *(arg1 + 8)
int64_t x9_20 = *(arg1 + 0x10)
int64_t x11_1 = x9_20 - result

if (x11_1 s>> 3 u<= 2)
    std::__ndk1::vector<uint64_t, Botan::secure_allocator<uint64_t> >::__append(&arg1[8])
    result = *(arg1 + 8)
    x9_20 = *(arg1 + 0x10)
else if (x11_1 != 0x18)
    x9_20 = result + 0x18
    *(arg1 + 0x10) = x9_20

if (x9_20 == result)
    return result

return memset(result, 0, x9_20 - result) __tailcall

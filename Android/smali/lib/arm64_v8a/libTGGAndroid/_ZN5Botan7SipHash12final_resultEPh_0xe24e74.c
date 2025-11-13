// 函数: _ZN5Botan7SipHash12final_resultEPh
// 地址: 0xe24e74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *(arg1 + 0x20)

if (x8 == *(arg1 + 0x28))
    Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::SipHash::clear() __tailcall

int64_t x10 = *(arg1 + 0x40)
uint64_t x9_1

if (x10 == 0)
    x9_1 = zx.q(arg1[0x48]) << 0x38
    *(arg1 + 0x38) = x9_1
else
    x9_1 = *(arg1 + 0x38)
    
    if (x10 u<= 7)
        x9_1 = x9_1 u>> neg.q(x10 << 3) | zx.q(arg1[0x48]) << 0x38
        *(arg1 + 0x38) = x9_1

int64_t x13 = x8[2]
int64_t i_3 = *(arg1 + 0x10)
int64_t x14 = *x8
int64_t x11_2 = x8[1]
int64_t x10_4 = x8[3] ^ x9_1

if (i_3 != 0)
    int64_t i
    
    do
        int64_t x14_1 = x14 + x11_2
        int64_t x13_1 = x13 + x10_4
        int64_t x11_3 = x14_1 ^ ror.q(x11_2, 0x33)
        int64_t x10_5 = x13_1 ^ ror.q(x10_4, 0x30)
        int64_t x13_2 = x11_3 + x13_1
        x14 = ror.q(x14_1, 0x20) + x10_5
        i = i_3
        i_3 -= 1
        x11_2 = x13_2 ^ ror.q(x11_3, 0x2f)
        x10_4 = x14 ^ ror.q(x10_5, 0x2b)
        x13 = ror.q(x13_2, 0x20)
    while (i != 1)

*x8 = x14 ^ x9_1
*(*(arg1 + 0x20) + 8) = x11_2
*(*(arg1 + 0x20) + 0x10) = x13
*(*(arg1 + 0x20) + 0x18) = x10_4
void* x8_4 = *(arg1 + 0x20)
*(x8_4 + 0x10) ^= 0xff
int64_t i_2 = *(arg1 + 0x18)
int64_t* x8_5 = *(arg1 + 0x20)
int64_t x12 = *x8_5
int64_t x9_7 = x8_5[1]
int64_t x13_3 = x8_5[2]
int64_t x10_6 = x8_5[3]

if (i_2 != 0)
    int64_t i_1
    
    do
        int64_t x12_1 = x12 + x9_7
        int64_t x13_4 = x13_3 + x10_6
        int64_t x9_8 = x12_1 ^ ror.q(x9_7, 0x33)
        int64_t x10_7 = x13_4 ^ ror.q(x10_6, 0x30)
        int64_t x13_5 = x9_8 + x13_4
        x12 = ror.q(x12_1, 0x20) + x10_7
        i_1 = i_2
        i_2 -= 1
        x9_7 = x13_5 ^ ror.q(x9_8, 0x2f)
        x10_6 = x12 ^ ror.q(x10_7, 0x2b)
        x13_3 = ror.q(x13_5, 0x20)
    while (i_1 != 1)

*x8_5 = x12
*(*(arg1 + 0x20) + 8) = x9_7
*(*(arg1 + 0x20) + 0x10) = x13_3
*(*(arg1 + 0x20) + 0x18) = x10_6
int64_t* x8_9 = *(arg1 + 0x20)
int64_t* entry_x1
*entry_x1 = x8_9[1] ^ *x8_9 ^ x8_9[2] ^ x8_9[3]
int64_t x0 = *(arg1 + 0x20)
int64_t x8_12 = *(arg1 + 0x28)

if (x8_12 != x0)
    memset(x0, 0, x8_12 - x0)
    x0 = *(arg1 + 0x20)

*(arg1 + 0x28) = x0
int64_t result = std::__ndk1::vector<uint64_t, Botan::secure_allocator<uint64_t> >::shrink_to_fit()
__builtin_memset(&arg1[0x38], 0, 0x11)
return result

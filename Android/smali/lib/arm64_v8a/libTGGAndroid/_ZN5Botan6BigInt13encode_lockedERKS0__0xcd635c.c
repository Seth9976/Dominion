// 函数: _ZN5Botan6BigInt13encode_lockedERKS0_
// 地址: 0xcd635c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = Botan::BigInt::bits()
int64_t x8_2

if ((x0 & 7) == 0)
    x8_2 = 0
else
    x8_2 = 8 - (x0 & 7)

uint64_t x22 = (x8_2 + x0) u>> 3
int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t x20

if (x22 == 0)
    x20 = 0
else
    int64_t x0_2 = Botan::allocate_memory(x22, 1)
    int64_t x23_1 = x0_2 + x22
    x20 = x0_2
    *entry_x8 = x0_2
    entry_x8[2] = x23_1
    memset(x0_2, 0, x22)
    entry_x8[1] = x23_1

int64_t result = Botan::BigInt::bits()
int64_t x8_6

if ((result & 7) == 0)
    x8_6 = 0
else
    x8_6 = 8 - (result & 7)

int64_t x12 = x8_6 + result
uint64_t x9 = x12 u>> 5
uint64_t i = x12 u>> 3 & 3

if (x9 != 0)
    int64_t x11_1 = *arg1
    int64_t x10_1 = 0
    int64_t x12_3 = (*(arg1 + 8) - x11_1) s>> 2
    int32_t* x13_2 = (x12 u>> 3) + x20 - 4
    
    do
        int32_t x14_2
        
        if (x12_3 u> x10_1)
            x14_2 = *(x11_1 + (x10_1 << 2))
        else
            x14_2 = 0
        
        x10_1 += 1
        *x13_2 = _byteswap(x14_2)
        x13_2 = &x13_2[-1]
    while (x9 != x10_1)

if (i != 0)
    int64_t x10_2 = *arg1
    int32_t x9_1
    
    if (x9 u>= (*(arg1 + 8) - x10_2) s>> 2)
        x9_1 = 0
    else
        x9_1 = *(x10_2 + (x9 << 2))
    
    int32_t x11_4 = 0x18
    
    do
        *(x20 - 1 + i) = (x9_1 u>> (not.d(x11_4) & 0x18)).b
        i -= 1
        x11_4 -= 8
    while (i != 0)

return result

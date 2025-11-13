// 函数: _ZNK5Botan6BigInt13binary_encodeEPh
// 地址: 0xcbb56c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = Botan::BigInt::bits()
int64_t x8_2

if ((result & 7) == 0)
    x8_2 = 0
else
    x8_2 = 8 - (result & 7)

int64_t x11 = x8_2 + result
uint64_t x9 = x11 u>> 5
uint64_t i = x11 u>> 3 & 3
int64_t entry_x1

if (x9 != 0)
    int64_t x10_1 = 0
    int32_t* x11_3 = (x11 u>> 3) + entry_x1 - 4
    
    do
        int64_t x12_3 = *arg1
        int32_t x12_1
        
        if (x10_1 u< (*(arg1 + 8) - x12_3) s>> 2)
            x12_1 = *(x12_3 + (x10_1 << 2))
        else
            x12_1 = 0
        
        x10_1 += 1
        *x11_3 = _byteswap(x12_1)
        x11_3 = &x11_3[-1]
    while (x9 != x10_1)

if (i != 0)
    int64_t x10_2 = *arg1
    int32_t x9_1
    
    if (x9 u>= (*(arg1 + 8) - x10_2) s>> 2)
        x9_1 = 0
    else
        x9_1 = *(x10_2 + (x9 << 2))
    
    int32_t x11_6 = 0x18
    
    do
        *(entry_x1 - 1 + i) = (x9_1 u>> (not.d(x11_6) & 0x18)).b
        i -= 1
        x11_6 -= 8
    while (i != 0)

return result

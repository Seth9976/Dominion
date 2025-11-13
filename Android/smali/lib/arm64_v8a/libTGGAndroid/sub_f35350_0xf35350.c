// 函数: sub_f35350
// 地址: 0xf35350
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = **(arg1 + 0x10)
int64_t x20 = **(arg1 + 8)
int64_t x0_1 = Botan::BigInt::bits()
int64_t x8_3

if ((x0_1 & 7) == 0)
    x8_3 = 0
else
    x8_3 = 8 - (x0_1 & 7)

int64_t x11 = x8_3 + x0_1
uint64_t x9_1 = x11 u>> 5
uint64_t i = x11 u>> 3 & 3

if (x9_1 != 0)
    int64_t x10_1 = 0
    int32_t* x11_3 = (x11 u>> 3) + x20 - 4
    
    do
        int64_t x12_3 = *x19
        int32_t x12_1
        
        if (x10_1 u< (x19[1] - x12_3) s>> 2)
            x12_1 = *(x12_3 + (x10_1 << 2))
        else
            x12_1 = 0
        
        x10_1 += 1
        *x11_3 = _byteswap(x12_1)
        x11_3 = &x11_3[-1]
    while (x9_1 != x10_1)

if (i != 0)
    int64_t x10_2 = *x19
    int32_t x9_2
    
    if (x9_1 u>= (x19[1] - x10_2) s>> 2)
        x9_2 = 0
    else
        x9_2 = *(x10_2 + (x9_1 << 2))
    
    int32_t x11_6 = 0x18
    
    do
        *(x20 - 1 + i) = (x9_2 u>> (not.d(x11_6) & 0x18)).b
        i -= 1
        x11_6 -= 8
    while (i != 0)

return 0

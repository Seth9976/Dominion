// 函数: _ZNK5Botan6BigInt13binary_encodeEPhm
// 地址: 0xcd6d78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x2
uint64_t x9_1 = entry_x2 u>> 2
int64_t i = entry_x2 & 3

if (x9_1 != 0)
    int64_t x10_1 = 0
    int32_t* x11_2 = entry_x2 + arg2 - 4
    
    do
        int64_t x12_3 = *arg1
        int32_t x12_1
        
        if (x10_1 u< (*(arg1 + 8) - x12_3) s>> 2)
            x12_1 = *(x12_3 + (x10_1 << 2))
        else
            x12_1 = 0
        
        x10_1 += 1
        *x11_2 = _byteswap(x12_1)
        x11_2 = &x11_2[-1]
    while (x9_1 != x10_1)

if (i == 0)
    return 

int64_t x10_2 = *arg1
int32_t x9

if (x9_1 u>= (*(arg1 + 8) - x10_2) s>> 2)
    x9 = 0
else
    x9 = *(x10_2 + (x9_1 << 2))

int32_t x11_5 = 0x18

do
    (arg2 - 1)[i] = (x9 u>> (not.d(x11_5) & 0x18)).b
    i -= 1
    x11_5 -= 8
while (i != 0)

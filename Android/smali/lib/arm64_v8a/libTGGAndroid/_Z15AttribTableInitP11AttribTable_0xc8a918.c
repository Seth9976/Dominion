// 函数: _Z15AttribTableInitP11AttribTable
// 地址: 0xc8a918
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20_1

if (*(arg1 + 0x10) s< 1)
    x20_1 = 1
else
    int64_t x20 = 0
    int64_t i = 0
    int32_t x21_1 = 0
    
    do
        int32_t* x23_1 = *(arg1 + 8) + x20
        int64_t x0_1 = DefMapFromTypeString(*(x23_1 + 0x10))
        int32_t x8_2 = *x23_1
        *(x23_1 + 0x18) = x0_1
        i += 1
        
        if (x8_2 s> x21_1)
            x21_1 = x8_2
        
        x20 += 0x68
    while (i s< sx.q(*(arg1 + 0x10)))
    
    x20_1 = x21_1 + 1

int64_t result = XCalloc(x20_1 << 3)
int32_t x8_3 = *(arg1 + 0x10)
*(arg1 + 0x18) = result
*(arg1 + 0x20) = x20_1

if (x8_3 s>= 1)
    int32_t* x8_4 = *(arg1 + 8)
    *(result + (zx.q(*x8_4) << 3)) = x8_4
    
    if (*(arg1 + 0x10) s>= 2)
        int64_t i_1 = 1
        int64_t x9_3 = 0x68
        
        do
            i_1 += 1
            int32_t* x10_2 = *(arg1 + 8) + x9_3
            x9_3 += 0x68
            *(*(arg1 + 0x18) + (zx.q(*x10_2) << 3)) = x10_2
        while (i_1 s< sx.q(*(arg1 + 0x10)))

return result

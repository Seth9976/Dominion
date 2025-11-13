// 函数: _Z16U2StateVarsMergeR6XArrayI8UI2StateEPKS0_i
// 地址: 0x101d980
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 s< 1)
    return 

int64_t i = 0

do
    uint64_t x13_2 = zx.q(*(arg1 + 8))
    int64_t* x14_2 = *arg1
    int64_t* x11_1 = arg2 + i * 0x30
    int64_t* x12_3
    
    if (x13_2.d s< 1)
    label_101d99c:
        *(x14_2 + muls.dp.d(x13_2.d, 0x30) + 8) = 0
        int64_t x12_2 = sx.q(*(arg1 + 8))
        x12_3 = *arg1 + x12_2 * 0x30
        *(arg1 + 8) = x12_2.d + 1
    else
        x12_3 = x14_2
        uint64_t x17_1 = x13_2
        
        while (x12_3[1].d != x11_1[1].d || *x12_3 != *x11_1)
            uint64_t temp0_1 = x17_1
            x17_1 -= 1
            x12_3 = &x12_3[6]
            
            if (temp0_1 == 1)
                goto label_101d99c
    
    int128_t v0 = *(x11_1 + 0x20)
    int128_t v1 = *x11_1
    i += 1
    *(x12_3 + 0x10) = *(x11_1 + 0x10)
    *(x12_3 + 0x20) = v0
    *x12_3 = v1
while (i != zx.q(arg3))

// 函数: _Z10RandomNextR6Random
// 地址: 0xfa14e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(arg1 + 0x9c0)

if (x9 u>= 0x270)
    if (x9 == 0x271)
        int32_t i = 3
        int32_t x10_1 = 2
        *(arg1 + 8) = 0xaf25f095
        *(arg1 + 0x9c0) = 3
        *arg1 = 0x4d98ee9600001571
        
        do
            int32_t x10_2 = *(arg1 + (zx.q(x10_1) << 2))
            *(arg1 + (zx.q(i) << 2)) = i + (x10_2 ^ x10_2 u>> 0x1e) * 0x6c078965
            x10_1 = *(arg1 + 0x9c0)
            i = x10_1 + 1
            *(arg1 + 0x9c0) = i
        while (i u< 0x270)
    
    uint64_t x10_5 = zx.q(*arg1)
    
    for (int64_t i_1 = 0; i_1 != 0x388; )
        int32_t* x11_1 = arg1 + i_1
        int32_t x12_1 = x10_5.d & 0x80000000
        uint64_t x13_1 = zx.q(x11_1[1])
        x10_5 = zx.q(x11_1[2])
        i_1 += 8
        int32_t x13_5 = *(&data_718870 + ((x10_5 & 1) << 2)) ^ x11_1[0x18e]
            ^ ((x10_5.d & 0x7ffffffe) | (x13_1.d & 0x80000000)) u>> 1
        *x11_1 = *(&data_718870 + ((x13_1 & 1) << 2)) ^ x11_1[0x18d]
            ^ ((x13_1.d & 0x7ffffffe) | x12_1) u>> 1
        x11_1[1] = x13_5
    
    uint64_t x11_2 = zx.q(*(arg1 + 0x38c))
    int64_t i_2 = 0
    *(arg1 + 0x388) = *(&data_718870 + ((x11_2 & 1) << 2)) ^ *(arg1 + 0x9bc)
        ^ ((x11_2.d & 0x7ffffffe) | (x10_5.d & 0x80000000)) u>> 1
    uint64_t x10_9 = zx.q(x11_2.d)
    
    do
        int32_t* x11_3 = arg1 + i_2
        int32_t x12_6 = x10_9.d & 0x80000000
        x10_9 = zx.q(x11_3[0xe4])
        i_2 += 4
        x11_3[0xe3] =
            *(&data_718870 + ((x10_9 & 1) << 2)) ^ *x11_3 ^ ((x10_9.d & 0x7ffffffe) | x12_6) u>> 1
    while (i_2 != 0x630)
    
    uint64_t x10_10 = zx.q(*arg1)
    x9 = 0
    *(arg1 + 0x9bc) = *(&data_718870 + ((x10_10 & 1) << 2)) ^ *(arg1 + 0x630)
        ^ ((x10_10.d & 0x7ffffffe) | (*(arg1 + 0x9bc) & 0x80000000)) u>> 1

*(arg1 + 0x9c0) = x9 + 1
int32_t x8_5 = *(arg1 + (zx.q(x9) << 2))
int32_t x8_6 = x8_5 ^ x8_5 u>> 0xb
int32_t x8_7 = (0x9d2c5680 & x8_6 << 7) ^ x8_6
int32_t x8_8 = (0xefc60000 & x8_7 << 0xf) ^ x8_7
return zx.q(x8_8) ^ zx.q(x8_8 u>> 0x12)

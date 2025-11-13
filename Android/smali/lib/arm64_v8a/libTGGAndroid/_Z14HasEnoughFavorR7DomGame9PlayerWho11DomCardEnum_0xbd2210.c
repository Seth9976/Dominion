// 函数: _Z14HasEnoughFavorR7DomGame9PlayerWho11DomCardEnum
// 地址: 0xbd2210
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*(arg1 + 0x19e0)) == 0)
    return 0

int32_t x22_1 = *(arg1 + 0xd50)
int32_t x8_5 = (arg3 + (x22_1 << 0x10)) s% 0x3e5
int32_t* x9_1 = *(&data_1838a20 + (sx.q(x8_5) << 3))
int32_t x21_1 = arg3
int32_t x19_1 = arg2
int32_t entry_x7
int32_t x8_7
int32_t entry_x17

if (x9_1 != 0)
    while (*x9_1 != x21_1 || x9_1[1] != x22_1)
        x9_1 = *(x9_1 + 0x10)
        
        if (x9_1 == 0)
            goto label_bd2280
    
    x8_7 = *(*(x9_1 + 8) + 0xc4)
    
    if (x8_7 == 0xffffffff)
        return 1
else
label_bd2280:
    DomDefGetSlow(zx.q(x21_1), zx.q(x22_1))
    int32_t* x0_1 = malloc(0x18)
    int64_t x8_6 = sx.q(x8_5) << 3
    int64_t x9_2 = *(&data_1838a20 + x8_6)
    *x0_1 = x21_1
    x0_1[1] = x22_1
    *(&data_1838a20 + x8_6) = x0_1
    *(x0_1 + 0x10) = x9_2
    void* x0_3
    x0_3, arg2, entry_x7, entry_x17 = DomDefGetSlow(zx.q(x21_1), zx.q(x22_1))
    *(x0_1 + 8) = x0_3
    x8_7 = *(x0_3 + 0xc4)
    
    if (x8_7 == 0xffffffff)
        return 1

uint64_t x10_2 = zx.q(*(arg1 + 0x19ac))
int32_t x9_3

x9_3 = x19_1 == 0xffffffff ? 6 : 0x3f1

int32_t x12_1

if (x10_2.d s< 1)
    x12_1 = 0
else
    int64_t i_4
    
    if (x10_2.d u>= 3)
        i_4 = x10_2 & 0xfffffffe
        int32_t x12_2 = 0
        int32_t x13_1 = 0
        void* __offset(DomGame, 0x15f88) x14_1 = arg1 + 0x15f88
        int64_t i_3 = i_4
        int64_t i
        
        do
            int32_t x16_5 = *(x14_1 - 0x18)
            
            if (x16_5 == x9_3)
                entry_x17 = *(x14_1 - 0x1c)
            
            int32_t x0_8 = *(x14_1 + 8)
            
            if (x0_8 == x9_3)
                arg2 = *(x14_1 + 4)
            
            int32_t x4_3 = entry_x17 == x19_1 ? 1 : 0
            int32_t x2_3 = x4_3 & (x16_5 == x9_3 ? 1 : 0)
            
            if (x2_3 == 1)
                x4_3 = *(x14_1 - 0x20)
            
            int32_t x3_4 = (arg2 == x19_1 ? 1 : 0) & (x0_8 == x9_3 ? 1 : 0)
            
            if (x3_4 != 0)
                entry_x7 = *x14_1
            
            int32_t x5_2 = x4_3 != 0x1000 ? 1 : 0
            int32_t x6_1 = entry_x7 == 0x1000 ? 1 : 0
            
            if (((x5_2 | (x2_3 ^ 1)) & 1) == 0)
                x5_2 = *(x14_1 - 0xc)
            
            if ((x6_1 & x3_4) != 0)
                x6_1 = *(x14_1 + 0x14)
            
            int32_t x1_2 = x3_4 & (entry_x7 != 0x1000 ? 1 : 0)
            entry_x7 = x16_5 == x9_3 ? 1 : 0
            entry_x17 =
                (entry_x7 & (entry_x17 != x19_1 ? 1 : 0)) | (x2_3 & (x4_3 != 0x1000 ? 1 : 0))
            arg2 = ((x0_8 == x9_3 ? 1 : 0) & (arg2 != x19_1 ? 1 : 0)) | x1_2
            int32_t x16_3
            
            if ((entry_x17 | (x16_5 != x9_3 ? 1 : 0)) != 0)
                x16_3 = 0
            else
                x16_3 = x5_2
            
            x12_2 += x16_3
            int32_t x16_4
            
            if ((arg2 | (x0_8 != x9_3 ? 1 : 0)) != 0)
                x16_4 = 0
            else
                x16_4 = x6_1
            
            i = i_3
            i_3 -= 2
            x13_1 += x16_4
            x14_1 += 0x40
        while (i != 2)
        x12_1 = x13_1 + x12_2
        
        if (i_4 != x10_2)
            goto label_bd2494
    else
        i_4 = 0
        x12_1 = 0
    label_bd2494:
        void* x13_3 = arg1 + (i_4 << 5) + 0x15f68
        int64_t i_2 = x10_2 - i_4
        int64_t i_1
        
        do
            if (*(x13_3 + 8) == x9_3 && *(x13_3 + 4) == x19_1 && *x13_3 == 0x1000)
                x12_1 += *(x13_3 + 0x14)
            
            i_1 = i_2
            i_2 -= 1
            x13_3 += 0x20
        while (i_1 != 1)

return zx.q(x12_1 s>= x8_7 ? 1 : 0)

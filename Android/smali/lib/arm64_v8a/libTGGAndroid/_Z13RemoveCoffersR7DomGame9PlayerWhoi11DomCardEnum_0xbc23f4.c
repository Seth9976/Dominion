// 函数: _Z13RemoveCoffersR7DomGame9PlayerWhoi11DomCardEnum
// 地址: 0xbc23f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*(arg1 + 0x19ac))
int32_t x19 = arg4
int32_t x20 = arg2
DomGame& x21 = arg1
int32_t x8

x8 = arg2 == 0xffffffff ? 6 : 0x3f1

int32_t x22_1

if (x9.d s< 1)
    x22_1 = 0
else
    int64_t i_4
    
    if (x9.d u>= 3)
        i_4 = x9 & 0xfffffffe
        int32_t x11_1 = 0
        int32_t x12_1 = 0
        void* __offset(DomGame, 0x15f88) x13_1 = x21 + 0x15f88
        int64_t i_3 = i_4
        int64_t i
        
        do
            int32_t x15_5 = *(x13_1 - 0x18)
            int32_t entry_x16
            
            if (x15_5 == x8)
                entry_x16 = *(x13_1 - 0x1c)
            
            int32_t x17_3 = *(x13_1 + 8)
            
            if (x17_3 == x8)
                arg1 = zx.q(*(x13_1 + 4))
            
            int32_t x4_3 = entry_x16 == x20 ? 1 : 0
            int32_t x1_3 = x4_3 & (x15_5 == x8 ? 1 : 0)
            
            if (x1_3 == 1)
                x4_3 = *(x13_1 - 0x20)
            
            int32_t x3_3 = (arg1.d == x20 ? 1 : 0) & (x17_3 == x8 ? 1 : 0)
            int32_t entry_x7
            
            if (x3_3 != 0)
                entry_x7 = *x13_1
            
            int32_t x5_2 = x4_3 != 0xa00 ? 1 : 0
            int32_t x6_1 = entry_x7 == 0xa00 ? 1 : 0
            
            if (((x5_2 | (x1_3 ^ 1)) & 1) == 0)
                x5_2 = *(x13_1 - 0xc)
            
            if ((x6_1 & x3_3) != 0)
                x6_1 = *(x13_1 + 0x14)
            
            int32_t x0 = x3_3 & (entry_x7 != 0xa00 ? 1 : 0)
            entry_x7 = x15_5 == x8 ? 1 : 0
            entry_x16 = (entry_x7 & (entry_x16 != x20 ? 1 : 0)) | (x1_3 & (x4_3 != 0xa00 ? 1 : 0))
            arg1 = (zx.q(x17_3 == x8 ? 1 : 0) & zx.q(arg1.d != x20 ? 1 : 0)) | zx.q(x0)
            int32_t x15_3
            
            if ((entry_x16 | (x15_5 != x8 ? 1 : 0)) != 0)
                x15_3 = 0
            else
                x15_3 = x5_2
            
            x11_1 += x15_3
            int32_t x15_4
            
            if ((arg1.d | (x17_3 != x8 ? 1 : 0)) != 0)
                x15_4 = 0
            else
                x15_4 = x6_1
            
            i = i_3
            i_3 -= 2
            x12_1 += x15_4
            x13_1 += 0x40
        while (i != 2)
        x22_1 = x12_1 + x11_1
        
        if (i_4 != x9)
            goto label_bc2638
    else
        i_4 = 0
        x22_1 = 0
    label_bc2638:
        void* x11_3 = x21 + (i_4 << 5) + 0x15f68
        int64_t i_2 = x9 - i_4
        int64_t i_1
        
        do
            if (*(x11_3 + 8) == x8 && *(x11_3 + 4) == x20 && *x11_3 == 0xa00)
                x22_1 += *(x11_3 + 0x14)
            
            i_1 = i_2
            i_2 -= 1
            x11_3 += 0x20
        while (i_1 != 1)

int32_t x23

if (x22_1 s>= arg3)
    x23 = 0
    
    if (arg3 != 0)
    label_bc25d8:
        int32_t var_38_1 = 0
        int32_t var_40_1 = 0xffffffff
        AddTokens(x21, zx.q(x20), 0xa00, zx.q(neg.d(arg3)), 0x476, 0, 0, zx.q(x19))
else
    x23 = arg3 - x22_1
    CountOngoing(x21, zx.q(x20), 0x29, 0, 0)
    arg3 = x22_1
    
    if (arg3 != 0)
        goto label_bc25d8

if (x23 == 0)
    return 

int32_t var_38_2 = 0
int32_t var_40_2 = 0xffffffff
AddTokens(x21, zx.q(x20), 0x601, zx.q(neg.d(x23)), 0x476, 0, 0, zx.q(x19))

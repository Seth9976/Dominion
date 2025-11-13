// 函数: _ZN5Botan10polyn_gf2m18patchup_deg_secureEjt
// 地址: 0xda8588
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int16_t entry_x2
int16_t var_4 = entry_x2
int16_t* x9 = *(arg1 + 8)
int64_t x8 = *(arg1 + 0x10)

if (zx.q(arg2.d) u> (x8 - x9) s>> 1)
    return 

int32_t x8_2

if (x8 == x9)
    x8_2 = 0
else
    uint64_t i = 0
    void* x10_4
    
    do
        bool cond:0_1 = arg2.d == i.d
        i = zx.q(i.d + 1)
        x9[i] |= var_4
        int16_t x9_2
        
        x9_2 = cond:0_1 ? 0 : var_4
        
        var_4 = x9_2
        x9 = *(arg1 + 8)
        x10_4 = *(arg1 + 0x10) - x9
    while (i u< x10_4 s>> 1)
    
    if ((x10_4 u>> 1).d s< 1)
        x8_2 = 0
    else
        x8_2 = 0
        int64_t i_2 = (x10_4 & 0x1fffffffe) << 0x1f s>> 0x20
        int32_t x12_2 = 0xffff
        int64_t i_1
        
        do
            int32_t x13_2
            
            if (zx.d(*(x9 - 2 + (i_2 << 1))) == 0)
                x13_2 = 0
            else
                x13_2 = 0xffff
            
            i_1 = i_2
            i_2 -= 1
            x8_2 |= x12_2 & i_2.d & x13_2
            x12_2 &= not.d(x13_2)
        while (i_1 s> 1)

*arg1 = x8_2

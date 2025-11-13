// 函数: _Z14FilterCardsIntNSt6__ndk18functionIFb6CardIDEEEPS1_iS4_Ri
// 地址: 0xbd6ea0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg3
*arg5 = 0

if (arg3 s< 1)
    return zx.q(x19)

void* x21_1 = arg1
int32_t var_34

if (arg4 == 0)
    int32_t x22_2 = 0
    
    while (true)
        var_34 = *(arg2 + (sx.q(x22_2) << 2))
        int64_t* x0_2 = *(x21_1 + 0x20)
        
        if (x0_2 == 0)
            break
        
        if (((*(*x0_2 + 0x30))(x0_2, &var_34) & 1) == 0)
            x19 -= 1
            int64_t x9_3 = sx.q(x22_2)
            x22_2 -= 1
            *(arg2 + (x9_3 << 2)) = *(arg2 + (sx.q(x19) << 2))
        
        x22_2 += 1
        
        if (x22_2 s>= x19)
            return zx.q(x19)
else
    int32_t x24_1 = 0
    
    while (true)
        var_34 = *(arg2 + (sx.q(x24_1) << 2))
        int64_t* x0 = *(x21_1 + 0x20)
        
        if (x0 == 0)
            break
        
        if (((*(*x0 + 0x30))(x0, &var_34) & 1) == 0)
            int64_t x9_1 = sx.q(*arg5)
            int64_t x8_5 = sx.q(x24_1) << 2
            int32_t x10_1 = *(arg2 + x8_5)
            x19 -= 1
            *arg5 = x9_1.d + 1
            *(arg4 + (x9_1 << 2)) = x10_1
            x24_1 -= 1
            *(arg2 + x8_5) = *(arg2 + (sx.q(x19) << 2))
        
        x24_1 += 1
        
        if (x24_1 s>= x19)
            return zx.q(x19)
sub_a58ab4()
noreturn

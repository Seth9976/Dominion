// 函数: _ZN5Botan20Fixed_Base_Power_ModC1ERKNS_6BigIntES3_NS_9Power_Mod11Usage_HintsE
// 地址: 0xdd8e94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char x8_3

if (*(arg2 + 0x20) == 0)
label_dd8f94:
    int64_t x0_1 = Botan::BigInt::bits()
    int64_t x0_3 = Botan::BigInt::bits()
    
    if (x0_1 u< x0_3 u>> 5)
        x8_3 = 2
    else
        x8_3 = ((x0_1 u> x0_3 u>> 2 ? 1 : 0) << 2).b
else
    int64_t i_2 = *(arg2 + 0x18)
    
    if (i_2 == -1)
        int64_t x9_1 = *arg2
        int64_t x11_1 = *(arg2 + 8)
        int64_t x10_1 = x11_1 - x9_1
        
        if (x11_1 == x9_1)
            i_2 = 0
            *(arg2 + 0x18) = 0
            
            if (i_2 == 0)
                goto label_dd8f94
        else
            int64_t x12_1
            
            x12_1 = x10_1 s>= 0 ? x10_1 : -1
            
            int64_t x11_2 = x9_1 - x11_1
            int64_t x12_2
            
            x12_2 = x12_1 s< 1 ? x12_1 : 1
            
            i_2 = x10_1 s>> 2
            int64_t x10_2
            
            x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
            
            int64_t i_3 = x12_2 * (x10_2 u>> 2)
            uint64_t x11_3 = 1
            int64_t i
            
            do
                int32_t x12_3 = *(x9_1 - 4 + (i_3 << 2))
                i = i_3
                i_3 -= 1
                x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
                i_2 -= x11_3
            while (i != 1)
            *(arg2 + 0x18) = i_2
            
            if (i_2 u> 1 || i_2 == 0)
                goto label_dd8f94
    else if (i_2 u> 1 || i_2 == 0)
        goto label_dd8f94
    
    int32_t* x9_3 = *arg2
    int32_t x10_4 = 0
    int64_t i_1
    
    do
        int32_t x11_4 = *x9_3
        x9_3 = &x9_3[1]
        i_1 = i_2
        i_2 -= 1
        int32_t x11_6 = (((x11_4 ^ 2) - 1) & not.d(x11_4)) s>> 0x1f
        x10_4 = (x10_4 & x11_6) | ((((x11_4 - 2) & not.d(x11_4)) s>> 0x1f | 1) & not.d(x11_6))
    while (i_1 != 1)
    
    if (x10_4 != 0)
        goto label_dd8f94
    
    x8_3 = 0xa

*arg1 = _vtable_for_Botan::Power_Mod + 0x10
*(arg1 + 8) = 0
char entry_x3
Botan::Power_Mod::set_modulus(arg1, arg3, x8_3 | entry_x3 | 1)
*arg1 = _vtable_for_Botan::Fixed_Base_Power_Mod + 0x10
return Botan::Power_Mod::set_base(arg1)

// 函数: _Z11ToCardTypesR7DomGameP11DomCardEnumP6CardIDi
// 地址: 0xc01f80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg4 s>= 1)
    DomCardEnum* x19_1 = arg2
    CardID* x20_1 = arg3
    uint64_t i_1 = zx.q(arg4)
    uint64_t i
    
    do
        uint64_t x21_1 = zx.q(*x20_1)
        
        if (x21_1.d u>= 0x320)
            void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_6 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
            *(*(x8_6 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_7 = *(x8_6 - 0x90)
            *(x8_7 + 0x1a2c) = *(x8_7 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        i = i_1
        i_1 -= 1
        x20_1 += 4
        *x19_1 = *(arg1 + x21_1 * 0x68 + 0x1a70)
        x19_1 += 4
    while (i != 1)

DomGame& var_68 = arg1
void* x20_2 = arg2 + (sx.q(arg4) << 2)
std::__ndk1::__sort<CardTypeSort&, DomCardEnum*>(arg2, x20_2, &var_68)
void* __offset(DomCardEnum, -0x4) x8_8 = arg2

if (arg4 != 0)
    x8_8 = arg2 - 4
    int64_t x9_5 = (sx.q(arg4) << 2) - 4
    
    do
        if (x9_5 == 0)
            return (x20_2 - arg2) u>> 2
        
        x8_8 += 4
        x9_5 -= 4
    while (*x8_8 != *(x8_8 + 4))

if (x8_8 != x20_2)
    void* __offset(DomCardEnum, 0x4) x9_6 = x8_8 + 8
    
    if (x9_6 != x20_2)
        int32_t x10_2 = *x8_8
        
        do
            int32_t x11_2 = x10_2
            x10_2 = *x9_6
            
            if (x11_2 != x10_2)
                x8_8 += 4
                *x8_8 = x10_2
            
            x9_6 += 4
        while (x20_2 != x9_6)
    
    x20_2 = x8_8 + 4

return (x20_2 - arg2) u>> 2

// 函数: stbtt_GetGlyphBox
// 地址: 0x1006034
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x4c) == 0)
    int32_t x0_3 = sub_1006190(arg1, arg2)
    
    if ((x0_3 & 0x80000000) != 0)
        return 0
    
    if (arg3 != 0)
        void* x8_10 = *(arg1 + 8) + zx.q(x0_3)
        *arg3 = sx.d((zx.d(*(x8_10 + 2)) << 8).w) | zx.d(*(x8_10 + 3))
    
    if (arg4 != 0)
        void* x8_14 = *(arg1 + 8) + zx.q(x0_3)
        *arg4 = sx.d((zx.d(*(x8_14 + 4)) << 8).w) | zx.d(*(x8_14 + 5))
    
    if (arg5 != 0)
        void* x8_18 = *(arg1 + 8) + zx.q(x0_3)
        *arg5 = sx.d((zx.d(*(x8_18 + 6)) << 8).w) | zx.d(*(x8_18 + 7))
    
    if (arg6 != 0)
        void* x8_22 = *(arg1 + 8) + zx.q(x0_3)
        *arg6 = sx.d((zx.d(*(x8_22 + 8)) << 8).w) | zx.d(*(x8_22 + 9))
else
    int64_t var_40_1 = 0
    int128_t var_70
    __builtin_memset(&var_70, 0, 0x28)
    var_70.d = 1
    int32_t x0_1
    int32_t* x19
    int32_t* x20_1
    int32_t* x21_1
    int128_t v8
    int128_t v9
    int128_t v10
    x0_1, x19, x20_1, x21_1 = sub_100bc78(arg1, arg2, &var_70, v8, v9, v10)
    int128_t var_60
    
    if (arg3 != 0)
        int32_t x8_2
        
        if (x0_1 == 0)
            x8_2 = 0
        else
            x8_2 = var_60:8.d
        
        *arg3 = x8_2
    
    int64_t var_50
    
    if (x21_1 != 0)
        int32_t x8_4
        
        x8_4 = x0_1 == 0 ? 0 : var_50.d
        
        *x21_1 = x8_4
    
    if (x20_1 != 0)
        int32_t x8_6
        
        if (x0_1 == 0)
            x8_6 = 0
        else
            x8_6 = var_60:0xc.d
        
        *x20_1 = x8_6
    
    if (x19 != 0)
        int32_t x8_8
        
        if (x0_1 == 0)
            x8_8 = 0
        else
            x8_8 = var_50:4.d
        
        *x19 = x8_8

return 1

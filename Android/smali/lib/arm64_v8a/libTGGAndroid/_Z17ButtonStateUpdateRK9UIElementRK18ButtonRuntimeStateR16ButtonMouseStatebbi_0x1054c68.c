// 函数: _Z17ButtonStateUpdateRK9UIElementRK18ButtonRuntimeStateR16ButtonMouseStatebbi
// 地址: 0x1054c68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x21_1

if (arg6 == 0xffffffff || *(arg3 + 8) != arg6)
    char x11_1 = *(arg3 + 1)
    uint32_t x9_1 = zx.d(*(arg3 + 3))
    *(arg3 + 1) = arg4 & 1
    *(arg3 + 3) = arg5 & 1
    *arg3 = x11_1
    *(arg3 + 2) = x9_1.b
    *(arg3 + 8) = arg6
    uint32_t x8_5
    
    if (zx.d(*(arg2 + 1)) == 0 && zx.d(*(arg2 + 3)) == 0)
        x8_5 = zx.d(*(arg2 + 2))
    
    if (zx.d(*(arg2 + 1)) != 0 || zx.d(*(arg2 + 3)) != 0 || x8_5 != 0)
        *(arg3 + 1) = 0
        return 0
    
    if (x9_1 == 0 && (arg5.d & 1) != 0 && (arg4.d & 1) != 0)
        XAsset* x0_2 = *(arg1 + 0x150)
        
        if (x0_2 != 0)
            SoundPlay(x0_2)
        
        x8_5 = 1
        
        if (zx.d(*arg2) == 0)
            *(arg3 + 4) = 1
            x8_5 = 0
    
    uint32_t x9_3 = zx.d(*(arg3 + 3))
    uint32_t x12_1 = zx.d(*arg3)
    bool z_1
    
    if (zx.d(*(arg3 + 4)) != 0)
        z_1 = x9_3 == 0
    else
        z_1 = false
    
    bool z_2
    
    if (z_1)
        z_2 = zx.d(*(arg3 + 2)) == 0
    else
        z_2 = true
    
    bool z_3
    
    if (not(z_2))
        z_3 = x12_1 == 0
    else
        z_3 = true
    
    x21_1 = z_3 ? x8_5 : 1
    
    if ((x12_1 | x9_3) == 0 && zx.d(*(arg3 + 1)) != 0)
        XAsset* x0_3 = *(arg1 + 0x158)
        
        if (x0_3 != 0)
            SoundPlay(x0_3)
            x9_3 = zx.d(*(arg3 + 3))
    
    if (x9_3 == 0)
        *(arg3 + 4) = 0
else
    x21_1 = 0

return zx.q(x21_1)

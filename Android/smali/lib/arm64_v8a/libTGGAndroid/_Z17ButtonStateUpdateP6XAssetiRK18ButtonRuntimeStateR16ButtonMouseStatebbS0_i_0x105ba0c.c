// 函数: _Z17ButtonStateUpdateP6XAssetiRK18ButtonRuntimeStateR16ButtonMouseStatebbS0_i
// 地址: 0x105ba0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22

if (arg8 == 0xffffffff || *(arg4 + 8) != arg8)
    char x11_1 = *(arg4 + 1)
    uint32_t x8_2 = zx.d(*(arg4 + 3))
    *(arg4 + 1) = arg5 & 1
    *(arg4 + 3) = arg6 & 1
    *arg4 = x11_1
    *(arg4 + 2) = x8_2.b
    *(arg4 + 8) = arg8
    
    if (zx.d(*(arg3 + 1)) != 0 || zx.d(*(arg3 + 3)) != 0 || zx.d(*(arg3 + 2)) != 0)
        x22 = 0
        *(arg4 + 1) = 0
    else
        x22 = 0
        
        if (x8_2 == 0 && (arg6.d & 1) != 0 && (arg5.d & 1) != 0)
            UIElementButtonSound(arg1, arg2, 2, arg7)
            
            if (zx.d(*arg3) == 0)
                x22 = 0
                *(arg4 + 4) = 1
            else
                x22 = 1
                UIElementButtonSound(arg1, arg2, 1, nullptr)
        
        uint32_t x8_4 = zx.d(*(arg4 + 3))
        uint32_t x9_5 = zx.d(*arg4)
        
        if (zx.d(*(arg4 + 2)) != 0 && x8_4 == 0 && x9_5 != 0)
            x8_4 = zx.d(*(arg4 + 4))
            
            if (x8_4 != 0)
                x22 = 1
                UIElementButtonSound(arg1, arg2, 1, nullptr)
                x8_4 = zx.d(*(arg4 + 3))
                x9_5 = zx.d(*arg4)
        
        if ((x9_5 | x8_4) == 0 && zx.d(*(arg4 + 1)) != 0)
            UIElementButtonSound(arg1, arg2, 0, nullptr)
            x8_4 = zx.d(*(arg4 + 3))
        
        if (x8_4 == 0)
            *(arg4 + 4) = 0
else
    x22 = 0

return zx.q(x22)

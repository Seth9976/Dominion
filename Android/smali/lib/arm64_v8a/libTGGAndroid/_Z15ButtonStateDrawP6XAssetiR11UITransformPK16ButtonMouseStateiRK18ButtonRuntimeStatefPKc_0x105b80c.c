// 函数: _Z15ButtonStateDrawP6XAssetiR11UITransformPK16ButtonMouseStateiRK18ButtonRuntimeStatefPKc
// 地址: 0x105b80c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*(arg6 + 1)) != 0)
    return 

uint32_t x10 = zx.d(*(arg6 + 3))

if (x10 == 0)
    uint64_t x3_1
    
    if (zx.d(*(arg6 + 4)) != 0)
        x3_1 = 3
        
        if (arg5 s<= 1)
            return UIElementButtonDraw(arg1, arg2, arg3, x3_1, arg8, arg7) __tailcall
    else if (zx.d(*(arg4 + 1)) == 0)
    label_105b878:
        x3_1 = 0
        
        if (arg5 s<= 1)
            return UIElementButtonDraw(arg1, arg2, arg3, x3_1, arg8, arg7) __tailcall
    else if (zx.d(*(arg4 + 3)) == 0)
        x3_1 = 1
        
        if (arg5 s<= 1)
            return UIElementButtonDraw(arg1, arg2, arg3, x3_1, arg8, arg7) __tailcall
    else
        if (zx.d(*(arg4 + 4)) == 0)
            goto label_105b878
        
        x3_1 = 2
        
        if (arg5 s<= 1)
            return UIElementButtonDraw(arg1, arg2, arg3, x3_1, arg8, arg7) __tailcall
    
    if (x10 == 0)
        uint32_t x10_4 = zx.d(*(arg6 + 4))
        void* __offset(ButtonMouseState, 0x10) x8_6 = arg4 + 0x10
        int64_t i_5 = zx.q(arg5) - 1
        int64_t i
        
        do
            int32_t x13_4
            
            if (x10_4 != 0)
                x13_4 = 3
            else if (zx.d(*(x8_6 - 3)) == 0)
                x13_4 = 0
            else if (zx.d(*(x8_6 - 1)) == 0)
                x13_4 = 1
            else if (zx.d(*x8_6) == 0)
                x13_4 = 0
            else
                x13_4 = 2
            
            int32_t x13_9 = (x3_1.d s> x13_4 ? 1 : 0) | (x10 != 0 ? 1 : 0)
            
            if (x3_1.d s> x13_4)
                x3_1 = zx.q(x3_1.d)
            else
                x3_1 = 3
            
            if ((x13_9 & 1) == 0 && x10_4 == 0)
                if (zx.d(*(x8_6 - 3)) == 0)
                    x3_1 = 0
                else if (zx.d(*(x8_6 - 1)) == 0)
                    x3_1 = 1
                else if (zx.d(*x8_6) == 0)
                    x3_1 = 0
                else
                    x3_1 = 2
            
            i = i_5
            i_5 -= 1
            x8_6 += 0xc
        while (i != 1)
        return UIElementButtonDraw(arg1, arg2, arg3, x3_1, arg8, arg7) __tailcall
else if (arg5 s<= 1)
    return UIElementButtonDraw(arg1, arg2, arg3, 3, arg8, arg7) __tailcall

int32_t x8_3

if (arg5 - 1 u>= 2)
    int32_t i_6 = (arg5 - 1) & 0xfffffffe
    x8_3 = (arg5 - 1) | 1
    int32_t i_4 = i_6
    int32_t i_1
    
    do
        i_1 = i_4
        i_4 -= 2
    while (i_1 != 2)
    
    if (arg5 - 1 == i_6)
        return UIElementButtonDraw(arg1, arg2, arg3, 3, arg8, arg7) __tailcall
else
    x8_3 = 1

int32_t i_3 = arg5 - x8_3
int32_t i_2

do
    i_2 = i_3
    i_3 -= 1
while (i_2 != 1)
return UIElementButtonDraw(arg1, arg2, arg3, 3, arg8, arg7) __tailcall

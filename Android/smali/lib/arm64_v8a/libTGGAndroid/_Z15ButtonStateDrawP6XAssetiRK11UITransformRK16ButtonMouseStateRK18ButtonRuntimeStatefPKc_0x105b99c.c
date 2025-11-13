// 函数: _Z15ButtonStateDrawP6XAssetiRK11UITransformRK16ButtonMouseStateRK18ButtonRuntimeStatefPKc
// 地址: 0x105b99c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*(arg5 + 1)) != 0)
    return 

if (zx.d(*(arg5 + 3)) != 0)
    return UIElementButtonDraw(arg1, arg2, arg3, 3, arg7, arg6) __tailcall

if (zx.d(*(arg5 + 4)) != 0)
    return UIElementButtonDraw(arg1, arg2, arg3, 3, arg7, arg6) __tailcall

if (zx.d(*(arg4 + 1)) != 0)
    if (zx.d(*(arg4 + 3)) == 0)
        return UIElementButtonDraw(arg1, arg2, arg3, 1, arg7, arg6) __tailcall
    
    if (zx.d(*(arg4 + 4)) != 0)
        return UIElementButtonDraw(arg1, arg2, arg3, 2, arg7, arg6) __tailcall

return UIElementButtonDraw(arg1, arg2, arg3, 0, arg7, arg6) __tailcall

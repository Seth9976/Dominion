// 函数: _Z19CalcButtonDrawStateRK16ButtonMouseStateRK18ButtonRuntimeState
// 地址: 0x105b7bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*(arg2 + 3)) != 0)
    return 3

if (zx.d(*(arg2 + 4)) != 0)
    return 3

if (zx.d(*(arg1 + 1)) != 0)
    if (zx.d(*(arg1 + 3)) == 0)
        return 1
    
    if (zx.d(*(arg1 + 4)) != 0)
        return 2

return 0

// 函数: _Z11RectClampedRK5RectFS1_
// 地址: 0xaffdd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*V20
*(V20 + 4)
*arg1 >= *arg2 && not(*(arg1 + 8) <= *(arg2 + 8))

if (not(*(arg1 + 4) >= *(arg2 + 4)))
    *(arg1 + 0xc)
else
    *(arg1 + 0xc) <= *(arg2 + 0xc)

*(arg1 + 8)

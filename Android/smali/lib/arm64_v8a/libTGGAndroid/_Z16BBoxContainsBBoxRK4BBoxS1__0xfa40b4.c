// 函数: _Z16BBoxContainsBBoxRK4BBoxS1_
// 地址: 0xfa40b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (not(*arg1 f> *arg2) && not(*(arg1 + 0xc) f< *(arg2 + 0xc)) && not(*(arg1 + 4) f> *(arg2 + 4))
        && not(*(arg1 + 0x10) f< *(arg2 + 0x10)) && not(*(arg1 + 8) f> *(arg2 + 8))
        && *(arg1 + 0x14) f>= *(arg2 + 0x14))
    return 1

return 0

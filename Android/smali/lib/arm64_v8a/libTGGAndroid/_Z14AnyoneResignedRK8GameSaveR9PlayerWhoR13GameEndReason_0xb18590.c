// 函数: _Z14AnyoneResignedRK8GameSaveR9PlayerWhoR13GameEndReason
// 地址: 0xb18590
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_1 = zx.q(*(arg1 + 0x11b4))

if (i_1.d s>= 1)
    void* __offset(GameSave, 0x70) x9_1 = arg1 + 0x70
    uint64_t i
    
    do
        int32_t x10_1 = *(x9_1 + 4)
        
        if (x10_1 - 0x3ec u< 2)
            *arg2 = *x9_1
            *arg3 = 6
            return 1
        
        if (x10_1 == 0x3e9)
            *arg2 = *x9_1
            *arg3 = 5
            return 1
        
        i = i_1
        i_1 -= 1
        x9_1 += 0x22c
    while (i != 1)

return 0

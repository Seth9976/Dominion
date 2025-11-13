// 函数: _Z25ValidateConfigMultiPlayerR9GameSetupi
// 地址: 0x9b9094
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x18) &= 0xffffffdf

if (arg2 == 4)
    *(arg1 + 0x4b8) = 0
    *(arg1 + 0xb3c) = 0

*(arg1 + 0x60) = 1
*(arg1 + 0x64) = *(GetActiveProfile() + 0x42ac)
int32_t x8_3

if (arg2 s>= 1)
    x8_3 = 0
    uint64_t i_1 = zx.q(arg2)
    void* __offset(GameSetup, 0x64) x10_1 = arg1 + 0x64
    uint64_t i
    
    do
        int32_t x11_1 = *(x10_1 - 4)
        
        if (x11_1 != 0 && (x11_1 != 2 || *x10_1 != 1))
            x8_3 += 1
        
        i = i_1
        i_1 -= 1
        x10_1 += 0x22c
    while (i != 1)

if (arg2 s< 1 || x8_3 s<= 1)
    *(arg1 + 0x28c) = 2
    AssignName(arg1 + 0x278, "REQUIRED")

int64_t result = ValidateOwnership(arg1, 4, 0)

if (*(arg1 + 0x20) != 0)
    return result

*(arg1 + 0x20) = 5
return result

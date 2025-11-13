// 函数: _Z18AbilityDoesntStackRK14DomAbilityType
// 地址: 0xb490dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_2 = *(arg1 + 4)

if (x8_2 s> 0x1009)
    int32_t x9_3
    
    if (x8_2 s<= 0x1224)
        uint64_t x9_1 = zx.q(x8_2 - 0x100a)
        
        if ((x9_1.d u> 0x30 || (1 << x9_1 & 0x1000008000011) == 0) && x8_2 != 0x111d)
            x9_3 = 0x1121
            goto label_b491cc
    else if ((x8_2 - 0x1302 u> 0xa || (1 << (x8_2 - 0x1302) & 0x601) == 0) && x8_2 != 0x1225)
        x9_3 = 0x1510
    label_b491cc:
        
        if (x8_2 != x9_3)
            return 0
else if (x8_2 s<= 0xd0c)
    if (x8_2 s<= 0x71e)
        if (x8_2 != 0x401 && x8_2 != 0x41e)
            return 0
    else if (x8_2 != 0x71f && x8_2 != 0xb08 && x8_2 != 0xc15)
        return 0
else if (x8_2 s<= 0xe03)
    uint64_t x8 = zx.q(x8_2 - 0xd0d)
    
    if (x8.d u> 0x22 || (1 << x8 & 0x400000201) == 0)
        return 0
else if (x8_2 != 0xe04 && x8_2 != 0xe0d && x8_2 != 0xf1e)
    return 0

return 1

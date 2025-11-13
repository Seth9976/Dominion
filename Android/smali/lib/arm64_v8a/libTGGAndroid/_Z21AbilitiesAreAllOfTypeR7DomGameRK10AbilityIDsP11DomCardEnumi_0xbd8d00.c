// 函数: _Z21AbilitiesAreAllOfTypeR7DomGameRK10AbilityIDsP11DomCardEnumi
// 地址: 0xbd8d00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg2 + 0x400) s< 1)
    return 1

if (arg4 s< 1)
    AbilitySource(arg1, zx.q(*arg2))
    return 0

int64_t x22_1 = 0
uint64_t x23_1 = zx.q(arg4)

while (true)
    int32_t i = AbilitySource(arg1, zx.q(*(arg2 + (x22_1 << 2))))
    
    if (*arg3 != i)
        int64_t x9_1 = 1
        int64_t x8_3
        
        do
            x8_3 = x9_1
            
            if (x23_1 == x9_1)
                break
            
            x9_1 = x8_3 + 1
        while (*(arg3 + (x8_3 << 2)) != i)
        
        if (x8_3 u>= x23_1)
            return 0
    
    x22_1 += 1
    
    if (x22_1 s>= sx.q(*(arg2 + 0x400)))
        return 1

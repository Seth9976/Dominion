// 函数: _Z10PileLookupR17TwitterLayoutFull11DomCardEnumS1_
// 地址: 0xbab710
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_2 = zx.q(*(arg1 + 0x2a0))
void* __offset(TwitterLayoutFull, 0x62c) result

if (i_2.d s>= 1)
    result = arg1
    uint64_t i
    
    do
        if (*result == arg3)
            return result
        
        i = i_2
        i_2 -= 1
        result += 0x38
    while (i != 1)

uint64_t i_3 = zx.q(*(arg1 + 0x544))

if (i_3.d s>= 1)
    result = arg1 + 0x2a4
    uint64_t i_1
    
    do
        if (*result == arg3)
            return result
        
        i_1 = i_3
        i_3 -= 1
        result += 0x38
    while (i_1 != 1)

uint64_t x9 = zx.q(*(arg1 + 0xb52c))

if (x9.d s< 1)
    return nullptr

result = arg1 + 0x62c
uint64_t x10_3 = x9

while (*result != arg3)
    uint64_t temp2_1 = x10_3
    x10_3 -= 1
    result += 0x38
    
    if (temp2_1 == 1)
        result = arg1 + 0x62c
        
        while (true)
            if (*result == arg2)
                return result
            
            uint64_t temp3_1 = x9
            x9 -= 1
            result += 0x38
            
            if (temp3_1 == 1)
                return nullptr

return result

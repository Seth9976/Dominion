// 函数: _Z7stristrPKcS0_
// 地址: 0x1064154
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*arg2) == 0)
    return 

for (uint32_t i = zx.d(*arg1); i != 0; i = zx.d(*arg1))
    int64_t x9_1 = 0
    
    do
        uint32_t x10_1 = zx.d(arg2[x9_1])
        
        if (x10_1 == 0)
            return 
        
        int32_t x8 = i & 0xff
        int32_t x8_1
        
        if (x8 - 0x41 u< 0x1a)
            x8_1 = x8 | 0x20
        else
            x8_1 = x8
        
        uint32_t x10_2
        
        if (x10_1 - 0x41 u< 0x1a)
            x10_2 = x10_1 | 0x20
        else
            x10_2 = x10_1
        
        if (x8_1 != x10_2)
            break
        
        i = zx.d(arg1[x9_1 + 1])
        x9_1 += 1
    while (i != 0)
    
    if (zx.d(arg2[x9_1]) == 0)
        break
    
    arg1 = &arg1[1]

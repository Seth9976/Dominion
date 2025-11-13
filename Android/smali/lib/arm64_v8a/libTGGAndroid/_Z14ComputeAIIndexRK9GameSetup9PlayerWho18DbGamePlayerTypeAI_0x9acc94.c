// 函数: _Z14ComputeAIIndexRK9GameSetup9PlayerWho18DbGamePlayerTypeAI
// 地址: 0x9acc94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1
int32_t x9

if (*(arg1 + 0x60) != 3 || *(arg1 + 0x64) != arg3)
    x8_1 = 0
    x9 = 0
    
    if (*(arg1 + 0x28c) == 3)
    label_9acce0:
        
        if (*(arg1 + 0x290) == arg3)
            if (arg2 s> 1)
                x8_1 += 1
            
            x9 += 1
else
    x8_1 = arg2 s> 0 ? 1 : 0
    x9 = 1
    
    if (*(arg1 + 0x28c) == 3)
        goto label_9acce0

if (*(arg1 + 0x4b8) == 3 && *(arg1 + 0x4bc) == arg3)
    if (arg2 s> 2)
        x8_1 += 1
    
    x9 += 1

if (*(arg1 + 0x6e4) == 3 && *(arg1 + 0x6e8) == arg3)
    if (arg2 s> 3)
        x8_1 += 1
    
    x9 += 1

if (*(arg1 + 0x910) == 3 && *(arg1 + 0x914) == arg3)
    if (arg2 s> 4)
        x8_1 += 1
    
    x9 += 1

if (*(arg1 + 0xb3c) == 3 && *(arg1 + 0xb40) == arg3)
    if (arg2 s> 5)
        x8_1 += 1
    
    x9 += 1

if (*(arg1 + 0xd68) == 3 && *(arg1 + 0xd6c) == arg3)
    if (arg2 s> 6)
        x8_1 += 1
    
    x9 += 1

if (*(arg1 + 0xf94) == 3 && *(arg1 + 0xf98) == arg3)
    if (arg2 s> 7)
        x8_1 += 1
    
    x9 += 1

if (x9 s< 2)
    return 0

return zx.q(x8_1 + 1)

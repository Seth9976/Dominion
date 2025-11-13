// 函数: _Z23ComputeGuestPlayerIndexRK9GameSetupRK15PlayerConfig_V1
// 地址: 0x9acb4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x10_18 = *(arg1 + 0x60)
int32_t x9 = x10_18 == 0x3e9 ? 1 : 0
int32_t x8_2 = x9 & (arg1 + 0x4c u< arg2 ? 1 : 0)

if (*(arg1 + 0x28c) == 0x3e9)
    if (arg1 + 0x278 u< arg2)
        x8_2 += 1
    
    x9 = x10_18 == 0x3e9 ? 2 : 1
    
    if (*(arg1 + 0x4b8) != 0x3e9)
        goto label_9acb84
    
    goto label_9acbf4

if (*(arg1 + 0x4b8) == 0x3e9)
label_9acbf4:
    
    if (arg1 + 0x4a4 u< arg2)
        x8_2 += 1
    
    x9 += 1
    
    if (*(arg1 + 0x6e4) != 0x3e9)
        goto label_9acb90
    
    goto label_9acc10

label_9acb84:

if (*(arg1 + 0x6e4) == 0x3e9)
label_9acc10:
    
    if (arg1 + 0x6d0 u< arg2)
        x8_2 += 1
    
    x9 += 1
    
    if (*(arg1 + 0x910) != 0x3e9)
        goto label_9acb9c
    
    goto label_9acc2c

label_9acb90:

if (*(arg1 + 0x910) == 0x3e9)
label_9acc2c:
    
    if (arg1 + 0x8fc u< arg2)
        x8_2 += 1
    
    x9 += 1
    
    if (*(arg1 + 0xb3c) != 0x3e9)
        goto label_9acba8
    
    goto label_9acc48

label_9acb9c:

if (*(arg1 + 0xb3c) == 0x3e9)
label_9acc48:
    
    if (arg1 + 0xb28 u< arg2)
        x8_2 += 1
    
    x9 += 1
    
    if (*(arg1 + 0xd68) != 0x3e9)
        goto label_9acbb4
    
    goto label_9acc64

label_9acba8:

if (*(arg1 + 0xd68) == 0x3e9)
label_9acc64:
    
    if (arg1 + 0xd54 u< arg2)
        x8_2 += 1
    
    x9 += 1
    
    if (*(arg1 + 0xf94) != 0x3e9)
        goto label_9acbbc
else
label_9acbb4:
    
    if (*(arg1 + 0xf94) != 0x3e9)
    label_9acbbc:
        
        if (x9 == 1)
            return 0
        
        return zx.q(x8_2 + 1)

int32_t x8_3

if (arg1 + 0xf80 u< arg2)
    x8_3 = x8_2 + 1
else
    x8_3 = x8_2

if (x9 == 0)
    return 0

return zx.q(x8_3 + 1)

// 函数: _Z29ThroneRoom_Achievement_OnPlayPK6CardIDi
// 地址: 0xa26eec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x8_1 = *(*(DomGetContext() + 0x10) + 0x10)
int32_t* x8_3
int32_t x19

if (x8_1 != 0 && *x8_1 == 2)
    x19 = x8_1[7]
    x8_3 = *(*(DomGetContext() + 0x10) + 0x10)
    
    if (x8_3 != 0)
        goto label_a26f3c
    
    goto label_a26f5c

x19 = 0
x8_3 = *(*(DomGetContext() + 0x10) + 0x10)
int32_t x20

if (x8_3 == 0)
label_a26f5c:
    x20 = 0
    
    if ((CardIs(zx.q(x19), 0x20f) & 1) == 0)
        return 0
else
label_a26f3c:
    int32_t x9_2 = 2
    
    while (true)
        if (*x8_3 != 2)
            goto label_a26f5c
        
        int32_t temp0_1 = x9_2
        x9_2 -= 1
        
        if (temp0_1 == 1)
            x20 = x8_3[7]
            
            if ((CardIs(zx.q(x19), 0x20f) & 1) != 0)
                break
            
            return 0
        
        x8_3 = *(x8_3 + 0x10)
        
        if (x8_3 == 0)
            goto label_a26f5c

return CardIs(zx.q(x20), 0x20f) __tailcall

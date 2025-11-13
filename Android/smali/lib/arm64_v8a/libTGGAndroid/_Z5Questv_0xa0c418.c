// 函数: _Z5Questv
// 地址: 0xa0c418
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_38 = 0
int32_t x0 = CountWhereType(0x3ea, 0x10)
int32_t x0_1 = CountWhereType(0x3ea, 0x20)
int32_t x0_2 = CountHand()
int32_t x8_1 = (x0 s> 1 ? 1 : 0) & (x0_1 s> 0 ? 1 : 0)
int32_t x22

if (x8_1 == 1 && x0_2 s> 5)
    x22 = 0x85
else if (x0 s< 2 || x0_2 s<= 5)
    int32_t x11_1 = x0_2 s> 5 ? 1 : 0
    int32_t x11_2 = (x0_1 s> 0 ? 1 : 0) & x11_1
    int32_t x9_1
    
    x9_1 = x11_2 != 0 ? 0x8b : 0x88
    
    if ((x8_1 | x11_2) != 0)
        x22 = x9_1
    else
        x22 = 0x89
    
    if (((x11_1 | x8_1) & 1) == 0)
        int32_t x8_3
        
        x8_3 = x0_1 s> 0 ? 0x86 : 0x89
        
        x22 = x0 s> 1 ? 0x87 : x8_3
else
    x22 = 0x8a

int32_t x21_1

x21_1 = x0_2 s< 6 ? x0_2 : 6

CardsHand()
int128_t var_2600
__builtin_memset(&var_2600, 0, 0x38)
var_2600.d = x22
int128_t var_25f0
var_25f0:0xc.d = x0_2
void var_25c8
ChooseCardsRange(&var_25c8, 0, x21_1, 0x17, &var_2600, 5, 0, 0)
void var_1940
int32_t var_cb8
int64_t result = memcpy(&var_cb8, &var_1940, 0xc84)
int32_t x8_4 = var_38
int32_t var_cb4

if (x8_4 == x0_2)
label_a0c5ec:
    result = DiscardCards(&var_cb8, 0x3ea, 0xb, 7, 0)
    int32_t x8_6 = var_38
    
    if (x8_6 == 6)
        NotifyResult(1)
        return GainCard(0x106, 0x476, 0, 0, 4)
    
    if (x8_6 == 1)
        result = CardIs(zx.q(var_cb8), 0x20)
        
        if ((result.d & 1) != 0)
            NotifyResult(1)
            return GainCard(0x106, 0x476, 0, 0, 4)
        
        x8_6 = var_38
    
    if (x8_6 == 2)
        result = CardIs(zx.q(var_cb8), 0x100)
        
        if ((result.d & 1) != 0)
            result = CardIs(zx.q(var_cb4), 0x100)
            
            if ((result.d & 1) != 0)
                NotifyResult(1)
                return GainCard(0x106, 0x476, 0, 0, 4)
else
    if (x8_4 != 1)
        goto label_a0c5a4
    
    result = CardIs(zx.q(var_cb8), 0x20)
    
    if ((result.d & 1) != 0)
        goto label_a0c5ec
    
    x8_4 = var_38
    
    if (x8_4 != 1)
        goto label_a0c5a4
    
    result = CardIs(zx.q(var_cb8), 0x100)
    
    if (x0 == 1 && (result.d & 1) != 0)
        goto label_a0c5ec
    
    x8_4 = var_38
label_a0c5a4:
    
    if (x8_4 == 2)
        result = CardIs(zx.q(var_cb8), 0x100)
    
    if (x8_4 == 2 && (result.d & 1) != 0)
        result = CardIs(zx.q(var_cb4), 0x100)
        
        if ((result.d & 1) != 0 || var_38 == 6)
            goto label_a0c5ec
    else if (var_38 == 6)
        goto label_a0c5ec
return result

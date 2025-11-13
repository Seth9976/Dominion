// 函数: _Z21DivineWind_SetupFiter11DomCardEnum
// 地址: 0xac36dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((PregameIsLandscape(arg1) & 1) != 0)
    return 0

void* x9 = *(PregameContextGet() + 0x20)
int32_t x8 = *(x9 + 0x28)

if (x8 == 0)
    goto label_ac373c

if (*(x9 + 0x64) == 0)
    x8 = 1
label_ac373c:
    
    if (*(x9 + 0x15c) == 0)
        goto label_ac379c
else
    if (*(x9 + 0xa0) == 0)
        x8 = 2
        
        if (*(x9 + 0x15c) != 0)
            goto label_ac3744
        
        goto label_ac379c
    
    if (*(x9 + 0xdc) != 0)
        x8 = 4
    else
        x8 = 3
    
    if (*(x9 + 0x15c) == 0)
        goto label_ac379c

label_ac3744:

if (*(x9 + 0x160) == 0)
    if (x8 == 3)
        goto label_ac37a8
else if (*(x9 + 0x164) == 0)
    x8 += 2
label_ac379c:
    
    if (x8 == 4)
    label_ac37a8:
        
        if ((PregameHasLandscapeAfterDivineWind(0x4000000000) & 1) == 0
                && (PregameCardIs(zx.q(arg1.d), 0x80000000) & 1) != 0)
            return 0
else if (*(x9 + 0x168) != 0)
    int32_t x9_2
    
    if (*(x9 + 0x16c) != 0)
        x9_2 = 5
    else
        x9_2 = 4
    
    if (x9_2 + x8 == 4)
        goto label_ac37a8
else if (x8 == 1)
    goto label_ac37a8

return 1

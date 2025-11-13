// 函数: _Z16CollectModifiersRK14DomSetupConfigP17DomKingdomModfier
// 地址: 0xb2cc98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0xbfc)

if (x8 == 0)
    goto label_b2ccc8

int32_t x8_1

if (x8 == 1)
    x8_1 = 0
label_b2ccc0:
    *arg2 = x8_1
    x8 = 1
label_b2ccc8:
    int32_t x9_1 = *(arg1 + 0xc00)
    
    if (x9_1 == 0)
        goto label_b2ccf8
    
    int32_t x9_2
    
    if (x9_1 == 1)
        x9_2 = 2
    label_b2ccf0:
        *(arg2 + (zx.q(x8) << 2)) = x9_2
        x8 += 1
    label_b2ccf8:
        int32_t x9_3 = *(arg1 + 0x16f4)
        
        if ((x9_3 & 1) == 0)
            if ((x9_3 & 2) != 0)
                goto label_b2cd5c
            
            goto label_b2cd08
        
        *(arg2 + (zx.q(x8) << 2)) = 4
        x9_3 = *(arg1 + 0x16f4)
        x8 += 1
        
        if ((x9_3 & 2) != 0)
        label_b2cd5c:
            *(arg2 + (zx.q(x8) << 2)) = 5
            x9_3 = *(arg1 + 0x16f4)
            x8 += 1
            
            if ((x9_3 & 6) != 4)
                goto label_b2cd10
            
            goto label_b2cd78
        
    label_b2cd08:
        
        if ((x9_3 & 6) != 4)
        label_b2cd10:
            
            if ((x9_3 & 8) != 0)
                goto label_b2cd8c
            
            goto label_b2cd14
        
    label_b2cd78:
        *(arg2 + (zx.q(x8) << 2)) = 6
        x9_3 = *(arg1 + 0x16f4)
        x8 += 1
        
        if ((x9_3 & 8) != 0)
        label_b2cd8c:
            *(arg2 + (zx.q(x8) << 2)) = 7
            x9_3 = *(arg1 + 0x16f4)
            x8 += 1
            
            if ((x9_3 & 0x10) == 0)
                goto label_b2cd18
            
            goto label_b2cda0
        
    label_b2cd14:
        
        if ((x9_3 & 0x10) == 0)
        label_b2cd18:
            
            if ((x9_3 & 0x20) != 0)
                goto label_b2cdb4
            
            goto label_b2cd1c
        
    label_b2cda0:
        *(arg2 + (zx.q(x8) << 2)) = 8
        x9_3 = *(arg1 + 0x16f4)
        x8 += 1
        
        if ((x9_3 & 0x20) != 0)
        label_b2cdb4:
            *(arg2 + (zx.q(x8) << 2)) = 9
            x8 += 1
            
            if ((*(arg1 + 0x16f4) & 0x40) == 0)
                goto label_b2cd24
            
            goto label_b2cdcc
        
    label_b2cd1c:
        
        if ((x9_3 & 0x40) != 0)
        label_b2cdcc:
            *(arg2 + (zx.q(x8) << 2)) = 0xa
            x8 += 1
            
            if (*(arg1 + 0x1710) != 0)
                *(arg2 + (zx.q(x8) << 2)) = 0xb
                x8 += 1
        else
        label_b2cd24:
            
            if (*(arg1 + 0x1710) != 0)
                *(arg2 + (zx.q(x8) << 2)) = 0xb
                x8 += 1
        
        return zx.q(x8)
    
    if (x9_1 == 2)
        x9_2 = 3
        goto label_b2ccf0
else if (x8 == 2)
    x8_1 = 1
    goto label_b2ccc0
pthread_kill(pthread_self(), 6)
GameSetup* x0_2
DomExpansion* x1
bool x2
x0_2, x1, x2 = XNoReturn()
return CollectActiveExpansions(x0_2, x1, x2) __tailcall

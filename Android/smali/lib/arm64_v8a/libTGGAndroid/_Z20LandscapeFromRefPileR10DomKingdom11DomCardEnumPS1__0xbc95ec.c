// 函数: _Z20LandscapeFromRefPileR10DomKingdom11DomCardEnumPS1_
// 地址: 0xbc95ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t i = 0
uint64_t result = 0

do
    void* x10_1 = arg1 + 0x30 + i
    int32_t x11_1 = *(x10_1 - 8)
    
    if (x11_1 == 0)
        break
    
    if (*(x10_1 - 4) != arg2)
        if (*(arg1 + 0x30 + i) == arg2)
            goto label_bc96fc
        
        goto label_bc9630
    
    *(arg3 + (sx.q(result.d) << 2)) = x11_1
    result = zx.q(result.d + 1)
    void* x11_11
    
    if (*(arg1 + 0x30 + i) == arg2)
    label_bc96fc:
        *(arg3 + (sx.q(result.d) << 2)) = *(x10_1 - 8)
        result = zx.q(result.d + 1)
        x11_11 = arg1 + 0x30 + i
        
        if (*(x11_11 + 4) != arg2)
            goto label_bc9644
        
        goto label_bc971c
    
label_bc9630:
    x11_11 = arg1 + 0x30 + i
    
    if (*(x11_11 + 4) != arg2)
    label_bc9644:
        
        if (*(x11_11 + 8) == arg2)
            goto label_bc9738
        
        goto label_bc964c
    
label_bc971c:
    *(arg3 + (sx.q(result.d) << 2)) = *(x10_1 - 8)
    result = zx.q(result.d + 1)
    void* x11_14
    
    if (*(x11_11 + 8) == arg2)
    label_bc9738:
        *(arg3 + (sx.q(result.d) << 2)) = *(x10_1 - 8)
        result = zx.q(result.d + 1)
        x11_14 = arg1 + 0x30 + i
        
        if (*(x11_14 + 0xc) != arg2)
            goto label_bc9660
        
        goto label_bc9758
    
label_bc964c:
    x11_14 = arg1 + 0x30 + i
    
    if (*(x11_14 + 0xc) != arg2)
    label_bc9660:
        
        if (*(x11_14 + 0x10) == arg2)
            goto label_bc9774
        
        goto label_bc9668
    
label_bc9758:
    *(arg3 + (sx.q(result.d) << 2)) = *(x10_1 - 8)
    result = zx.q(result.d + 1)
    void* x11_17
    
    if (*(x11_14 + 0x10) == arg2)
    label_bc9774:
        *(arg3 + (sx.q(result.d) << 2)) = *(x10_1 - 8)
        result = zx.q(result.d + 1)
        x11_17 = arg1 + 0x30 + i
        
        if (*(x11_17 + 0x14) != arg2)
            goto label_bc967c
        
        goto label_bc9794
    
label_bc9668:
    x11_17 = arg1 + 0x30 + i
    
    if (*(x11_17 + 0x14) != arg2)
    label_bc967c:
        
        if (*(x11_17 + 0x18) == arg2)
            goto label_bc97b0
        
        goto label_bc9684
    
label_bc9794:
    *(arg3 + (sx.q(result.d) << 2)) = *(x10_1 - 8)
    result = zx.q(result.d + 1)
    void* x11_20
    
    if (*(x11_17 + 0x18) == arg2)
    label_bc97b0:
        *(arg3 + (sx.q(result.d) << 2)) = *(x10_1 - 8)
        result = zx.q(result.d + 1)
        x11_20 = arg1 + 0x30 + i
        
        if (*(x11_20 + 0x1c) != arg2)
            goto label_bc9698
        
        goto label_bc97d0
    
label_bc9684:
    x11_20 = arg1 + 0x30 + i
    
    if (*(x11_20 + 0x1c) != arg2)
    label_bc9698:
        
        if (*(x11_20 + 0x20) == arg2)
            goto label_bc97ec
        
        goto label_bc96a0
    
label_bc97d0:
    *(arg3 + (sx.q(result.d) << 2)) = *(x10_1 - 8)
    result = zx.q(result.d + 1)
    void* x11_23
    
    if (*(x11_20 + 0x20) == arg2)
    label_bc97ec:
        *(arg3 + (sx.q(result.d) << 2)) = *(x10_1 - 8)
        result = zx.q(result.d + 1)
        x11_23 = arg1 + 0x30 + i
        
        if (*(x11_23 + 0x24) != arg2)
            goto label_bc96b4
        
        goto label_bc980c
    
label_bc96a0:
    x11_23 = arg1 + 0x30 + i
    
    if (*(x11_23 + 0x24) != arg2)
    label_bc96b4:
        
        if (*(x11_23 + 0x28) == arg2)
            goto label_bc9828
        
        goto label_bc96bc
    
label_bc980c:
    *(arg3 + (sx.q(result.d) << 2)) = *(x10_1 - 8)
    result = zx.q(result.d + 1)
    void* x11_26
    
    if (*(x11_23 + 0x28) == arg2)
    label_bc9828:
        *(arg3 + (sx.q(result.d) << 2)) = *(x10_1 - 8)
        result = zx.q(result.d + 1)
        x11_26 = arg1 + 0x30 + i
        
        if (*(x11_26 + 0x2c) != arg2)
            goto label_bc96d0
        
        goto label_bc9848
    
label_bc96bc:
    x11_26 = arg1 + 0x30 + i
    
    if (*(x11_26 + 0x2c) == arg2)
    label_bc9848:
        *(arg3 + (sx.q(result.d) << 2)) = *(x10_1 - 8)
        result = zx.q(result.d + 1)
        
        if (*(x11_26 + 0x30) == arg2)
            *(arg3 + (sx.q(result.d) << 2)) = *(x10_1 - 8)
            result = zx.q(result.d + 1)
    else
    label_bc96d0:
        
        if (*(x11_26 + 0x30) == arg2)
            *(arg3 + (sx.q(result.d) << 2)) = *(x10_1 - 8)
            result = zx.q(result.d + 1)
    
    i += 0x3c
while (i != 0xf0)

return result

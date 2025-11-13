// 函数: _Z18CoallesceSameCardsPP6DomGfxiPi
// 地址: 0xb0ec54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s< 1)
    return 0

int64_t x22_1 = 0
uint64_t result = 0
uint64_t x23_1 = zx.q(arg2)

while (true)
    void* x8_4 = arg1[x22_1]
    uint64_t x21_1 = zx.q(result.d)
    int32_t x10_1 = *(x8_4 + 0x2c)
    int32_t i
    
    if (x10_1 == 3)
        while (true)
            i = *(x8_4 + 0x30)
            
            if (i == 0x70d)
                break
            
            if (i == 0x718)
                break
            
            int32_t x8_5 = *(x8_4 + 0x70)
            
            if (x8_5 == 0)
                break
            
            x8_4 = *(gDomClient + 0x205e0) + zx.q(x8_5.w) * 0x21d8
            x10_1 = *(x8_4 + 0x2c)
            
            if (x10_1 != 3)
                goto label_b0ed30
        
        goto label_b0ed60
    
label_b0ed30:
    
    if (x10_1 != 5)
        if (x10_1 == 1)
            i = *(x8_4 + 0x170)
            
            if (x21_1.d s>= 1)
                goto label_b0ed68
            
            goto label_b0ecc4
        
        if (x10_1 != 0)
            break
        
        i = CardWhat(gDomClient + 0x20728, zx.q(*(x8_4 + 0x98)))
        
        if (x21_1.d s>= 1)
            goto label_b0ed68
        
        goto label_b0ecc4
    
    i = *(x8_4 + 0x204)
label_b0ed60:
    int32_t var_ce0[0x320]
    
    if (x21_1.d s< 1)
    label_b0ecc4:
        var_ce0[sx.q(x21_1.d)] = i
        result = zx.q(x21_1.d + 1)
        arg1[sx.q(x21_1.d)] = arg1[x22_1]
        arg3[sx.q(x21_1.d)] = 1
        x22_1 += 1
        
        if (x22_1 != x23_1)
            continue
    else
    label_b0ed68:
        int64_t x8_7 = 0
        int64_t x9_3 = 0
        
        while (var_ce0[x9_3] != i)
            x9_3 += 1
            x8_7 += 0x100000000
            
            if (x21_1 == x9_3)
                goto label_b0ecc4
        
        if (x9_3.d == 0xffffffff)
            goto label_b0ecc4
        
        int64_t x8_8 = x8_7 s>> 0x1e
        result = zx.q(x21_1.d)
        *(arg3 + x8_8) += 1
        x22_1 += 1
        
        if (x22_1 != x23_1)
            continue
    return result

pthread_kill(pthread_self(), 6)
uint64_t x0_2
DomGfx** x1_1
x0_2, x1_1 = XNoReturn()
return GetCardsHere(x0_2, x1_1) __tailcall

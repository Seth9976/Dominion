// 函数: _Z25Pawn_Achievement_OnOptionPK13DomOKTypeEnumi
// 地址: 0xa84db4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char x19
char x20
int32_t x21
int32_t x22

if (arg2 s< 1)
    x21 = 0
    x19 = 0
    x20 = 0
    x22 = 0
else
    int32_t x9_1 = *arg1
    uint64_t x8_1 = zx.q(arg2)
    
    if (x9_1 != 0x17)
        int64_t x11_1 = 1
        int64_t x10_1
        
        do
            x10_1 = x11_1
            
            if (x8_1 == x11_1)
                break
            
            x11_1 = x10_1 + 1
        while (*(arg1 + (x10_1 << 2)) != 0x17)
        
        x19 = (x10_1 u< x8_1 ? 1 : 0).b
        
        if (x9_1 != 0x16)
            goto label_a84e2c
        
        x20 = 1
    label_a84e64:
        int64_t x11_5 = 1
        int64_t x10_3
        
        do
            x10_3 = x11_5
            
            if (x8_1 == x11_5)
                break
            
            x11_5 = x10_3 + 1
        while (*(arg1 + (x10_3 << 2)) != 0x19)
        
        x21 = x10_3 u< x8_1 ? 1 : 0
        
        if (x9_1 != 0x18)
            goto label_a84e9c
        
        x22 = 1
    else
        x19 = 1
    label_a84e2c:
        int64_t x11_3 = 1
        int64_t x10_2
        
        do
            x10_2 = x11_3
            
            if (x8_1 == x11_3)
                break
            
            x11_3 = x10_2 + 1
        while (*(arg1 + (x10_2 << 2)) != 0x16)
        
        x20 = (x10_2 u< x8_1 ? 1 : 0).b
        
        if (x9_1 != 0x19)
            goto label_a84e64
        
        x21 = 1
    label_a84e9c:
        int64_t x10_4 = 1
        int64_t x9_2
        
        do
            x9_2 = x10_4
            
            if (x8_1 == x10_4)
                break
            
            x10_4 = x9_2 + 1
        while (*(arg1 + (x9_2 << 2)) != 0x18)
        
        x22 = x9_2 u< x8_1 ? 1 : 0

char* x0 = DomAchievementDataGet()
char x10_7 = x0[1] | (x21.b & x19)
int32_t x11_9 = zx.d(x0[5]) | (x21 & x22)
char x8_3 = *x0 | (x19 & x20)
char x9_4 = x0[4]
char x12_1 = x0[2] | (x19 & x22.b)
char x13_1 = x0[3] | (x21.b & x20)
*x0 = x8_3
x0[1] = x10_7
char x9_5 = x9_4 | (x20 & x22.b)
x0[4] = x9_5
int32_t x8_9 = (zx.d(x8_3) != 0 ? 1 : 0) & (zx.d(x10_7) != 0 ? 1 : 0) & (zx.d(x12_1) != 0 ? 1 : 0)
    & (zx.d(x13_1) != 0 ? 1 : 0) & (zx.d(x9_5) != 0 ? 1 : 0) & (x11_9 != 0 ? 1 : 0)
x0[2] = x12_1
x0[3] = x13_1
x0[5] = x11_9.b
return zx.q(x8_9)

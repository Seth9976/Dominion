// 函数: _Z16MCTS_ExtractBestRK7DomGameR8DomYield
// 地址: 0x9ff094
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x22 = sx.q(*(arg2 + 0x58))
uint64_t x21 = *((x22 << 3) + 0x14a7240)
int32_t var_54 = 0xffffffff
int32_t x23 = *(x21 + 0xd8)
int64_t x3
int32_t x4
int32_t x17
x3, x4, x17 = sub_9fd5f0(arg1, x21, arg2)

if (x23 != *(x21 + 0xd8))
    x3, x4, x17 = sub_9fd5f0(arg1, x21, arg2)

int32_t x0_2 = sub_9ff34c(x21, x22.d, &var_54, x3, x4, x17)
uint64_t x9 = zx.q(*(x21 + 0xd8))
*(x21 + 0xe0)

if (x9.d s>= 1)
    float* x10_1 = *(x21 + 0xd0)
    int32_t x12_1
    int64_t i_5
    
    if (x9.d != 1)
        i_5 = x9 & 0xfffffffe
        int32_t x12_2 = 0
        int32_t x13_1 = 0
        void* x14_1 = &x10_1[0x35]
        int64_t i_4 = i_5
        int64_t i
        
        do
            int32_t x16_1 = *(x14_1 - 0x70)
            int32_t x17_1 = *x14_1
            x14_1 += 0xe0
            x12_2 |= x16_1 s> 0 ? 1 : 0
            i = i_4
            i_4 -= 2
            x13_1 |= x17_1 s> 0 ? 1 : 0
        while (i != 2)
        x12_1 = x13_1 | x12_2
        
        if (i_5 != x9)
            goto label_9ff1a4
    else
        i_5 = 0
        x12_1 = 0
    label_9ff1a4:
        int64_t i_3 = x9 - i_5
        int32_t* x11_2 = x10_1 + i_5 * 0x70 + 0x64
        int64_t i_1
        
        do
            int32_t x14_2 = *x11_2
            x11_2 = &x11_2[0x1c]
            i_1 = i_3
            i_3 -= 1
            x12_1 |= x14_2 s> 0 ? 1 : 0
        while (i_1 != 1)
    float v0_1
    float v1_1
    
    if ((x12_1 & 1) == 0)
        int64_t x12_4 = 0
        void* x10_3 = &x10_1[x22 + 0xb]
        v0_1 = float.s(0xc479c000)
        
        do
            v1_1 = *x10_3
            x10_3 += 0x70
            v1_1 - v0_1
            x12_4 += 1
            
            if (v1_1 > v0_1)
                v0_1 = v1_1
        while (x9 != x12_4)
    else
        int64_t x12_3 = 0
        v0_1 = float.s(0xc479c000)
        
        do
            if (x10_1[0x19] != 0)
                v1_1 = *(x10_1 + (x22 << 2) + 0x2c)
                
                if (not(v1_1 <= v0_1))
                    v0_1 = v1_1
            
            x12_3 += 1
            x10_1 = &x10_1[0x1c]
        while (x9 != x12_3)

int64_t x10_4 = x21 + (x22 << 2)
printf("AI %d move %s%s(%f->%f): ", zx.q(x22.d), (fconvert.d(*x10_4)).d, 
    (fconvert.d(*(x10_4 + 0x94))).d)
char var_454[0x400]
sub_9f45c0(&var_454, x21, *(x21 + 0xd0) + muls.dp.d(x0_2, 0x70))
printf("%s ", &var_454)

if (*(x21 + 0xd8) s>= 1)
    int64_t i_2 = 0
    int64_t x26_1 = 0x50
    
    do
        if (zx.q(x0_2) == i_2)
            putchar(0x2a)
        
        printf("%d ", zx.q(*(*(x21 + 0xd0) + x26_1)))
        i_2 += 1
        x26_1 += 0x70
    while (i_2 s< sx.q(*(x21 + 0xd8)))

putchar(0xa)
return sub_9f5644(arg1, arg2, *(x21 + 0xd0) + sx.q(x0_2) * 0x70)

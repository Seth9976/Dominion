// 函数: sub_9fd2ec
// 地址: 0x9fd2ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

double v8
double var_60 = v8
uint64_t x26
uint64_t var_40 = x26
int64_t x21_1 = sx.q(*(arg2 + 0xb4))
char* x23 = &data_14a71b0
*(arg2 + 0xb0) += 1
void* x20 = arg2
DomGame* x19 = arg1
int64_t x8_7
float v0
float v2

if (zx.d(*(x21_1 * 0x84 + 0x14a76cc)) == 0)
    StateInput var_14730
    DomGame* x19_1
    float* x20_1
    void* x22_2
    x19_1, x20_1, x22_2, x23 = sub_9fa200(x19, arg3, x21_1.d, &var_14730)
    int32_t x8_8 = *(x22_2 + 0x5c)
    uint64_t x1_1 = zx.q(*(x22_2 + 0x60))
    
    if (x8_8 == 3)
        x1_1 = zx.q(AbilitySourceCard(x19_1, x1_1))
    else if (x8_8 != 2)
        x1_1 = 0
    
    int32_t var_14770_1 = x1_1.d
    float var_14760[0x6]
    float var_14748[0x6]
    ComputeNet(zx.q(x20_1[0x2d]), &var_14730, x20_1, &var_14748, &var_14760, 
        zx.q(*(x19_1 + 0xd40)), zx.q(*(x22_2 + 0x58)), zx.q(*(x22_2 + 0x48)))
    x19, x20, x21_1 = sub_a05c90(x19_1, &var_14730, x20_1)
    sub_a06048(x19, &var_14730, x20, x26)
    *(x20 + (sx.q(*(x19 + 0x19d4)) << 2) + 0x30) = 0x3f800000
    uint64_t x8_11 = zx.q(*(x19 + 0xd40))
    
    if (x8_11.d s>= 1)
        int64_t x24_1 = 0
        
        do
            double v0_1
            v0_1.d = var_14748[x24_1]
            v0_1.d = fconvert.s(asinh(fconvert.d(v0_1.d) / fconvert.d(10.0))
                * float.d(0x3fc3333333333333))
            *(x20 + 0x48 + (x24_1 << 2)) = v0_1.d
            x8_11 = sx.q(*(x19 + 0xd40))
            x24_1 += 1
        while (x24_1 s< x8_11)
    
    int64_t x22_3 = (x8_11 & 0xffffffff) << 0x20 s>> 0x1e
    float var_80
    memcpy(&var_80, &var_14760, x22_3)
    std::__ndk1::greater<float> var_68
    std::__ndk1::__sort<std::__ndk1::greater<float>&, float*>(&var_80, &var_80 + x22_3, &var_68)
    x8_7 = zx.q(*(x19 + 0xd40))
    
    if (x8_7.d s>= 1)
        v0 = var_80
        int64_t x9_2 = 0
        
        do
            v2 = var_14760[x9_2]
            x9_2 += 1
            float v3
            float var_7c
            
            v3 = v2 == v0 ? var_7c : v0
            (x20 + 0x60)[x9_2] = v2 - v3
            x8_7 = sx.q(*(x19 + 0xd40))
        while (x9_2 s< x8_7)
else
    uint64_t x9_1 = zx.q(*(x19 + 0xd40))
    
    if (x9_1.d s>= 1)
        int64_t x8_4 = 0
        
        do
            *(x20 + (x8_4 << 2)) = fconvert.s(1f) / float.s(x9_1.d)
            x9_1 = sx.q(*(x19 + 0xd40))
            x8_4 += 1
        while (x8_4 s< x9_1)
    
    *(x20 + (sx.q(*(x19 + 0x19d4)) << 2) + 0x30) = 0x3f800000
    x8_7 = zx.q(*(x19 + 0xd40))

data_14a71c0 += 1

if (x8_7.d s< 1)
    return 

v0 = *(x20 + 0x78)
void* x14_1 = x23 + x21_1 * 0x84
int64_t i = 0
void* x9_3 = x20 + 0x60

do
    float v5 = *(x9_3 - 0x60)
    v2 = v5 + *(x14_1 + 0x530) * *(x9_3 - 0x48) + *(x14_1 + 0x538) * *(x9_3 - 0x30)
        + *(x14_1 + 0x53c) * *(x9_3 - 0x18) + *(x14_1 + 0x534) * v0 + *(x14_1 + 0x540) * *x9_3
    
    if (v5 == fconvert.s(1f))
        v2 = v2 + float.s(0x3dcccccd)
    
    *(x9_3 + 0x1c) = v2
    *(x9_3 + 0x34) = v2
    i += 1
    x9_3 += 4
while (i s< sx.q(*(x19 + 0xd40)))

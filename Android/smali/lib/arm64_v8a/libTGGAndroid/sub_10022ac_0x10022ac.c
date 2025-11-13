// 函数: sub_10022ac
// 地址: 0x10022ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = arg1[2].d
int32_t x8

if (x9 s>= 0x10)
    x8 = *(arg1 + 0x14)
label_1002314:
    uint32_t x10_3 = zx.d(*(arg2 + ((zx.q(x8) & 0x1ff) << 1)))
    
    if (x10_3 != 0)
        uint32_t x11_4 = x10_3 u>> 9
        arg1[2].d = x9 - x11_4
        *(arg1 + 0x14) = x8 u>> x11_4
        return zx.q(x10_3) & 0x1ff
    
    int64_t x10_4 = 0
    uint32_t x11_6 = __rbit(x8) u>> 0x10
    int32_t x13_1
    
    do
        x13_1 = *(arg2 + 0x448 + (x10_4 << 2))
        x10_4 += 1
    while (x11_6 s>= x13_1)
    
    if (x10_4.d == 7)
        return 0xffffffff
    
    void* x13_3 = arg2 + (zx.q(x10_4.d + 9) << 1)
    int64_t x11_9 =
        zx.q(*(x13_3 + 0x464)) + sx.q((x11_6 u>> (7 - x10_4.d)) - zx.d(*(x13_3 + 0x400)))
    
    if (x10_4.d - zx.d(*(arg2 + x11_9 + 0x484)) == 0xfffffff7)
        arg1[2].d = x9 - x10_4.d - 9
        *(arg1 + 0x14) = x8 u>> (x10_4.d + 9)
        return zx.q(*(arg2 + (x11_9 << 1) + 0x5a4))
else
    x8 = *(arg1 + 0x14)
    int32_t x10_1 = x9
    
    while (x8 u>> x10_1 == 0)
        char* x9_3 = *arg1
        uint32_t x9_1
        
        if (x9_3 u< arg1[1])
            *arg1 = &x9_3[1]
            x9_1 = zx.d(*x9_3)
        else
            x9_1 = 0
        
        x9 = x10_1 + 8
        bool cond:0_1 = x10_1 s>= 0x11
        x8 |= x9_1 << x10_1
        x10_1 = x9
        arg1[2].d = x9
        *(arg1 + 0x14) = x8
        
        if (cond:0_1)
            goto label_1002314
    
    __assert2("C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image.h", 0xf39, 
        "void stbi__fill_bits(stbi__zbuf *)", "z->code_buffer < (1U << z->num_bits)")
int64_t result
int128_t v0
result, v0 = __assert2(
    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image.h", 0xf55, 
    "int stbi__zhuffman_decode_slowpath(stbi__zbuf *, stbi__zhuffman *)", "z->size[b] == s")
v0 = data_71c430
int64_t x8_4 = *V0
int32_t x11_10 = *(V0 + 8)
*(TI + 0x10) = 0x3f800000
*TI = v0
*(TI + 0x14) = x8_4
*(TI + 0x1c) = x11_10
return result

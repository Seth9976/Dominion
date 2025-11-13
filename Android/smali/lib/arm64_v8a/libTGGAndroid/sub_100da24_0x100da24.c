// 函数: sub_100da24
// 地址: 0x100da24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = arg1[1].d
int32_t x10 = *(arg1 + 0xc)
int64_t x9 = sx.q(x8)
int32_t x11
uint32_t x12_2

if (x8 s< x10)
    x11 = x8 + 1
    arg1[1].d = x11
    x12_2 = zx.d(*(*arg1 + x9)) << 8
    
    if (x11 s< x10)
        goto label_100daac
    
    goto label_100da58

x12_2 = 0
x11 = x8
uint32_t x13

if (x11 s< x10)
label_100daac:
    arg1[1].d = x11 + 1
    uint32_t x13_3 = zx.d(*(*arg1 + sx.q(x11)))
    x11 += 1
    x13 = x12_2 | x13_3
    
    if (x13 == 0)
        goto label_100da68
    
    goto label_100dacc

label_100da58:
x13 = x12_2

if (x13 != 0)
label_100dacc:
    uint32_t x11_1
    int64_t x12_4
    
    if (x11 s< x10)
        x12_4 = *arg1
        arg1[1].d = x11 + 1
        x11_1 = zx.d(*(x12_4 + sx.q(x11)))
    
    int16_t* x0_3
    int32_t x1_4
    
    if (x11 s>= x10 || x11_1 - 1 u>= 4)
        __assert2(
            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
            0x4a8, "stbtt__buf stbtt__cff_get_index(stbtt__buf *)", "offsize >= 1 && offsize <= 4")
        x0_3, x1_4 = __assert2(
            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
            0x478, "void stbtt__buf_seek(stbtt__buf *, int)", "!(o > b->size || o < 0)")
        return sub_100dbcc(x0_3, x1_4) __tailcall
    
    int32_t x13_4 = x11 + 1 + x13 * x11_1
    
    if ((x13_4 & 0x80000000) != 0 || x10 s< x13_4)
        x0_3, x1_4 = __assert2(
            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
            0x478, "void stbtt__buf_seek(stbtt__buf *, int)", "!(o > b->size || o < 0)")
        return sub_100dbcc(x0_3, x1_4) __tailcall
    
    int32_t x14_3 = 0
    arg1[1].d = x13_4
    
    while (true)
        if (x13_4 s< x10)
            arg1[1].d = x13_4 + 1
            uint32_t x15_2 = zx.d(*(x12_4 + sx.q(x13_4)))
            x13_4 += 1
            uint32_t temp0_1 = x11_1
            x11_1 -= 1
            x14_3 = x14_3 << 8 | x15_2
            
            if (temp0_1 == 1)
                break
        else
            uint32_t temp1_1 = x11_1
            x11_1 -= 1
            x14_3 <<= 8
            
            if (temp1_1 == 1)
                break
    
    int32_t x11_2 = x14_3 + x13_4
    x11 = x11_2 - 1
    
    if (x11_2 - 1 s< 0 || x10 s< x11)
        x0_3, x1_4 = __assert2(
            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
            0x478, "void stbtt__buf_seek(stbtt__buf *, int)", "!(o > b->size || o < 0)")
        return sub_100dbcc(x0_3, x1_4) __tailcall
    
    arg1[1].d = x11
    
    if ((((x11 - x8) | x8) & 0x80000000) != 0)
        return 0
else
label_100da68:
    
    if ((((x11 - x8) | x8) & 0x80000000) != 0)
        return 0

if (x10 s< x8)
    return 0

if (x10 s< x11)
    return 0

return *arg1 + x9

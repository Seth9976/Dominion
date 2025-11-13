// 函数: _Z26ImageBufferCopyToNewFormatP9ImageSpecS0_
// 地址: 0xf7430c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i_8 = *(arg2 + 8)
int32_t i_5 = *(arg2 + 0xc)
int32_t i_7 = *(arg1 + 8)
int32_t i_6 = *(arg1 + 0xc)
int32_t x8 = *(arg2 + 0x10)
int32_t i_2

i_2 = i_6 s< i_5 ? i_6 : i_5

int32_t i_3

i_3 = i_7 s< i_8 ? i_7 : i_8

int32_t x8_1
uint8_t* x21
uint8_t* x22
int32_t x23

if ((x8 & 0x80000000) == 0)
    x21 = *arg1
    x22 = *arg2
    x23 = *(arg1 + 0x14)
    x8_1 = *(arg2 + 0x14)
    
    if (x23 != x8_1 && (x23 != 0xa || x8_1 != 0xb))
        goto label_f74490
    
    goto label_f743b0

x23 = *(arg1 + 0x14)
x22 = *arg2 + sx.q(x8 * (i_2 - 1))
x21 = *arg1 + sx.q(*(arg1 + 0x10)) * (sx.q(i_2) - 1)
x8_1 = *(arg2 + 0x14)
int64_t result

if (x23 == x8_1 || (x23 == 0xa && x8_1 == 0xb))
label_f743b0:
    result = TextureFormatBytesPerPixel(zx.q(x23))
    int32_t x8_4
    int32_t x9_1
    
    if (result.d * i_3 s>= 4)
        result = TextureFormatBytesPerPixel(zx.q(x23))
        x8_4 = result.d * i_3
        x9_1 = *(arg1 + 0x10)
        
        if (x9_1 == x8_4 && *(arg2 + 0x10) == x8_4)
            return memcpy(*arg2, *arg1, sx.q(x8_4 * i_2)) __tailcall
    else
        x8_4 = 4
        x9_1 = *(arg1 + 0x10)
        
        if (x9_1 == 4 && *(arg2 + 0x10) == x8_4)
            return memcpy(*arg2, *arg1, sx.q(x8_4 * i_2)) __tailcall
    
    if (x9_1 == neg.d(x8_4) && *(arg2 + 0x10) == x9_1)
        return memcpy(*arg2, *arg1, sx.q(x8_4 * i_2)) __tailcall
    
    if (i_2 s>= 1)
        int32_t i
        
        do
            result = memcpy(x22, x21, sx.q(x8_4))
            i = i_2
            i_2 -= 1
            x21 = &x21[sx.q(*(arg1 + 0x10))]
            x22 = &x22[sx.q(*(arg2 + 0x10))]
        while (i != 1)
else
label_f74490:
    
    if (x23 == 1)
        if (x8_1 == 4)
            goto label_f743b0
    else if (x23 == 4)
        if (x8_1 == 1)
            goto label_f743b0
    else if (x23 == 0xb && x8_1 == 0xa)
        goto label_f743b0
    
    uint64_t x23_2 = zx.q(TextureFormatBytesPerPixel(zx.q(x23)))
    result = TextureFormatBytesPerPixel(zx.q(*(arg2 + 0x14)))
    
    if (i_2 s>= 1 && i_3 s>= 1)
        int32_t x10_5 = 0
        uint64_t fp_1 = zx.q(result.d)
        uint64_t x27_1 = zx.q(x23_2.d)
        int32_t i_4 = i_3
        
        do
            uint8_t* x24_1 = x22
            uint8_t* x25_1 = x21
            int32_t i_1
            
            do
                x23_2 = (x23_2 & 0xffffffff00000000)
                    | zx.q(ImagePixelToRgba(x25_1, zx.q(*(arg1 + 0x14))))
                result = ImageRgbaToPixel(x23_2, x24_1, zx.q(*(arg2 + 0x14)))
                x24_1 = &x24_1[fp_1]
                i_1 = i_3
                i_3 -= 1
                x25_1 = &x25_1[x27_1]
            while (i_1 != 1)
            i_3 = i_4
            x10_5 += 1
            x21 = &x21[sx.q(*(arg1 + 0x10))]
            x22 = &x22[sx.q(*(arg2 + 0x10))]
        while (x10_5 != i_2)

return result

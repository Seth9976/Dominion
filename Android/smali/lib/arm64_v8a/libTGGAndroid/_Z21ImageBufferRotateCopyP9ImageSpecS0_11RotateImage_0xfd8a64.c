// 函数: _Z21ImageBufferRotateCopyP9ImageSpecS0_11RotateImage
// 地址: 0xfd8a64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x24
int64_t var_30 = entry_x24
int32_t x19 = arg3
int32_t x0_1 = TextureFormatBytesPerPixel(zx.q(*(arg1 + 0x14)))
int64_t result = TextureFormatBytesPerPixel(zx.q(*(arg2 + 0x14)))

if (*(arg1 + 0xc) s>= 1)
    int32_t x8_2 = *(arg1 + 8)
    int32_t fp_1 = result.d
    int32_t i = 0
    int32_t x10_1 = result.d * x19
    int32_t var_64_1 = result.d
    
    do
        if (x8_2 s>= 1)
            if (x19 == 1)
                int32_t x27_2 = 0
                int32_t x28_2 = 0
                int32_t x23_2 = -1
                
                do
                    uint8_t* x25_2 = *arg2 + sx.q(i * fp_1 + *(arg2 + 0x10) * (x8_2 + x23_2))
                    entry_x24 = (entry_x24 & 0xffffffff00000000) | zx.q(ImagePixelToRgba(
                        *arg1 + sx.q(x27_2 + i * *(arg1 + 0x10)), zx.q(*(arg1 + 0x14))))
                    result = ImageRgbaToPixel(entry_x24, x25_2, zx.q(*(arg2 + 0x14)))
                    x8_2 = *(arg1 + 8)
                    x28_2 += 1
                    x27_2 += x0_1
                    x23_2 -= 1
                while (x8_2 s> x28_2)
            else if (x19 != 0)
                int32_t fp_3 = 0
                int32_t i_2 = 0
                int32_t x28_3 = not.d(i)
                
                do
                    int32_t i_1
                    int32_t i_3
                    
                    if (x19 == 3)
                        i_3 = *(arg1 + 0xc) + x28_3
                        i_1 = i_2
                    else if (x19 == 2)
                        i_3 = x8_2 + not.d(i_2)
                        i_1 = *(arg1 + 0xc) + x28_3
                    else
                        i_1 = i
                        i_3 = i_2
                        
                        if (x19 != 0)
                            pthread_kill(pthread_self(), 6)
                            ImageSpec* x0_13
                            int32_t x1_6
                            int32_t x2_3
                            x0_13, x1_6, x2_3 = XNoReturn()
                            return ImageLookupSample(x0_13, x1_6, x2_3) __tailcall
                    
                    uint8_t* x25_3 = *arg2 + sx.q(i_3 * var_64_1 + *(arg2 + 0x10) * i_1)
                    entry_x24 = (entry_x24 & 0xffffffff00000000) | zx.q(ImagePixelToRgba(
                        *arg1 + sx.q(fp_3 + i * *(arg1 + 0x10)), zx.q(*(arg1 + 0x14))))
                    result = ImageRgbaToPixel(entry_x24, x25_3, zx.q(*(arg2 + 0x14)))
                    x8_2 = *(arg1 + 8)
                    i_2 += 1
                    fp_3 += x0_1
                while (x8_2 s> i_2)
            else
                int32_t x23_1 = x0_1 * x19
                int32_t x27_1 = x10_1
                int32_t x28_1 = x19
                
                do
                    uint8_t* x25_1 = *arg2 + sx.q(x27_1 + i * *(arg2 + 0x10))
                    entry_x24 = (entry_x24 & 0xffffffff00000000) | zx.q(ImagePixelToRgba(
                        *arg1 + sx.q(x23_1 + i * *(arg1 + 0x10)), zx.q(*(arg1 + 0x14))))
                    result = ImageRgbaToPixel(entry_x24, x25_1, zx.q(*(arg2 + 0x14)))
                    x8_2 = *(arg1 + 8)
                    x28_1 += 1
                    x27_1 += fp_1
                    x23_1 += x0_1
                while (x8_2 s> x28_1)
        
        fp_1 = var_64_1
        i += 1
    while (i s< *(arg1 + 0xc))

return result

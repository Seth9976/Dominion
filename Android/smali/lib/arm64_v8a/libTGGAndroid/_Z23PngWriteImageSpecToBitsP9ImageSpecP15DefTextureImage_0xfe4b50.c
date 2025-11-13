// 函数: _Z23PngWriteImageSpecToBitsP9ImageSpecP15DefTextureImage
// 地址: 0xfe4b50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x14)
int32_t var_40
int32_t x4_1

if (x8 == 5)
    x4_1 = 3
else
    if (x8 != 2)
        if (x8 != 1)
            pthread_kill(pthread_self(), 6)
            ImageSpec* x0_18
            char* x1_6
            x0_18, x1_6 = XNoReturn()
            return PngWriteImageSpecToFile(x0_18, x1_6) __tailcall
        
        var_40.o = *arg1
        int32_t var_30_1 = (*(arg1 + 0x10)).d
        var_30_1 = 2
        int32_t var_38
        int32_t x0_1 = TextureFormatPitch(var_38, 2)
        int32_t var_34
        var_40.q = XMalloc(TextureFormatLinearImageSize(var_38, var_34, 2))
        ImageBufferCopyToNewFormat(arg1, &var_40)
        int32_t var_24
        int64_t x0_7 = stbi_write_png_to_mem(var_40.q, x0_1, var_38, var_34, 4, &var_24)
        
        if (x0_7 != 0)
            int32_t x21_2 = var_24
            int64_t x0_9 = XMalloc(x21_2)
            *(arg2 + 8) = x0_9
            *arg2 = x21_2
            memcpy(x0_9, x0_7, sx.q(x21_2))
            free(x0_7)
        
        return XFree(var_40.q)
    
    x4_1 = 4

int64_t result =
    stbi_write_png_to_mem(*arg1, *(arg1 + 0x10), *(arg1 + 8), *(arg1 + 0xc), x4_1, &var_40)

if (result == 0)
    return result

int32_t x21_3 = var_40
int64_t x0_14 = XMalloc(x21_3)
*(arg2 + 8) = x0_14
*arg2 = x21_3
memcpy(x0_14, result, sx.q(x21_3))
return free(result)

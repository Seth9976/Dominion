// 函数: _Z23PngWriteImageSpecToFileP9ImageSpecPKc
// 地址: 0xfe4ca0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8_1 = zx.q(*(arg1 + 0x14) - 1)

if (x8_1.d u<= 9)
    int32_t x4_1 = 4
    int128_t var_40
    FILE* fp_1
    
    switch (x8_1)
        case 0
            int32_t x8_2 = (*(arg1 + 0x10)).d
            var_40 = *arg1
            int32_t x21_1 = var_40:8.d
            int32_t var_30_1 = x8_2
            var_30_1 = 2
            int32_t x0_1 = TextureFormatPitch(x21_1, 2)
            var_40.q = XMalloc(TextureFormatLinearImageSize(x21_1, var_40:0xc.d, 2))
            ImageBufferCopyToNewFormat(arg1, &var_40)
            int32_t var_24
            int64_t buf =
                stbi_write_png_to_mem(var_40.q, x0_1, var_40:8.d, var_40:0xc.d, 4, &var_24)
            
            if (buf == 0)
                fp_1 = nullptr
            else
                FILE* fp = fopen(arg2, "wb")
                
                if (fp == 0)
                    fp_1 = nullptr
                else
                    fp_1 = 1
                    fwrite(buf, 1, sx.q(var_24), fp)
                    fclose(fp)
                
                free(buf)
            
            XFree(var_40.q)
            return zx.q(fp_1.d)
        case 1
            goto label_fe4da8
        case 4
            x4_1 = 3
        label_fe4da8:
            int64_t buf_1 = stbi_write_png_to_mem(*arg1, *(arg1 + 0x10), *(arg1 + 8), 
                *(arg1 + 0xc), x4_1, &var_40)
            
            if (buf_1 == 0)
                fp_1 = nullptr
            else
                FILE* fp_2 = fopen(arg2, "wb")
                fp_1 = fp_2
                
                if (fp_2 != 0)
                    fwrite(buf_1, 1, sx.q(var_40.d), fp_1)
                    fclose(fp_1)
                    fp_1 = 1
                
                free(buf_1)
            
            return zx.q(fp_1.d)
        case 9
            x4_1 = 1
            goto label_fe4da8

pthread_kill(pthread_self(), 6)
void* x0_19
int32_t* x1_4
int32_t* x2_4
x0_19, x1_4, x2_4 = XNoReturn()
return qoi_encode(x0_19, x1_4, x2_4) __tailcall

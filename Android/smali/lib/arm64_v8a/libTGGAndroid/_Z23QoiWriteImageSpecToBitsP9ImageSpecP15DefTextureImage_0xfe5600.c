// 函数: _Z23QoiWriteImageSpecToBitsP9ImageSpecP15DefTextureImage
// 地址: 0xfe5600
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8_1 = zx.q(*(arg1 + 0x14) - 1)

if (x8_1.d u<= 9)
    char x8_2 = 4
    int128_t var_40
    
    switch (x8_1)
        case 0
            goto label_fe56d8
        case 1
            int64_t x8_3 = *(arg1 + 0x10)
            var_40 = *arg1
            int32_t x21 = var_40:8.d
            int64_t var_30 = x8_3
            var_30:4.d = 2
            var_30.d = TextureFormatPitch(x21, 2)
            var_40.q = XMalloc(TextureFormatLinearImageSize(x21, var_40:0xc.d, 2))
            ImageBufferCopyToNewFormat(arg1, &var_40)
            int64_t x0_6 = var_40.q
            int64_t var_50 = *(arg1 + 8)
            int16_t var_48 = 0x104
            *(arg2 + 8) = qoi_encode(x0_6, &var_50, arg2)
            return XFree(var_40.q)
        case 4
            x8_2 = 3
        label_fe56d8:
            int128_t v0
            v0.q = *(arg1 + 8)
            var_40:8.b = x8_2
            var_40:9.b = 1
            var_40.q = v0.q
            int64_t result = qoi_encode(*arg1, &var_40, arg2)
            *(arg2 + 8) = result
            return result
        case 9
            x8_2 = 1
            goto label_fe56d8

pthread_kill(pthread_self(), 6)
ImageSpec* x0_12
uint8_t* x1_4
int32_t x2_2
x0_12, x1_4, x2_2 = XNoReturn()
return TextureLoadWithQOI(x0_12, x1_4, x2_2) __tailcall

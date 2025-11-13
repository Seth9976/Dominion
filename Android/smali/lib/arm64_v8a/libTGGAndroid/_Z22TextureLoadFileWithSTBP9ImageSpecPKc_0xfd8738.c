// 函数: _Z22TextureLoadFileWithSTBP9ImageSpecPKc
// 地址: 0xfd8738
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_30
int32_t* x1 = &var_30
void var_2c
void* x2 = &var_2c
int32_t var_14
int32_t* x3 = &var_14
int64_t var_38
int64_t x1_1

if (stbi_is_hdr(arg2) == 0)
    int64_t x0_5 = stbi_load(arg2, x1, x2, x3, 0)
    int32_t x8_1 = var_14
    var_38 = x0_5
    
    if (x8_1 == 1)
        x1_1 = 0xa
    else if (x8_1 == 4)
        x1_1 = 1
    else
        if (x8_1 != 3)
        label_fd8870:
            pthread_kill(pthread_self(), 6)
            int64_t x0_17
            ImageSpec* x1_5
            uint8_t* x2_2
            int32_t x3_1
            x0_17, x1_5, x2_2, x3_1 = XNoReturn()
            return TextureLoadWithSTB(x0_17, x1_5, x2_2, x3_1) __tailcall
        
        x1_1 = 5
else
    int64_t x0_3 = stbi_loadf(arg2, x1, x2, x3, 0)
    int32_t x8 = var_14
    var_38 = x0_3
    
    if (x8 == 1)
        x1_1 = 0x72
    else if (x8 == 4)
        x1_1 = 0x74
    else
        if (x8 != 3)
            goto label_fd8870
        
        x1_1 = 0x3e8

int32_t var_24 = x1_1.d
int32_t var_28 = TextureFormatPitch(var_30, x1_1)
int64_t v0 = var_30.q
uint64_t x1_2 = zx.q(*(arg1 + 0x14))
*(arg1 + 8) = v0

if (x1_2.d == 0)
    if (var_24 == 0xa)
        x1_2 = zx.q(var_24)
    else
        x1_2 = 1
    
    *(arg1 + 0x14) = x1_2.d

int32_t x0_9 = TextureFormatPitch(v0.d, x1_2)
int32_t x8_3 = *(arg1 + 8)
int32_t x1_3 = *(arg1 + 0xc)
uint64_t x2_1 = zx.q(*(arg1 + 0x14))
*(arg1 + 0x10) = x0_9
*arg1 = XMalloc(TextureFormatLinearImageSize(x8_3, x1_3, x2_1))
ImageBufferCopyToNewFormat(&var_38, arg1)
stbi_image_free()
return 1

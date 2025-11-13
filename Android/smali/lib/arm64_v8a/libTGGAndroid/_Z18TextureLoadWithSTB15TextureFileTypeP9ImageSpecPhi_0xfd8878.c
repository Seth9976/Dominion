// 函数: _Z18TextureLoadWithSTB15TextureFileTypeP9ImageSpecPhi
// 地址: 0xfd8878
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_30
int32_t* x2 = &var_30
void var_2c
void* x3 = &var_2c
int32_t var_3c
int32_t* x4 = &var_3c
int64_t var_38
int64_t x1_2

if (stbi_is_hdr_from_memory(arg3, zx.q(arg4)) == 0)
    int64_t x0_5 = stbi_load_from_memory(arg3, zx.q(arg4), x2, x3, x4, 0)
    int32_t x8_1 = var_3c
    var_38 = x0_5
    
    if (x8_1 == 4)
        x1_2 = 1
    else
        if (x8_1 != 3)
        label_fd896c:
            pthread_kill(pthread_self(), 6)
            uint64_t x0_12
            ImageSpec* x1_5
            uint8_t* x2_1
            int32_t x3_1
            int32_t x4_1
            x0_12, x1_5, x2_1, x3_1, x4_1 = XNoReturn()
            return TextureLoadImage(x0_12, x1_5, x2_1, x3_1, x4_1) __tailcall
        
        x1_2 = 5
else
    int64_t x0_3 = stbi_loadf_from_memory(arg3, zx.q(arg4), x2, x3, x4, 0)
    int32_t x8 = var_3c
    var_38 = x0_3
    
    if (x8 == 1)
        x1_2 = 0x72
    else if (x8 == 4)
        x1_2 = 0x74
    else
        if (x8 != 3)
            goto label_fd896c
        
        x1_2 = 0x3e8

int32_t var_24 = x1_2.d
int32_t var_28 = TextureFormatPitch(var_30, x1_2)
ImageBufferCopyToNewFormat(&var_38, arg2)
stbi_image_free()
return 1

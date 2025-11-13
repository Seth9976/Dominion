// 函数: sub_fdd2d8
// 地址: 0xfdd2d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
int64_t result = 0

if (arg2 s>= 1)
    int32_t i = arg3 - 1
    
    if (arg3 s>= 1 && arg5 != 0)
        uint8_t* x0_1 = malloc(sx.q(arg2 << 2))
        int128_t var_130
        __builtin_strcpy(&var_130, 
            "#?RADIANCE\n# Written by stb_image_write.h\nFORMAT=32-bit_rle_rgbe\n")
        (*arg1)(arg1[1], &var_130, 0x41)
        char s[0x80]
        int32_t x0_4 = snprintf(&s, 0x80, "EXPOSURE=          1.0000000000000\n\n-Y %d +X %d\n", 
            zx.q(arg3), zx.q(arg2))
        (*arg1)(arg1[1], &s, zx.q(x0_4))
        int32_t i_2 = 0
        
        do
            int32_t i_1
            
            if (*stbi__flip_vertically_on_write == 0)
                i_1 = i_2
            else
                i_1 = i
            
            stbiw__write_hdr_scanline(arg1, arg2, arg4, x0_1, 
                arg5 + (sx.q(arg2 * arg2 * arg4 * i_1) << 2))
            i -= 1
            i_2 += 1
        while (i != 0xffffffff)
        
        free(x0_1)
        result = 1

if (*(x25 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn

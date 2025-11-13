// 函数: _Z22stbiw__write_dump_dataP19stbi__write_contextiPh
// 地址: 0xfdcd3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_24 = arg2.b

if (arg2 s>= 0x81)
    stbi__write_context* x0_3
    int32_t x1_2
    int32_t x2_1
    uint8_t* x3
    float* x4
    x0_3, x1_2, x2_1, x3, x4 = __assert2(
        "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_write.h", 0x247, 
        "void stbiw__write_dump_data(stbi__write_context *, int, unsigned char *)", "length <= 128")
    return stbiw__write_hdr_scanline(x0_3, x1_2, x2_1, x3, x4) __tailcall

(*arg1)(*(arg1 + 8), &var_24, 1)
return (*arg1)(*(arg1 + 8), arg3, zx.q(arg2))

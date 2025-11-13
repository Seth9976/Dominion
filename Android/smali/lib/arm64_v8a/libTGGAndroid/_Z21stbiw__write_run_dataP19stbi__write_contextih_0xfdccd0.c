// 函数: _Z21stbiw__write_run_dataP19stbi__write_contextih
// 地址: 0xfdccd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t var_14 = arg3
char var_18 = arg2.b ^ 0x80

if (arg2 s>= 0x80)
    stbi__write_context* x0_3
    int32_t x1_2
    uint8_t* x2
    x0_3, x1_2, x2 = __assert2(
        "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_write.h", 0x23f, 
        "void stbiw__write_run_data(stbi__write_context *, int, unsigned char)", 
        "length+128 <= 255")
    return stbiw__write_dump_data(x0_3, x1_2, x2) __tailcall

(*arg1)(*(arg1 + 8), &var_18, 1)
return (*arg1)(*(arg1 + 8), &var_14, 1)

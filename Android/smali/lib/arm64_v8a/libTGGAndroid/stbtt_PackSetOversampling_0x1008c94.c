// 函数: stbtt_PackSetOversampling
// 地址: 0x1008c94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 u>= 9)
    __assert2("C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
        0xf64, "void stbtt_PackSetOversampling(stbtt_pack_context *, unsigned int, unsigned int)", 
        "h_oversample <= 8")
else if (arg3 u< 9)
    *(arg1 + 0x24) = arg2
    *(arg1 + 0x28) = arg3
    return 

void* x0
int32_t x1
x0, x1 = __assert2(
    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 0xf65, 
    "void stbtt_PackSetOversampling(stbtt_pack_context *, unsigned int, unsigned int)", 
    "v_oversample <= 8")
return stbtt_PackSetSkipMissingCodepoints(x0, x1) __tailcall

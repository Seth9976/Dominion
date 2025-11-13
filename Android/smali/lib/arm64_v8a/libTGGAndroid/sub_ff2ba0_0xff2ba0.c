// 函数: sub_ff2ba0
// 地址: 0xff2ba0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg5 s< 1)
    return 

uint64_t i_1 = zx.q(arg5)
void* x10_1 = arg1 + 1
uint64_t i

do
    char x16_1 = *arg2
    arg2 = &arg2[1]
    uint32_t x0 = zx.d(*arg4)
    arg4 = &arg4[1]
    uint32_t x4 = zx.d(*arg3)
    arg3 = &arg3[1]
    int32_t x17_1 = 0x80000 | zx.d(x16_1) << 0x14
    int32_t x4_1 = x17_1 + (x0 - 0x80) * 0x166f00
    int32_t x17_2 = x17_1 + (x4 - 0x80) * 0x1c5a00
    int32_t x5_1 = x4_1 s>> 0x14
    int32_t x16_4 = x17_1 + (x0 - 0x80) * 0xfff49300 + (((x4 - 0x80) * 0xfffa7e00) & 0xffff0000)
    int32_t x0_3
    
    x0_3 = x4_1 s< 0 ? 0 : 0xff
    
    int32_t x4_2 = x16_4 s>> 0x14
    
    if (x5_1 u> 0xff)
        arg1 = zx.q(x0_3)
    else
        arg1 = zx.q(x5_1)
    
    char x16_5
    
    x16_5 = x16_4 s< 0 ? 0 : -1
    
    int32_t x6_1 = x17_2 s>> 0x14
    char x16_6
    
    x16_6 = x4_2 u> 0xff ? x16_5 : x4_2.b
    
    char x17_3
    
    x17_3 = x17_2 s< 0 ? 0 : -1
    
    *x10_1 = x16_6
    char x16_7
    
    x16_7 = x6_1 u> 0xff ? x17_3 : x6_1.b
    
    *(x10_1 + 2) = 0xff
    *(x10_1 - 1) = (arg1.d).b
    i = i_1
    i_1 -= 1
    *(x10_1 + 1) = x16_7
    x10_1 += sx.q(arg6)
while (i != 1)

// 函数: _Z13CardsetGender8LanguageiiRbR17GrammaticalGender
// 地址: 0xc0bb28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg1.d
*arg4 = false
*arg5 = 1

if (arg3 != 1)
    *arg4 = true

if (arg3 != 1 && arg3 s< 1)
    return 

int64_t x23_1 = 0
uint64_t i_1 = zx.q(arg3)
uint64_t i

do
    void* x8_2 = *(gLog + 0x28)
    
    if (*(x8_2 + x23_1 + 4) != 1)
        *arg4 = true
        x8_2 = *(gLog + 0x28)
    
    arg1 = CardnameTranslation(zx.q(x21), zx.q(*(x8_2 + x23_1)))
    
    if (zx.d(*(arg1 + 0x24)) != 0)
        *arg4 = true
    
    int32_t x9_3 = *arg5
    int32_t x8_1 = *(arg1 + 0x18)
    
    if (x9_3 == 1)
        *arg5 = x8_1
    else if (x8_1 == 2 && x9_3 == 3)
        *arg5 = 2
    
    i = i_1
    i_1 -= 1
    x23_1 += 8
while (i != 1)

// 函数: _Z9UTF8RightPKci
// 地址: 0x1066598
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t i = zx.d(*arg1)

if (i == 0)
    return UTF8Substring(arg1, neg.d(arg2), arg2) __tailcall

int32_t x9 = 0
char const* x10 = arg1

do
    if ((i & 0x80) != 0)
        int32_t x12_1 = i & 0xff
        
        if ((x12_1 & 0xe0) == 0xc0)
            x10 = &x10[1]
        else if ((i & 0xf0) == 0xe0)
            x10 = &x10[2]
        else if ((x12_1 & 0xf8) == 0xf0)
            x10 = &x10[3]
    
    x10 = &x10[1]
    i = zx.d(*x10)
    x9 += 1
while (i != 0)

return UTF8Substring(arg1, x9 - arg2, arg2) __tailcall

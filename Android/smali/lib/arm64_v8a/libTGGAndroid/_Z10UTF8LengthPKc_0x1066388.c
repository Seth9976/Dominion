// 函数: _Z10UTF8LengthPKc
// 地址: 0x1066388
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t i = zx.d(*arg1)

if (i == 0)
    return 0

int32_t x8 = 0

do
    if ((i & 0x80) != 0)
        int32_t x10_1 = i & 0xff
        
        if ((x10_1 & 0xe0) == 0xc0)
            arg1 = &arg1[1]
        else if ((i & 0xf0) == 0xe0)
            arg1 = &arg1[2]
        else if ((x10_1 & 0xf8) == 0xf0)
            arg1 = &arg1[3]
    
    arg1 = &arg1[1]
    i = zx.d(*arg1)
    x8 += 1
while (i != 0)

return zx.q(x8)

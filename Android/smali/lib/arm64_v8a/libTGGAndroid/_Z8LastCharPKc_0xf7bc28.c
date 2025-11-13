// 函数: _Z8LastCharPKc
// 地址: 0xf7bc28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t i = zx.d(*arg1)

if (i == 0)
    return 0

int32_t x8 = 0
int32_t x9 = 0

do
    int32_t x10_1 = i & 0xff
    int32_t x11_1 = i & 0xf0
    int32_t x12_1 = x10_1
    
    if ((i & 0x80) != 0)
        if ((x10_1 & 0xe0) == 0xc0)
            x12_1 = (zx.d(arg1[1]) & 0x3f) | (0x1f & x10_1) << 6
        else if (x11_1 != 0xe0)
            x12_1 = x10_1
            
            if ((x10_1 & 0xf8) == 0xf0)
                x12_1 = (((0xfffff03f
                    & ((0xfffc0fff & (x10_1 & 7) << 0x12) | (0x3f & zx.d(arg1[1])) << 0xc))
                    | (0x3f & zx.d(arg1[2])) << 6) & 0xffffffc0) | (zx.d(arg1[3]) & 0x3f)
        else
            x12_1 = (((0xfffff03f & (x10_1 & 0xf) << 0xc) | (0x3f & zx.d(arg1[1])) << 6)
                & 0xffffffc0) | (zx.d(arg1[2]) & 0x3f)
    
    if (x12_1 == 0x7b)
        x9 = 1
        
        if ((x10_1 & 0x80) != 0)
        label_f7bcf8:
            
            if ((x10_1 & 0xe0) == 0xc0)
                arg1 = &arg1[1]
            else if (x11_1 == 0xe0)
                arg1 = &arg1[2]
            else if ((x10_1 & 0xf8) == 0xf0)
                arg1 = &arg1[3]
    else if (x12_1 != 0x7d)
        if ((x9 & 1) == 0)
            x8 = x12_1
        
        if ((x10_1 & 0x80) != 0)
            goto label_f7bcf8
    else
        x9 = 0
        
        if ((x10_1 & 0x80) != 0)
            goto label_f7bcf8
    
    arg1 = &arg1[1]
    i = zx.d(*arg1)
while (i != 0)

return zx.q(x8)

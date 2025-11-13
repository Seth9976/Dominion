// 函数: readString
// 地址: 0xfc0794
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x9 = *arg1
*arg1 = &x9[1]
uint32_t x10 = zx.d(*x9)
int32_t x8_1 = x10 & 0x7f

if ((x10 & 0x80) != 0)
    *arg1 = &x9[2]
    uint32_t x10_2 = zx.d(x9[1])
    x8_1 = (0xffffc07f & x8_1) | (0x7f & x10_2) << 7
    
    if ((x10_2 & 0x80) != 0)
        *arg1 = &x9[3]
        uint32_t x10_4 = zx.d(x9[2])
        x8_1 = (0xffe03fff & x8_1) | (0x7f & x10_4) << 0xe
        
        if ((x10_4 & 0x80) != 0)
            *arg1 = &x9[4]
            uint32_t x10_6 = zx.d(x9[3])
            x8_1 = (0xf01fffff & x8_1) | (0x7f & x10_6) << 0x15
            
            if ((x10_6 & 0x80) != 0)
                *arg1 = &x9[5]
                x8_1 = (0xfffffff & x8_1) | (0xf & zx.d(x9[4])) << 0x1c

if (x8_1 == 0)
    return 0

int64_t x21 = sx.q(x8_1)
int64_t result = _spMalloc(x21, "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x95)
memcpy(result, *arg1, x21 - 1)
*arg1 += x21 - 1
*(result + x21 - 1) = 0
return result

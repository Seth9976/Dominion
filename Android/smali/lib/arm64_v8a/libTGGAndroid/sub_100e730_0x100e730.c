// 函数: sub_100e730
// 地址: 0x100e730
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg4 == 0)
    return 0

int32_t x9 = 0
int32_t x8_1
int32_t i

do
    uint32_t x12_1 = zx.d(*(arg3 + 1))
    uint32_t x13_1 = zx.d(*arg3)
    int32_t x11_2 = (0xffff00ff & x12_1) | (0xff & x13_1) << 8
    
    if (x11_2 u<= 0x7f)
        if (x9 s>= arg2 || x11_2 != zx.d(*(arg1 + sx.q(x9))))
            return 0xffffffff
        
        x9 += 1
    else if (x11_2 u> 0x7ff)
        int32_t x16_1 = x13_1 & 0xfc
        
        if (x16_1 != 0xd8)
            int64_t x15_4 = sx.q(x9)
            x8_1 = -1
            
            if ((x15_4 + 2).d s>= arg2)
                break
            
            if (x16_1 == 0xdc)
                break
            
            if ((x13_1 u>> 4 | 0xe0) != zx.d(*(arg1 + x15_4))
                    || (0x80 | (x11_2 & 0xfc0) u>> 6) != zx.d(*(x15_4 + arg1 + 1))
                    || (0x80 | (x12_1 & 0x3f)) != zx.d(*(arg1 + x15_4 + 2)))
                return 0xffffffff
            
            x9 += 3
        else
            int64_t x12_2 = sx.q(x9)
            
            if ((x12_2 + 3).d s>= arg2)
                return 0xffffffff
            
            uint32_t x14_1 = zx.d(*(arg1 + x12_2))
            int32_t x11_6 = _byteswap(zx.d(*(arg3 + 2)) << 0x10) + (x11_2 << 0xa)
            
            if (((x11_6 - 0x35fdc00) u>> 0x12) + 0xf0 != x14_1)
                return 0xffffffff
            
            void* x12_3 = x12_2 + arg1
            
            if ((0x80 | ((x11_6 - 0x35fdc00) & 0x3f000) u>> 0xc) != zx.d(*(x12_3 + 1))
                    || (0x80 | ((x11_6 - 0x35fdc00) & 0xfc0) u>> 6) != zx.d(*(x12_3 + 2))
                    || (0x80 | (x11_6 & 0x3f)) != zx.d(*(arg1 + x12_2 + 3)))
                return 0xffffffff
            
            arg3 += 2
            x9 += 4
            arg4 -= 2
    else
        int64_t x13_2 = sx.q(x9)
        
        if ((x13_2 + 1).d s>= arg2 || (x11_2 u>> 6) + 0xc0 != zx.d(*(arg1 + x13_2))
                || (0x80 | (x12_1 & 0x3f)) != zx.d(*(arg1 + x13_2 + 1)))
            return 0xffffffff
        
        x9 += 2
    
    i = arg4
    arg4 -= 2
    arg3 += 2
    x8_1 = x9
while (i != 2)
return zx.q(x8_1)

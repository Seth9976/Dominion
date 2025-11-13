// 函数: sub_100e54c
// 地址: 0x100e54c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = arg1 + zx.q(arg2)
uint64_t x25 = _byteswap(zx.q(*(x8 + 2)) << 0x30)

if (x25.d != 0)
    int64_t x26_1 = 0
    int32_t x27_1 = arg2 + 6
    int64_t x8_5 = arg1 + sx.q(_byteswap(zx.d(*(x8 + 4)) << 0x10) + arg2)
    
    do
        int16_t* x24_1 = arg1 + zx.q(x27_1)
        
        if (_byteswap(zx.d(x24_1[3]) << 0x10) == arg5)
            uint32_t x9_2 = zx.d(x24_1[1])
            uint32_t fp_1 = zx.d(x24_1[2])
            uint32_t x28_1 = _byteswap(zx.d(*x24_1)) u>> 0x10
            uint32_t x19_1 = _byteswap(x9_2) u>> 0x10
            
            if (x28_1 == 0)
            label_100e638:
                uint64_t x9_5 = zx.q(x24_1[5]) << 0x30
                int32_t temp0_5 = _byteswap(zx.d(x24_1[4]) << 0x10)
                int32_t x0_1 = sub_100e730(arg3, arg4, x8_5 + _byteswap(x9_5), temp0_5)
                
                if ((x0_1 & 0x80000000) == 0)
                    if (x26_1 + 1 u>= x25)
                    label_100e5b4:
                        
                        if (x0_1 == arg4)
                            return 1
                    else
                        if (_byteswap(zx.d(x24_1[9]) << 0x10) != arg6)
                            goto label_100e5b4
                        
                        if (x28_1 != _byteswap(zx.d(x24_1[6])) u>> 0x10)
                            goto label_100e5b4
                        
                        if (x19_1 != _byteswap(zx.d(x24_1[7])) u>> 0x10)
                            goto label_100e5b4
                        
                        if (_byteswap(fp_1) u>> 0x10 != _byteswap(zx.d(x24_1[8])) u>> 0x10)
                            goto label_100e5b4
                        
                        int32_t temp0_11 = _byteswap(zx.d(x24_1[0xa]) << 0x10)
                        
                        if (temp0_11 == 0)
                            goto label_100e5b4
                        
                        if (x0_1 s< arg4 && zx.d(*(arg3 + zx.q(x0_1))) == 0x20)
                            int32_t x24_2 = arg4 - (x0_1 + 1)
                            
                            if (sub_100e730(arg3 + sx.q(x0_1 + 1), x24_2, 
                                    x8_5 + _byteswap(zx.q(x24_1[0xb]) << 0x30), temp0_11) == x24_2)
                                return 1
            else if (x28_1 == 3 && ((x19_1 == 1 ? 1 : 0) | (x19_1 == 0xa ? 1 : 0)) != 0)
                goto label_100e638
        
        x26_1 += 1
        x27_1 += 0xc
    while (x25 != x26_1)

return 0

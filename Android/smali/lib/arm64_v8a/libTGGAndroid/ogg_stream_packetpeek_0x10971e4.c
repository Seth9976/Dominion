// 函数: ogg_stream_packetpeek
// 地址: 0x10971e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0)
    return 0

int64_t x9 = *arg1

if (x9 == 0)
    return 0

int64_t x13 = arg1[9]
int64_t x12 = sx.q(x13.d)
int32_t x8_1 = 0

if (arg1[8] s> x12)
    int64_t x14_1 = arg1[4]
    int32_t x11_1 = *(x14_1 + (x12 << 2))
    
    if ((x11_1 & 0x400) != 0)
        int64_t x8_3 = arg1[0x31]
        arg1[9] = x13 + 1
        arg1[0x31] = x8_3 + 1
        return 0xffffffff
    
    if (arg2 != 0)
        uint64_t x8_2 = zx.q(x11_1) & 0xff
        int32_t x10_1 = x11_1 & 0x200
        
        if (x8_2.d == 0xff)
            int64_t x12_1 = x12 << 0x20
            x8_2 = 0xff
            int32_t* x14_3 = x14_1 + (sx.q(x13.d) << 2) + 4
            uint64_t x17_1
            
            do
                int32_t x16_1 = *x14_3
                x14_3 = &x14_3[1]
                x12_1 += 0x100000000
                x17_1 = zx.q(x16_1) & 0xff
                
                if ((x16_1 & 0x200) != 0)
                    x10_1 = 0x200
                
                x8_2 += x17_1
            while (x17_1.d == 0xff)
            x12 = x12_1 s>> 0x20
        
        arg2[2] = zx.q(x11_1) & 0x100
        arg2[3] = sx.q(x10_1)
        *arg2 = x9 + arg1[3]
        arg2[5] = arg1[0x31]
        int64_t x9_4 = *(arg1[5] + (x12 << 3))
        arg2[1] = x8_2
        arg2[4] = x9_4
    
    x8_1 = 1

return zx.q(x8_1)

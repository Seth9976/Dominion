// 函数: ogg_stream_packetout
// 地址: 0x10970cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0 || *arg1 == 0)
    return 0

int64_t x9 = arg1[9]
int64_t x13 = sx.q(x9.d)
int32_t x8_3 = 0

if (arg1[8] s> x13)
    int64_t x12_1 = arg1[4]
    int32_t x10_1 = *(x12_1 + (x13 << 2))
    
    if ((x10_1 & 0x400) != 0)
        int64_t x8_6 = arg1[0x31]
        arg1[9] = x9 + 1
        arg1[0x31] = x8_6 + 1
        return 0xffffffff
    
    uint64_t x8_4 = zx.q(x10_1) & 0xff
    int32_t x11_1 = x10_1 & 0x200
    
    if (x8_4.d == 0xff)
        x8_4 = 0xff
        uint64_t x13_1
        
        do
            int32_t x15_1 = *(x12_1 + (x13 << 2) + 4)
            x9 = x13 + 1
            x13_1 = zx.q(x15_1) & 0xff
            
            if ((x15_1 & 0x200) != 0)
                x11_1 = 0x200
            
            x8_4 += x13_1
            x13 = x9
        while (x13_1.d == 0xff)
    
    if (arg2 != 0)
        arg2[2] = zx.q(x10_1) & 0x100
        arg2[3] = sx.q(x11_1)
        *arg2 = *arg1 + arg1[3]
        arg2[5] = arg1[0x31]
        int64_t x10_7 = *(arg1[5] + ((x9 & 0xffffffff) << 0x20 s>> 0x1d))
        arg2[1] = x8_4
        arg2[4] = x10_7
    
    int64_t x10_8 = arg1[3]
    int64_t x12_2 = arg1[0x31]
    arg1[9] = (0x100000000 + (x9 << 0x20)) s>> 0x20
    arg1[3] = x10_8 + x8_4
    arg1[0x31] = x12_2 + 1
    x8_3 = 1

return zx.q(x8_3)

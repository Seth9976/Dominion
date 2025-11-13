// 函数: oggpack_read
// 地址: 0x1097d6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8

if (arg2 u< 0x21)
    x8 = arg1[4]
    int64_t x9_1 = *arg1
    int32_t x12_1 = arg1[1].d
    int32_t x10_2 = x12_1 + arg2
    
    if (x9_1 s< x8 - 4)
    label_1097dc8:
        char* x11_4 = arg1[3]
        uint32_t x13_1 = zx.d(*x11_4) u>> x12_1
        
        if (x10_2 s>= 9)
            x13_1 |= zx.d(x11_4[1]) << (8 - x12_1)
            
            if (x10_2 s>= 0x11)
                x13_1 |= zx.d(x11_4[2]) << (0x10 - x12_1)
                
                if (x10_2 s>= 0x19)
                    x13_1 |= zx.d(x11_4[3]) << (0x18 - x12_1)
                    
                    if (x12_1 != 0 && x10_2 s>= 0x21)
                        x13_1 |= zx.d(x11_4[4]) << (0x20 - x12_1)
        
        uint64_t x10_3
        
        if (x10_2 s< 0)
            x10_3 = zx.q(x10_2 + 7)
        else
            x10_3 = zx.q(x10_2)
        
        int64_t x10_4 = (x10_3 & 0xfffffff8) << 0x20 s>> 0x23
        int64_t result = *(&data_878130 + (sx.q(arg2) << 3)) & sx.q(x13_1)
        arg1[3] = &x11_4[x10_4]
        *arg1 = x9_1 + x10_4
        arg1[1].d = x10_2 & 7
        return result
    
    if (x9_1 s<= x8 - sx.q((x10_2 + 7) s>> 3))
        if (x10_2 == 0)
            return 0
        
        goto label_1097dc8
else
    x8 = arg1[4]

*arg1 = x8
arg1[1].d = 1
arg1[3] = 0
return -1

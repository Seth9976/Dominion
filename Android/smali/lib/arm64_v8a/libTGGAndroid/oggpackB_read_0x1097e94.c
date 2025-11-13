// 函数: oggpackB_read
// 地址: 0x1097e94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x10

if ((((0x20 - arg2) | arg2) & 0x80000000) != 0)
    x10 = arg1[4]
else
    int64_t x9_1 = *arg1
    x10 = arg1[4]
    int32_t x11_1 = arg1[1].d
    int32_t x8_2 = x11_1 + arg2
    
    if (x9_1 + 4 s< x10)
    label_1097ed8:
        char* x10_1 = arg1[3]
        int64_t x12_1 = sx.q(0x20 - arg2)
        uint32_t x13_5 = zx.d(*x10_1) << (x11_1 + 0x18)
        
        if (x8_2 s>= 9)
            x13_5 |= zx.d(x10_1[1]) << (x11_1 + 0x10)
            
            if (x8_2 s>= 0x11)
                x13_5 |= zx.d(x10_1[2]) << (x11_1 + 8)
                
                if (x8_2 s>= 0x19)
                    x13_5 |= zx.d(x10_1[3]) << x11_1
                    
                    if (x11_1 != 0 && x8_2 s>= 0x21)
                        x13_5 |= zx.d(x10_1[4]) u>> (8 - x11_1)
        
        uint64_t x13_8
        
        if (x8_2 s< 0)
            x13_8 = zx.q(x8_2 + 7)
        else
            x13_8 = zx.q(x8_2)
        
        int64_t x11_6 = (x13_8 & 0xfffffff8) << 0x20 s>> 0x23
        arg1[3] = &x10_1[x11_6]
        *arg1 = x9_1 + x11_6
        arg1[1].d = x8_2 & 7
        return zx.q(x13_5) u>> x12_1 s>> 1 u>> (x12_1 + 1) s>> 1
    
    if (x9_1 s<= x10 - sx.q((x8_2 + 7) s>> 3))
        if (x8_2 == 0)
            return 0
        
        goto label_1097ed8

arg1[1].d = 1
arg1[3] = 0
*arg1 = x10
return -1

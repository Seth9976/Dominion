// 函数: oggpackB_look
// 地址: 0x1097ae8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((((0x20 - arg2) | arg2) & 0x80000000) != 0)
    return -1

int64_t x12 = arg1[4]
int64_t x11 = *arg1
int32_t x9_1 = arg1[1].d
int32_t x10_1 = x9_1 + arg2

if (x11 s>= x12 - 4)
    if (x11 s> x12 - sx.q((x10_1 + 7) s>> 3))
        return -1
    
    if (x10_1 == 0)
        return 0

char* x12_2 = arg1[3]
uint32_t x11_2 = zx.d(*x12_2) << (x9_1 + 0x18)

if (x10_1 s>= 9)
    x11_2 |= zx.d(x12_2[1]) << (x9_1 + 0x10)
    
    if (x10_1 s>= 0x11)
        x11_2 |= zx.d(x12_2[2]) << (x9_1 + 8)
        
        if (x10_1 s>= 0x19)
            x11_2 |= zx.d(x12_2[3]) << x9_1
            
            if (x9_1 != 0 && x10_1 s>= 0x21)
                x11_2 |= zx.d(x12_2[4]) u>> (8 - x9_1)

return zx.q(x11_2) u>> zx.q((0x20 - arg2) s>> 1) u>> zx.q((0x20 - arg2 + 1) s>> 1)

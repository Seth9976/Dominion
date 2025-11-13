// 函数: oggpack_look
// 地址: 0x10979fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 u> 0x20)
    return -1

int64_t x11 = arg1[4]
int64_t x9 = *arg1
int32_t x8 = arg1[1].d
int32_t x10_1 = x8 + arg2

if (x9 s>= x11 - 4)
    if (x9 s> x11 - sx.q((x10_1 + 7) s>> 3))
        return -1
    
    if (x10_1 == 0)
        return 0

char* x12_3 = arg1[3]
uint32_t x11_3 = zx.d(*x12_3) u>> x8

if (x10_1 s>= 9)
    x11_3 |= zx.d(x12_3[1]) << (8 - x8)
    
    if (x10_1 s>= 0x11)
        x11_3 |= zx.d(x12_3[2]) << (0x10 - x8)
        
        if (x10_1 s>= 0x19)
            x11_3 |= zx.d(x12_3[3]) << (0x18 - x8)
            
            if (x8 != 0 && x10_1 s>= 0x21)
                x11_3 |= zx.d(x12_3[4]) << (0x20 - x8)

return *(&data_878130 + (sx.q(arg2) << 3)) & sx.q(x11_3)

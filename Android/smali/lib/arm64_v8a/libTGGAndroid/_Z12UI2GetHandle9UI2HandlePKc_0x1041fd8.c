// 函数: _Z12UI2GetHandle9UI2HandlePKc
// 地址: 0x1041fd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1

while (true)
    int64_t x23_1 = *gUI2
    uint64_t x25_1 = zx.q(x20) & 0xffff
    int64_t x0_1 = XString::operator char const*()
    int32_t x0_4
    
    if (x0_1 != 0)
        x0_4 = strcasecmp(XString::operator char const*(), arg2)
    
    if (x0_1 != 0 && x0_4 == 0)
        return zx.q(x20)
    
    if (*(x23_1 + x25_1 * 0x19a8 + 0x167c) != 2)
        int32_t x21_2 = *(x23_1 + x25_1 * 0x19a8 + 0x1970)
        
        if (x21_2 == 0)
        label_10420a0:
            return 0
        
        uint64_t x24_1 = 0
        int32_t x0_6
        
        while (true)
            x0_6 = UI2GetHandle(
                zx.q(*(x23_1 + x25_1 * 0x19a8 + (x24_1 << 0x20 s>> 0x1e) + 0x1870)), arg2)
            
            if (x0_6 != 0)
                break
            
            bool cond:0_1 = x21_2 != x24_1.d + 1
            x24_1 = zx.q(x24_1.d + 1)
            
            if (not(cond:0_1))
                goto label_10420a0
        
        return zx.q(x0_6)
    
    if (*(x23_1 + x25_1 * 0x19a8 + 0x1970) == 0)
        goto label_10420a0
    
    x20 = *(x23_1 + x25_1 * 0x19a8 + 0x1870)

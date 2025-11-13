// 函数: _Z15UI2SelectByName9UI2HandlePKci
// 地址: 0x10314bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = zx.q(arg1) & 0xffff
int32_t x21 = arg1
int64_t x23 = *gUI2
int64_t x0_1 = XString::operator char const*()
int32_t x0_4

if (x0_1 != 0 && (arg3 == 0xffffffff || *(x23 + x24 * 0x19a8 + 0x1740) == arg3))
    x0_4 = strcasecmp(XString::operator char const*(), arg2)

if (x0_1 == 0 || (arg3 != 0xffffffff && *(x23 + x24 * 0x19a8 + 0x1740) != arg3) || x0_4 != 0)
    int32_t x22_1 = *(x23 + x24 * 0x19a8 + 0x1970)
    
    if (x22_1 == 0)
    label_103157c:
        x21 = 0
    else
        uint64_t x25_1 = 0
        
        while (true)
            int32_t x0_6 = UI2SelectByName(
                zx.q(*(x23 + x24 * 0x19a8 + (x25_1 << 0x20 s>> 0x1e) + 0x1870)), arg2, arg3)
            
            if (x0_6 != 0)
                x21 = x0_6
                break
            
            bool cond:0_1 = x22_1 != x25_1.d + 1
            x25_1 = zx.q(x25_1.d + 1)
            
            if (not(cond:0_1))
                goto label_103157c

return zx.q(x21)

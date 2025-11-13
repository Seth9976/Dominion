// 函数: _Z15strtok_NoModifyPPKc
// 地址: 0xc7d084
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char const* x20 = *arg1

while (true)
    uint32_t x8_1 = zx.d(*x20)
    
    if (x8_1 != 0xa && x8_1 != 0xd)
        int64_t x21 = 0
        
        while (true)
            int32_t x8_2 = x8_1 & 0xff
            
            if (x8_2 u<= 0xd && (1 << x8_2 & 0x2401) != 0)
                *arg1 = &x20[x21]
                XString::XString()
                char* entry_x8
                return XString::AppendLength(entry_x8, x20.d)
            
            x8_1 = zx.d(x20[x21 + 1])
            x21 += 1
    
    x20 = &x20[1]

// 函数: _Z12ReadNextLinePPKc
// 地址: 0xf90cc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char const* x1_3 = *arg1
int64_t x9 = 0

while (true)
    uint32_t x10_2 = zx.d(x1_3[x9])
    char* entry_x8
    
    if (x10_2 == 0xd)
        void* x10_1 = &x1_3[x9]
        
        if (zx.d(*(x10_1 + 1)) == 0xa)
            *arg1 = x10_1 + 2
            return XString::XString(entry_x8, x1_3) __tailcall
    else
        if (x10_2 == 0)
            *arg1 = &x1_3[x9]
            return XString::XString(entry_x8, x1_3) __tailcall
        
        if (x10_2 == 0xa)
            *arg1 = &x1_3[x9 + 1]
            return XString::XString(entry_x8, x1_3) __tailcall
    x9 += 1

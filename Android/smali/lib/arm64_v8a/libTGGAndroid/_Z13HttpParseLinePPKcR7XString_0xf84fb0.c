// 函数: _Z13HttpParseLinePPKcR7XString
// 地址: 0xf84fb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XString::operator=(arg2)
char const* x20 = *arg1
int64_t x22 = 0

while (true)
    uint32_t x8_2 = zx.d(x20[x22])
    void* x8_4
    
    if (x8_2 == 0xd)
        void* x8_1 = &x20[x22]
        
        if (zx.d(*(x8_1 + 1)) == 0xa)
            x8_4 = x8_1 + 2
        label_f85054:
            *arg1 = x8_4
            XString::AppendLength(arg2, x20.d)
            return 1
    else
        if (x8_2 == 0xa)
            x8_4 = &x20[x22 + 1]
            goto label_f85054
        
        if (x8_2 == 0)
            XString::AppendLength(arg2, x20.d)
            *arg1 = &x20[x22]
            return 0
    x22 += 1

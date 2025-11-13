// 函数: _ZN7XString15AppendUTF8_sizeEPKci
// 地址: 0x1064d68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x2

if (entry_x2 s< 1)
    return 

char* i = arg2

do
    int32_t x11_1 = sx.d(*i)
    int32_t x8_1 = x11_1 & 0xf8
    int32_t x10_1 = x11_1 & 0xe0
    int32_t x9_1 = x11_1 & 0xf0
    
    if (x8_1 != 0xf0 && x9_1 != 0xe0 && (x11_1 & 0x80000000) != 0 && x10_1 != 0xc0)
        break
    
    int32_t x1 = x11_1 & 0xff
    
    if ((x1 & 0x80) != 0)
        if (x10_1 == 0xc0)
            i[1]
        else if (x9_1 == 0xe0)
            i[2]
            i[1]
        else if (x8_1 == 0xf0)
            i[3]
            (0xfffff03f & ((0xfffc0fff & (x1 & 7) << 0x12) | (0x3f & zx.d(i[1])) << 0xc))
                | (0x3f & zx.d(i[2])) << 6
    
    arg1 = XString::operator+=(arg1.d)
    int32_t x9_4 = sx.d(*i)
    
    if ((x9_4 & 0x80000000) != 0)
        int32_t x8_7 = x9_4 & 0xff
        
        if ((x8_7 & 0xe0) == 0xc0)
            i = &i[1]
        else if ((x9_4 & 0xf0) == 0xe0)
            i = &i[2]
        else if ((x8_7 & 0xf8) == 0xf0)
            i = &i[3]
    
    i = &i[1]
while (i u< arg2 + sx.q(entry_x2))

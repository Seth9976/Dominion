// 函数: _ZN7XString10AppendUTF8EPKci
// 地址: 0x1064c74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_i

if (entry_i s< 1)
    return 

int32_t i_1 = entry_i
char* x20_1 = arg2
int32_t i

do
    uint32_t x1 = zx.d(*x20_1)
    
    if (x1 == 0)
        break
    
    if ((x1 & 0x80) != 0)
        if ((x1 & 0xe0) == 0xc0)
            x20_1[1]
        else if ((x1 & 0xf0) == 0xe0)
            x20_1[2]
            x20_1[1]
        else if ((x1 & 0xf8) == 0xf0)
            x20_1[3]
            (0xfffff03f & ((0xfffc0fff & (x1 & 7) << 0x12) | (0x3f & zx.d(x20_1[1])) << 0xc))
                | (0x3f & zx.d(x20_1[2])) << 6
    
    arg1 = XString::operator+=(arg1.d)
    int32_t x9_3 = sx.d(*x20_1)
    
    if ((x9_3 & 0x80000000) != 0)
        int32_t x8_9 = x9_3 & 0xff
        
        if ((x8_9 & 0xe0) == 0xc0)
            x20_1 = &x20_1[1]
        else if ((x9_3 & 0xf0) == 0xe0)
            x20_1 = &x20_1[2]
        else if ((x8_9 & 0xf8) == 0xf0)
            x20_1 = &x20_1[3]
    
    i = i_1
    i_1 -= 1
    x20_1 = &x20_1[1]
while (i != 1)

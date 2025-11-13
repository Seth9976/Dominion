// 函数: _Z16UmlautFirstVowelRK7XString
// 地址: 0xf797ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x0 = XString::operator char const*()
uint32_t i = zx.d(*x0)
char* entry_x8

if (i != 0)
    char* x20_1 = x0
    int32_t x22_1 = 0
    
    do
        int32_t x9_1 = i & 0xff
        int32_t x10_1 = i & 0xf0
        int32_t x12_1 = x9_1
        
        if ((i & 0x80) != 0)
            if ((x9_1 & 0xe0) == 0xc0)
                x12_1 = (zx.d(x20_1[1]) & 0x3f) | (0x1f & x9_1) << 6
            else if (x10_1 != 0xe0)
                x12_1 = x9_1
                
                if ((x9_1 & 0xf8) == 0xf0)
                    x12_1 = (((0xfffff03f
                        & ((0xfffc0fff & (x9_1 & 7) << 0x12) | (0x3f & zx.d(x20_1[1])) << 0xc))
                        | (0x3f & zx.d(x20_1[2])) << 6) & 0xffffffc0) | (zx.d(x20_1[3]) & 0x3f)
            else
                x12_1 = (((0xfffff03f & (x9_1 & 0xf) << 0xc) | (0x3f & zx.d(x20_1[1])) << 6)
                    & 0xffffffc0) | (zx.d(x20_1[2]) & 0x3f)
        
        uint64_t x11_5 = zx.q(x12_1 - 0x41)
        
        if (x11_5.d u<= 0x34)
            switch (x11_5)
                case 0
                    XString::XString(entry_x8)
                    XString::AppendUTF8(entry_x8, XString::operator char const*())
                    XString::AppendUTF8(entry_x8, 0x72e6dd)
                    XString::Length()
                    return XString::AppendUTF8(entry_x8, x20_1.d + 1)
                case 4
                    XString::XString(entry_x8)
                    XString::AppendUTF8(entry_x8, XString::operator char const*())
                    XString::AppendUTF8(entry_x8, 0x77968a)
                    XString::Length()
                    return XString::AppendUTF8(entry_x8, x20_1.d + 1)
                case 8
                    XString::XString(entry_x8)
                    XString::AppendUTF8(entry_x8, XString::operator char const*())
                    XString::AppendUTF8(entry_x8, 0x77d29b)
                    XString::Length()
                    return XString::AppendUTF8(entry_x8, x20_1.d + 1)
                case 0xe
                    XString::XString(entry_x8)
                    XString::AppendUTF8(entry_x8, XString::operator char const*())
                    XString::AppendUTF8(entry_x8, 0x7a7152)
                    XString::Length()
                    return XString::AppendUTF8(entry_x8, x20_1.d + 1)
                case 0x14
                    XString::XString(entry_x8)
                    XString::AppendUTF8(entry_x8, XString::operator char const*())
                    XString::AppendUTF8(entry_x8, 0x7a7155)
                    XString::Length()
                    return XString::AppendUTF8(entry_x8, x20_1.d + 1)
                case 0x20
                    XString::XString(entry_x8)
                    XString::AppendUTF8(entry_x8, XString::operator char const*())
                    XString::AppendUTF8(entry_x8, 0x79b198)
                    XString::Length()
                    return XString::AppendUTF8(entry_x8, x20_1.d + 1)
                case 0x24
                    XString::XString(entry_x8)
                    XString::AppendUTF8(entry_x8, XString::operator char const*())
                    XString::AppendUTF8(entry_x8, 0x7658be)
                    XString::Length()
                    return XString::AppendUTF8(entry_x8, x20_1.d + 1)
                case 0x28
                    XString::XString(entry_x8)
                    XString::AppendUTF8(entry_x8, XString::operator char const*())
                    XString::AppendUTF8(entry_x8, 0x759806)
                    XString::Length()
                    return XString::AppendUTF8(entry_x8, x20_1.d + 1)
                case 0x2e
                    XString::XString(entry_x8)
                    XString::AppendUTF8(entry_x8, XString::operator char const*())
                    XString::AppendUTF8(entry_x8, 0x77968d)
                    XString::Length()
                    return XString::AppendUTF8(entry_x8, x20_1.d + 1)
                case 0x34
                    XString::XString(entry_x8)
                    XString::AppendUTF8(entry_x8, XString::operator char const*())
                    XString::AppendUTF8(entry_x8, 0x7a335f)
                    XString::Length()
                    return XString::AppendUTF8(entry_x8, x20_1.d + 1)
        
        if ((x9_1 & 0x80) != 0)
            if ((x9_1 & 0xe0) == 0xc0)
                x20_1 = &x20_1[1]
            else if (x10_1 == 0xe0)
                x20_1 = &x20_1[2]
            else if ((x9_1 & 0xf8) == 0xf0)
                x20_1 = &x20_1[3]
        
        x20_1 = &x20_1[1]
        i = zx.d(*x20_1)
        x22_1 += 1
    while (i != 0)

return XString::XString(entry_x8) __tailcall

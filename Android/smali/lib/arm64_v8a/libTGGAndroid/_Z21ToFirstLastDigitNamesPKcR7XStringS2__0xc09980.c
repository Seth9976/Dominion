// 函数: _Z21ToFirstLastDigitNamesPKcR7XStringS2_
// 地址: 0xc09980
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1
char const* x21 = arg1
XString::XString()
char var_28
XString::AppendUTF8_size(&var_28, x21.d)
XString::operator=(arg2)
XString::~XString()
uint32_t i_1 = zx.d(*x21)

if (i_1 != 0)
    int32_t x8_2 = -1
    uint32_t i = i_1
    char const* x22_1 = x21
    
    do
        if ((i & 0x80) != 0)
            int32_t x11_1 = i & 0xff
            
            if ((x11_1 & 0xe0) == 0xc0)
                x22_1 = &x22_1[1]
            else if ((i & 0xf0) == 0xe0)
                x22_1 = &x22_1[2]
            else if ((x11_1 & 0xf8) == 0xf0)
                x22_1 = &x22_1[3]
        
        x22_1 = &x22_1[1]
        i = zx.d(*x22_1)
        x8_2 += 1
    while (i != 0)
    
    if (x8_2 != 0 && i_1 != 0)
        do
            if ((i_1 & 0x80) == 0)
                goto label_c09abc
            
            int32_t x10_3 = i_1 & 0xff
            
            if ((x10_3 & 0xe0) == 0xc0)
                int32_t temp1_1 = x8_2
                x8_2 -= 1
                x21 = &x21[2]
                
                if (temp1_1 == 1)
                    break
            else if ((i_1 & 0xf0) != 0xe0)
                char const* x21_2
                
                if ((x10_3 & 0xf8) == 0xf0)
                    x21_2 = &x21[3]
                else
                    x21_2 = x21
                
                int32_t temp2_1 = x8_2
                x8_2 -= 1
                x21 = &x21_2[1]
                
                if (temp2_1 == 1)
                    break
            else
                x21 = &x21[2]
            label_c09abc:
                int32_t temp0_1 = x8_2
                x8_2 -= 1
                x21 = &x21[1]
                
                if (temp0_1 == 1)
                    break
            
            i_1 = zx.d(*x21)
        while (i_1 != 0)

XString::XString()
XString::AppendUTF8_size(&var_28, x21.d)
int32_t x0_3 = XString::Length()
int32_t x8_4

if (x0_3 == 1)
    x8_4 = zx.d(*XString::operator char const*()) - 0x30

if (x0_3 != 1 || x8_4 u>= 0xa)
    XString::operator=(&var_28)

XString::operator+(arg2)
XString::operator=(arg3)
XString::~XString()
return XString::~XString()

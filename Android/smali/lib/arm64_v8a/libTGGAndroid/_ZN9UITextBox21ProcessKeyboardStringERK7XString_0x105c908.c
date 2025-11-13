// 函数: _ZN9UITextBox21ProcessKeyboardStringERK7XString
// 地址: 0x105c908
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UITextBox::DeleteSelection()
int32_t x21 = *(arg1 + 8)
char* x0_1 = XString::GetString()
uint32_t i = zx.d(*x0_1)

if (i != 0)
    char* x20_1 = x0_1
    
    do
        int32_t x1_1 = i & 0xff
        
        if ((i & 0x80) != 0)
            if ((x1_1 & 0xe0) == 0xc0)
                x20_1[1]
            else if ((i & 0xf0) == 0xe0)
                x20_1[2]
                x20_1[1]
            else if ((x1_1 & 0xf8) == 0xf0)
                x20_1[3]
                (0xfffff03f & ((0xfffc0fff & (x1_1 & 7) << 0x12) | (0x3f & zx.d(x20_1[1])) << 0xc))
                    | (0x3f & zx.d(x20_1[2])) << 6
        
        UITextBox::ProcessChar(arg1.d)
        int32_t x9_4 = sx.d(*x20_1)
        
        if ((x9_4 & 0x80000000) != 0)
            int32_t x8_7 = x9_4 & 0xff
            
            if ((x8_7 & 0xe0) == 0xc0)
                x20_1 = &x20_1[1]
            else if ((x9_4 & 0xf0) == 0xe0)
                x20_1 = &x20_1[2]
            else if ((x8_7 & 0xf8) == 0xf0)
                x20_1 = &x20_1[3]
        
        x20_1 = &x20_1[1]
        i = zx.d(*x20_1)
    while (i != 0)

*(arg1 + 0x10) = x21
return 1

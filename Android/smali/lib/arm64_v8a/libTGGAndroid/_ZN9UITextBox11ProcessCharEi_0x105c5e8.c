// 函数: _ZN9UITextBox11ProcessCharEi
// 地址: 0x105c5e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1

if (entry_x1 == 8 || (entry_x1 & 0x80000000) != 0)
    return 

XString* x19_1 = arg1
UITextBox::DeleteSelection()
int32_t x9_1 = *(x19_1 + 0x70)

if (x9_1 s>= 1)
    char* x0_1 = XString::operator char const*()
    int32_t x8_1 = 0
    
    while (true)
        int32_t x10_3 = sx.d(*x0_1)
        int32_t x9_3 = x10_3 & 0xff
        
        if ((x10_3 & 0x80000000) == 0)
            goto label_105c63c
        
        int32_t x9_2
        
        if ((x9_3 & 0xe0) == 0xc0)
            x0_1 = &x0_1[1]
            x9_2 = (x9_3 & 0x1f) << 6
        label_105c638:
            x9_3 = x9_2 | (zx.d(*x0_1) & 0x3f)
        label_105c63c:
            
            if (x9_3 == 0)
                break
        else
            if ((x9_3 & 0xf0) == 0xe0)
                uint32_t x10_6 = zx.d(x0_1[1])
                x0_1 = &x0_1[2]
                x9_2 = (0xfffff03f & (x9_3 & 0xf) << 0xc) | (0x3f & x10_6) << 6
                goto label_105c638
            
            if ((x9_3 & 0xf8) == 0xf0)
                uint32_t x10_8 = zx.d(x0_1[1])
                uint32_t x11_1 = zx.d(x0_1[2])
                x0_1 = &x0_1[3]
                x9_2 = (0xfffff03f & ((0xfffc0fff & (x9_3 & 7) << 0x12) | (0x3f & x10_8) << 0xc))
                    | (0x3f & x11_1) << 6
                goto label_105c638
        x0_1 = &x0_1[1]
        x8_1 += 1
    
    x9_1 = *(x19_1 + 0x70)
    
    if (x8_1 s< x9_1 || x9_1 == 0)
        goto label_105c6bc
else if (x9_1 == 0)
label_105c6bc:
    XString::XString()
    int32_t x0_3 = XString::operator char const*()
    *(x19_1 + 8)
    char var_28
    XString::AppendLength(&var_28, x0_3)
    XString::operator+=(&var_28)
    int32_t x0_7 = XString::operator char const*()
    int32_t x22_1 = *(x19_1 + 8)
    XString::Length()
    *(x19_1 + 8)
    XString::AppendLength(&var_28, x0_7 + x22_1)
    float v0_3
    
    if (not(*(x19_1 + 0x74) f== 0f))
        char* x0_11 = XString::operator char const*()
        XAsset* x0_12 = *(x19_1 + 0x48)
        
        if (x0_12 == 0)
            v0_3 = FontStringWidth(*(x19_1 + 0x40), x0_11, *(x19_1 + 0x5c), *(x19_1 + 0x60))
        else
            v0_3 =
                TTFontStringWidth(x0_12, x0_11, *(x19_1 + 0x50), *(x19_1 + 0x5c), *(x19_1 + 0x60))
    
    if (*(x19_1 + 0x74) f== 0f || not(v0_3 * *(x19_1 + 0x58) f>= *(x19_1 + 0x74)))
        int32_t x0_15
        
        if (*(x19_1 + 0x48) == 0)
            x0_15 = FontHasCharacter(*(x19_1 + 0x40), entry_x1)
        
        if (*(x19_1 + 0x48) != 0 || (x0_15 & 1) != 0)
            XString::operator=(x19_1)
            *(x19_1 + 8)
            int32_t x0_18 = UITextBox::Utf8StringRightOneIndex(x19_1.d)
            *(x19_1 + 8) = x0_18
            *(x19_1 + 0x10) = x0_18
    
    XString::~XString()

UITextBox::ApplyTextScroll()
*(x19_1 + 0xc) = 0

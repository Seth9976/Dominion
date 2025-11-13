// 函数: _ZN9UITextBox14ProcessKeyDownEij
// 地址: 0x105ca14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(arg2 - 0xf702)
void* x19 = arg1
int32_t entry_x2

if (x8.d u<= 0x29)
    switch (x8)
        case 0
            uint64_t x21_1 = zx.q(*(x19 + 8))
            
            if ((entry_x2 & 1) == 0)
                int32_t x8_1 = *(x19 + 0x10)
                
                if (x21_1.d != x8_1)
                    int32_t x8_14
                    
                    if (x8_1 s< x21_1.d)
                        x8_14 = x8_1
                    else
                        x8_14 = x21_1.d
                    
                    *(x19 + 8) = x8_14
                    *(x19 + 0xc) = 0
                    *(x19 + 0x10) = x8_14
                else
                    if (x21_1.d s>= 1)
                        XString::Length()
                        uint64_t x20_1
                        int32_t x8_3
                        
                        do
                            if (x21_1 s< 2)
                                x20_1 = 0
                                break
                            
                            x20_1 = x21_1 - 1
                            x8_3 = sx.d(*(XString::operator char const*() + x21_1 - 1))
                            
                            if ((x8_3 & 0xf8) == 0xf0)
                                break
                            
                            if ((x8_3 & 0xf0) == 0xe0)
                                break
                            
                            if ((x8_3 & 0x80000000) == 0)
                                break
                            
                            x21_1 = x20_1
                        while ((x8_3 & 0xe0) != 0xc0)
                        *(x19 + 8) = x20_1.d
                        *(x19 + 0x10) = x20_1.d
                    
                    *(x19 + 0xc) = 0
            else if (x21_1.d s< 1)
                *(x19 + 0xc) = 0
            else
                XString::Length()
                
                while (true)
                    if (x21_1 s< 2)
                        *(x19 + 8) = 0
                        *(x19 + 0xc) = 0
                        break
                    
                    uint64_t x20_3 = x21_1 - 1
                    int32_t x8_12 = sx.d(*(XString::operator char const*() + x21_1 - 1))
                    
                    if ((x8_12 & 0xf8) != 0xf0 && (x8_12 & 0xf0) != 0xe0
                            && (x8_12 & 0x80000000) != 0)
                        x21_1 = x20_3
                        
                        if ((x8_12 & 0xe0) != 0xc0)
                            continue
                    
                    *(x19 + 8) = x20_3.d
                    *(x19 + 0xc) = 0
                    break
        case 1
            int32_t x21_3 = *(x19 + 8)
            
            if ((entry_x2 & 1) != 0)
                if (x21_3 == XString::Length())
                    *(x19 + 0xc) = 0
                else
                    *(x19 + 8)
                    *(x19 + 8) = UITextBox::Utf8StringRightOneIndex(x19.d)
                    *(x19 + 0xc) = 0
            else
                int32_t x8_9 = *(x19 + 0x10)
                
                if (x21_3 != x8_9)
                    int32_t x8_15
                    
                    x8_15 = x8_9 s> x21_3 ? x8_9 : x21_3
                    
                    *(x19 + 8) = x8_15
                    *(x19 + 0xc) = 0
                    *(x19 + 0x10) = x8_15
                else
                    if (x21_3 s< XString::Length())
                        *(x19 + 8)
                        int32_t x0_12 = UITextBox::Utf8StringRightOneIndex(x19.d)
                        *(x19 + 8) = x0_12
                        *(x19 + 0x10) = x0_12
                    
                    *(x19 + 0xc) = 0
        case 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 
                0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 
                0x23, 0x24, 0x25, 0x28
            goto label_105cb34
        case 0x26
            if (*(x19 + 8) != *(x19 + 0x10))
                UITextBox::DeleteSelection()
            else
                UITextBox::DeleteAt(x19.d)
            
            *(x19 + 0xc) = 0
        case 0x27
            if (entry_x2 != 1)
                *(x19 + 0x10) = 0
            
            *(x19 + 8) = 0
        case 0x29
            int32_t x0_15 = XString::Length()
            
            if (entry_x2 != 1)
                *(x19 + 0x10) = x0_15
            
            *(x19 + 8) = x0_15
            *(x19 + 0xc) = 0
else if (arg2 != 0x43)
label_105cb34:
    
    if (arg2 != 0x41 || entry_x2 != 2)
        return 0
    
    *(x19 + 0x10) = 0
    *(x19 + 8) = XString::Length()
else
    uint64_t x21_2 = zx.q(*(x19 + 8))
    
    if (x21_2.d != *(x19 + 0x10))
        UITextBox::DeleteSelection()
    else if (x21_2.d s>= 1)
        XString::Length()
        uint64_t x20_2
        int32_t x8_7
        
        do
            if (x21_2 s< 2)
                x20_2 = 0
                break
            
            x20_2 = x21_2 - 1
            x8_7 = sx.d(*(XString::operator char const*() + x21_2 - 1))
            
            if ((x8_7 & 0xf8) == 0xf0)
                break
            
            if ((x8_7 & 0xf0) == 0xe0)
                break
            
            if ((x8_7 & 0x80000000) == 0)
                break
            
            x21_2 = x20_2
        while ((x8_7 & 0xe0) != 0xc0)
        *(x19 + 8) = x20_2.d
        *(x19 + 0x10) = x20_2.d
        UITextBox::DeleteAt(x19.d)
    
    *(x19 + 0xc) = 0
UITextBox::ApplyTextScroll()
return 1

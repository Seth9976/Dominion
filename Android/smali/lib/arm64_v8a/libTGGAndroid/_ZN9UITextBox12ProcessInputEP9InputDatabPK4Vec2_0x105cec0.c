// 函数: _ZN9UITextBox12ProcessInputEP9InputDatabPK4Vec2
// 地址: 0x105cec0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_38 = v8
int32_t temp0 = arg3.d & 1
int32_t* entry_x3
int32_t* x8_1

if (temp0 != 0)
    x8_1 = entry_x3
else
    x8_1 = arg2 + 0x10

int64_t v9
v9.d = *x8_1
float v0 = *(arg1 + 0x14)
int32_t* x20 = arg2
InputData* x19 = arg1
float* x8_3

if (temp0 != 0)
    x8_3 = &entry_x3[1]
else
    x8_3 = arg2 + 0x14

int32_t x8_4
int32_t x9_1
int32_t x20_1

if (v9.d f< v0 || v9.d f>= v0 + *(x19 + 0x1c))
label_105cfb0:
    x9_1 = *x20
    x8_4 = 1
    
    if (x9_1 u<= 0x1a)
    label_105cfc4:
        
        switch (x9_1)
            case 0
                if (zx.d(*(x19 + 0x79)) != 0 && zx.d(*(x19 + 0x7a)) == 0)
                    int32_t x8_7 = x20[2]
                    
                    if (x8_7 u<= 6 && (1 << x8_7 & 0x43) != 0)
                        x20[1]
                        UITextBox::ProcessChar(x19.d)
                        x20[8].b = 1
            case 1
                uint32_t x1_4 = x20[1]
                char var_28
                
                if (x1_4 != 0x43)
                    if (x1_4 != 0x56 || x20[2] != 2 || zx.d(*(x19 + 0x79)) == 0)
                        goto label_105d638
                    
                    XString::XString()
                    
                    if ((XClipboardPasteText(&var_28) & 1) != 0)
                        UITextBox::ProcessText(x19)
                    
                    x20[8].b = 1
                    XString::~XString()
                else if (x20[2] != 2 || zx.d(*(x19 + 0x79)) == 0)
                label_105d638:
                    
                    if (zx.d(*(x19 + 0x79)) != 0 && zx.d(*(x19 + 0x7a)) == 0)
                        x20[2]
                        
                        if ((UITextBox::ProcessKeyDown(x19.d, x1_4).d & 1) != 0)
                            x20[8].b = 1
                else
                    int32_t x8_30 = *(x19 + 8)
                    int32_t x9_18 = *(x19 + 0x10)
                    int32_t x22_2
                    
                    x22_2 = x8_30 s< x9_18 ? x8_30 : x9_18
                    
                    XString::XString(&var_28, XString::operator char const*() + sx.q(x22_2))
                    
                    if ((operator!=(&var_28, &data_793a18) & 1) != 0)
                        XClipboardCopyText(XString::operator char const*())
                    
                    x20[8].b = 1
                    XString::~XString()
            case 4
                *(x19 + 0x7a) = 0
            case 0xc
                if (x20[1] == 0x1000)
                    *(x19 + 0x7a) = 0
            case 0xd
                if (((x8_4 | (x20[1] != 0x1000 ? 1 : 0)) & 1) == 0)
                    *(x19 + 0x7a) = 1
                    v8 = UITextBox::GetCharacterX(x19.d)
                    int32_t x21_2 = 0
                    bool cond:1_1
                    
                    do
                        x20_1 = x21_2
                        
                        if (x21_2 s>= XString::Length())
                            goto label_105d5a0
                        
                        x21_2 = UITextBox::Utf8StringRightOneIndex(x19.d)
                        int64_t v0_4
                        arg1, v0_4 = UITextBox::GetCharacterX(x19.d)
                        cond:1_1 = v9.d f>= v8.d f+ (v0_4.d f- v8.d) * float.s(0x3f28f5c3)
                        v8 = v0_4
                    while (cond:1_1)
                    goto label_105d5a4
            case 0xe
                if (((x8_4 | (x20[1] != 0x10 ? 1 : 0)) & 1) == 0)
                    *(x19 + 0x7a) = 1
                    v8 = UITextBox::GetCharacterX(x19.d)
                    int32_t x21_3 = 0
                    bool cond:2_1
                    
                    do
                        x20_1 = x21_3
                        
                        if (x21_3 s>= XString::Length())
                            goto label_105d5a0
                        
                        x21_3 = UITextBox::Utf8StringRightOneIndex(x19.d)
                        int64_t v0_6
                        arg1, v0_6 = UITextBox::GetCharacterX(x19.d)
                        cond:2_1 = v9.d f>= v8.d f+ (v0_6.d f- v8.d) * float.s(0x3f28f5c3)
                        v8 = v0_6
                    while (cond:2_1)
                    goto label_105d5a4
            case 0xf
                if (x20[1] == 0x10)
                    *(x19 + 0x7a) = 0
            case 0x11
                if (x20[1] == 0x100000)
                    *(x19 + 0x7a) = 0
            case 0x12
                if (((x8_4 | (x20[1] != 0x100000 ? 1 : 0)) & 1) == 0)
                    *(x19 + 0x7a) = 1
                    v8 = UITextBox::GetCharacterX(x19.d)
                    int32_t x21_4 = 0
                    bool cond:3_1
                    
                    do
                        x20_1 = x21_4
                        
                        if (x21_4 s>= XString::Length())
                            goto label_105d5a0
                        
                        x21_4 = UITextBox::Utf8StringRightOneIndex(x19.d)
                        int64_t v0_8
                        arg1, v0_8 = UITextBox::GetCharacterX(x19.d)
                        cond:3_1 = v9.d f>= v8.d f+ (v0_8.d f- v8.d) * float.s(0x3f28f5c3)
                        v8 = v0_8
                    while (cond:3_1)
                    goto label_105d5a4
            case 0x13
                if (x20[1] == 1 || x20[1] == 0x10)
                    *(x19 + 0x7a) = 0
            case 0x14
                int32_t x9_9 = x20[1]
                
                if (((x8_4 | (x9_9 != 1 ? 1 : 0)) & 1) == 0)
                    *(x19 + 0x7a) = 1
                    v8 = UITextBox::GetCharacterX(x19.d)
                    int32_t x21_9 = 0
                    bool cond:4_1
                    
                    do
                        x20_1 = x21_9
                        
                        if (x21_9 s>= XString::Length())
                            goto label_105d5a0
                        
                        x21_9 = UITextBox::Utf8StringRightOneIndex(x19.d)
                        int64_t v0_16
                        arg1, v0_16 = UITextBox::GetCharacterX(x19.d)
                        cond:4_1 = v9.d f>= v8.d f+ (v0_16.d f- v8.d) * float.s(0x3f28f5c3)
                        v8 = v0_16
                    while (cond:4_1)
                label_105d5a4:
                    *(x19 + 0xc) = 0
                    *(x19 + 0x10) = x20_1
                    *(x19 + 8) = x20_1
                else if (((x8_4 | (x9_9 != 0x10 ? 1 : 0)) & 1) == 0)
                    *(x19 + 0x7a) = 1
                    v8 = UITextBox::GetCharacterX(x19.d)
                    int32_t x21_5 = 0
                    bool cond:8_1
                    
                    do
                        x20_1 = x21_5
                        
                        if (x21_5 s>= XString::Length())
                            goto label_105d5a0
                        
                        x21_5 = UITextBox::Utf8StringRightOneIndex(x19.d)
                        int64_t v0_10
                        arg1, v0_10 = UITextBox::GetCharacterX(x19.d)
                        cond:8_1 = v9.d f>= v8.d f+ (v0_10.d f- v8.d) * float.s(0x3f28f5c3)
                        v8 = v0_10
                    while (cond:8_1)
                    goto label_105d5a4
            case 0x15
                if (x20[1] == 0x100 || x20[1] == 0x1000)
                    *(x19 + 0x7a) = 0
            case 0x16
                if (((x8_4 | (x20[1] != 0x100 ? 1 : 0)) & 1) == 0)
                    *(x19 + 0x7a) = 1
                    v8 = UITextBox::GetCharacterX(x19.d)
                    int32_t x21_10 = 0
                    bool cond:5_1
                    
                    do
                        x20_1 = x21_10
                        
                        if (x21_10 s>= XString::Length())
                            goto label_105d5a0
                        
                        x21_10 = UITextBox::Utf8StringRightOneIndex(x19.d)
                        int64_t v0_18
                        arg1, v0_18 = UITextBox::GetCharacterX(x19.d)
                        cond:5_1 = v9.d f>= v8.d f+ (v0_18.d f- v8.d) * float.s(0x3f28f5c3)
                        v8 = v0_18
                    while (cond:5_1)
                    goto label_105d5a4
                
                if (((x8_4 | (x20[1] != 0x1000 ? 1 : 0)) & 1) == 0)
                    *(x19 + 0x7a) = 1
                    v8 = UITextBox::GetCharacterX(x19.d)
                    int32_t x21_6 = 0
                    bool cond:9_1
                    
                    do
                        x20_1 = x21_6
                        
                        if (x21_6 s>= XString::Length())
                            goto label_105d5a0
                        
                        x21_6 = UITextBox::Utf8StringRightOneIndex(x19.d)
                        int64_t v0_12
                        arg1, v0_12 = UITextBox::GetCharacterX(x19.d)
                        cond:9_1 = v9.d f>= v8.d f+ (v0_12.d f- v8.d) * float.s(0x3f28f5c3)
                        v8 = v0_12
                    while (cond:9_1)
                    goto label_105d5a4
            case 0x17
                if (x20[1] == 1)
                    *(x19 + 0x7a) = 0
            case 0x18
                if (((x8_4 | (x20[1] != 1 ? 1 : 0)) & 1) == 0)
                    *(x19 + 0x7a) = 1
                    v8 = UITextBox::GetCharacterX(x19.d)
                    int32_t x21_7 = 0
                    bool cond:6_1
                    
                    do
                        x20_1 = x21_7
                        
                        if (x21_7 s>= XString::Length())
                            goto label_105d5a0
                        
                        x21_7 = UITextBox::Utf8StringRightOneIndex(x19.d)
                        int64_t v0_14
                        arg1, v0_14 = UITextBox::GetCharacterX(x19.d)
                        cond:6_1 = v9.d f>= v8.d f+ (v0_14.d f- v8.d) * float.s(0x3f28f5c3)
                        v8 = v0_14
                    while (cond:6_1)
                    goto label_105d5a4
            case 0x19
                if (zx.d(*(x19 + 0x79)) != 0 && zx.d(*(x19 + 0x7a)) == 0)
                    UITextBox::ProcessKeyboardString(x19)
                    x20[8].b = 1
            case 0x1a
                if (zx.d(*(x19 + 0x79)) != 0 && zx.d(*(x19 + 0x7a)) == 0)
                    int32_t x22_1 = x20[1]
                    int32_t x21_8 = x20[3]
                    
                    if (((x21_8 | x22_1) & 0x80000000) != 0)
                        *(x19 + 0x10) = *(x19 + 8)
                    else
                        if (XString::Length() s<= x22_1)
                            x22_1 = XString::Length()
                        
                        *(x19 + 0x10) = x22_1
                        
                        if (XString::Length().d s<= x21_8)
                            x21_8 = XString::Length().d
                        
                        *(x19 + 8) = x21_8
                    
                    x20[8].b = 1
else
    v0 = *x8_3
    float v1 = *(x19 + 0x18)
    
    if (v0 < v1 || v0 >= v1 + *(x19 + 0x20))
        goto label_105cfb0
    
    x9_1 = *x20
    
    if (x9_1 == 3)
        *(x19 + 0x7a) = 1
        v8 = UITextBox::GetCharacterX(x19.d)
        int32_t x21_1 = 0
        bool cond:10_1
        
        do
            x20_1 = x21_1
            
            if (x21_1 s>= XString::Length())
            label_105d5a0:
                x20_1 = XString::Length().d
                break
            
            x21_1 = UITextBox::Utf8StringRightOneIndex(x19.d)
            int64_t v0_2
            arg1, v0_2 = UITextBox::GetCharacterX(x19.d)
            cond:10_1 = v9.d f>= v8.d f+ (v0_2.d f- v8.d) * float.s(0x3f28f5c3)
            v8 = v0_2
        while (cond:10_1)
        goto label_105d5a4
    
    x8_4 = 0
    
    if (x9_1 u<= 0x1a)
        goto label_105cfc4

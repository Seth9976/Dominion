// 函数: _ZN9UITextBox11UpdateClickERK10ClickState
// 地址: 0x105ccf0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_40 = v9
int64_t v8
int64_t var_38 = v8
ClickState const& x19 = arg1
void* entry_x1

if (zx.d(*(entry_x1 + 0x329)) != 0 && zx.d(*(x19 + 0x79)) != 0)
    v9.d = *(entry_x1 + 0x314)
    *(x19 + 0x7a) = 1
    v8 = UITextBox::GetCharacterX(x19.d)
    int32_t x21_1 = 0
    int32_t x20_1
    bool cond:0_1
    
    do
        x20_1 = x21_1
        
        if (x21_1 s>= XString::Length())
            x20_1 = XString::Length().d
            break
        
        x21_1 = UITextBox::Utf8StringRightOneIndex(x19.d)
        int64_t v0_2
        arg1, v0_2 = UITextBox::GetCharacterX(x19.d)
        cond:0_1 = v9.d f>= v8.d f+ (v0_2.d f- v8.d) * float.s(0x3f28f5c3)
        v8 = v0_2
    while (cond:0_1)
    *(x19 + 0xc) = 0
    *(x19 + 0x10) = x20_1
    *(x19 + 8) = x20_1
else if (zx.d(*(entry_x1 + 8)) != 0)
    *(x19 + 0x7a) = 0

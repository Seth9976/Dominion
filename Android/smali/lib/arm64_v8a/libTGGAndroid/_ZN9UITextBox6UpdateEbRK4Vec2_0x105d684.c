// 函数: _ZN9UITextBox6UpdateEbRK4Vec2
// 地址: 0x105d684
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_40 = v9
int64_t v8
int64_t var_38 = v8

if (zx.d(*(arg1 + 0x78)) != 0)
    return 

InputData* x19_1 = arg1
int32_t x21_1 = arg2.d
*(arg1 + 0xc) = *gSecondsPerUpdate + *(arg1 + 0xc)
int64_t var_28 = 0

if ((InputQueueIterateNext(&var_28).d & 1) != 0)
    do
        UITextBox::ProcessInput(x19_1, var_28.b, zx.q(x21_1) & 1)
        arg1 = InputQueueIterateNext(&var_28)
    while ((arg1.d & 1) != 0)

if (zx.d(*(x19_1 + 0x7a)) == 0 || (x21_1 & 1) == 0)
    return 

int32_t* entry_x2
v9.d = *entry_x2
v8 = UITextBox::GetCharacterX(x19_1.d)
int32_t x21_2 = 0

while (true)
    int32_t x20_2 = x21_2
    
    if (x21_2 s>= XString::Length())
        x20_2 = XString::Length().d
        
        if (x20_2 == *(x19_1 + 8))
            break
    else
        x21_2 = UITextBox::Utf8StringRightOneIndex(x19_1.d)
        int64_t v0_2
        arg1, v0_2 = UITextBox::GetCharacterX(x19_1.d)
        bool cond:0_1 = v9.d f>= v8.d f+ (v0_2.d f- v8.d) * float.s(0x3f28f5c3)
        v8 = v0_2
        
        if (cond:0_1)
            continue
        else if (x20_2 == *(x19_1 + 8))
            break
    
    *(x19_1 + 8) = x20_2
    *(x19_1 + 0xc) = 0
    break

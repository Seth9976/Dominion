// 函数: _ZN9UITextBox14UpdateDraggingE4Vec2
// 地址: 0x105c0a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = arg1
float v9 = UITextBox::GetCharacterX(arg1.d)
int32_t x21 = 0
int64_t result

while (true)
    int32_t x20_1 = x21
    
    if (x21 s>= XString::Length())
        result = XString::Length()
        x20_1 = result.d
        
        if (x20_1 == *(x19 + 8))
            break
    else
        x21 = UITextBox::Utf8StringRightOneIndex(x19.d)
        float v0_1
        result, v0_1 = UITextBox::GetCharacterX(x19.d)
        float entry_v0
        bool cond:0_1 = entry_v0 >= v9 + (v0_1 - v9) * float.s(0x3f28f5c3)
        v9 = v0_1
        
        if (cond:0_1)
            continue
        else if (x20_1 == *(x19 + 8))
            break
    
    *(x19 + 8) = x20_1
    *(x19 + 0xc) = 0
    break

return result

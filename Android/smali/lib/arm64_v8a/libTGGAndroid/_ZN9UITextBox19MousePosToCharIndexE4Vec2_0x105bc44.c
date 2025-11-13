// 函数: _ZN9UITextBox19MousePosToCharIndexE4Vec2
// 地址: 0x105bc44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x19 = arg1
float v9 = UITextBox::GetCharacterX(arg1.d)
int32_t x21 = 0
int32_t x20_1
bool cond:0_1

do
    x20_1 = x21
    
    if (x21 s>= XString::Length())
        return XString::Length() __tailcall
    
    x21 = UITextBox::Utf8StringRightOneIndex(x19.d)
    float v0_1 = UITextBox::GetCharacterX(x19.d)
    float entry_v0
    cond:0_1 = entry_v0 >= v9 + (v0_1 - v9) * float.s(0x3f28f5c3)
    v9 = v0_1
while (cond:0_1)
return zx.q(x20_1)

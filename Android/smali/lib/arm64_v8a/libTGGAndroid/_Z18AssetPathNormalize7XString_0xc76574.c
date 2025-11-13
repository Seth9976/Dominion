// 函数: _Z18AssetPathNormalize7XString
// 地址: 0xc76574
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XString* entry_x8
XString::XString(entry_x8)
int64_t x21 = 0
int64_t result

while (true)
    result = XString::Length()
    
    if (x21 s>= sx.q(result.d))
        break
    
    if (zx.d(*(XString::operator char const*() + x21)) == 0x5c)
        XString::SetAsciiChar(entry_x8.d, x21.b)
    else if (zx.d(*(XString::operator char const*() + x21)) - 0x41 u<= 0x19)
        *(XString::operator char const*() + x21)
        XString::SetAsciiChar(entry_x8.d, x21.b)
    
    x21 += 1

return result

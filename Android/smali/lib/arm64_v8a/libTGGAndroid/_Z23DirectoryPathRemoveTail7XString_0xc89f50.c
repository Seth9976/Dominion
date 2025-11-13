// 函数: _Z23DirectoryPathRemoveTail7XString
// 地址: 0xc89f50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = XString::Length()
uint64_t x22 = zx.q(x0 - 1)
XString* entry_x8

if (x0 s> 1)
    uint32_t x8 = zx.d(*(XString::operator char const*() + x22))
    uint32_t x8_1
    
    if (x8 != 0x2f)
        x8_1 = zx.d(*(XString::operator char const*() + x22))
    
    if (x8 == 0x2f || x8_1 == 0x5c)
        x22 = zx.q(x0 - 2)
    
    uint64_t x21_2
    
    do
        x21_2 = zx.q(x22.d)
        uint32_t x8_2 = zx.d(*(XString::operator char const*() + x21_2))
        uint32_t x8_3
        
        if (x8_2 != 0x2f)
            x8_3 = zx.d(*(XString::operator char const*() + x21_2))
        
        if (x8_2 == 0x2f || x8_3 == 0x5c)
            return XString::XString(entry_x8, XString::operator char const*()) __tailcall
        
        x22 = zx.q(x21_2.d - 1)
    while (x21_2.d s> 0)

return XString::XString(entry_x8) __tailcall

// 函数: _ZN9UITextBox22Utf8StringLeftOneIndexEi
// 地址: 0x105c7ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1

if (entry_x1 s>= 1)
    XString::Length()

int32_t x8

x8 = entry_x1 s< 1 ? entry_x1 : 1

int64_t x22 = sx.q(entry_x1)
int64_t x20_1
int32_t x8_2

do
    if (x22 s< 2)
        x20_1 = zx.q(x8 - 1)
        break
    
    x20_1 = x22 - 1
    x8_2 = sx.d(*(XString::operator char const*() + x22 - 1))
    
    if ((x8_2 & 0xf8) == 0xf0)
        break
    
    if ((x8_2 & 0xf0) == 0xe0)
        break
    
    if ((x8_2 & 0x80000000) == 0)
        break
    
    x22 = x20_1
while ((x8_2 & 0xe0) != 0xc0)
return zx.q(x20_1.d)

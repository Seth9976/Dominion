// 函数: _ZN9UITextBox23Utf8StringRightOneIndexEi
// 地址: 0x105bf08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1

if ((entry_x1 & 0x80000000) == 0)
    XString::Length()

char* x9 = XString::operator char const*() + sx.q(entry_x1)
uint32_t x8 = zx.d(*x9)

if ((x8 & 0x80) != 0)
    if ((x8 & 0xe0) == 0xc0)
        x8 = (zx.d(x9[1]) & 0x3f) | (0x1f & x8) << 6
    else if ((x8 & 0xf0) == 0xe0)
        x8 = (((0xfffff03f & (x8 & 0xf) << 0xc) | (0x3f & zx.d(x9[1])) << 6) & 0xffffffc0)
            | (zx.d(x9[2]) & 0x3f)
    else if ((x8 & 0xf8) == 0xf0)
        x8 = (((0xfffff03f & ((0xfffc0fff & (x8 & 7) << 0x12) | (0x3f & zx.d(x9[1])) << 0xc))
            | (0x3f & zx.d(x9[2])) << 6) & 0xffffffc0) | (zx.d(x9[3]) & 0x3f)

if (x8 s< 0x80)
    return zx.q(1 + entry_x1)

if (x8 s< 0x800)
    return zx.q(2 + entry_x1)

int32_t x8_5

x8_5 = x8 s>= 0x10000 ? 4 : 3

return zx.q(x8_5 + entry_x1)

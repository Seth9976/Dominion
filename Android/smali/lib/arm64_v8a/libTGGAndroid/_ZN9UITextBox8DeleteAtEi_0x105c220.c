// 函数: _ZN9UITextBox8DeleteAtEi
// 地址: 0x105c220
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1

if ((entry_x1 & 0x80000000) != 0 || XString::Length() s<= entry_x1)
    return 

uint64_t x22_1 = zx.q(entry_x1)
char* x9_1 = XString::operator char const*() + x22_1
uint32_t x8_1 = zx.d(*x9_1)

if ((x8_1 & 0x80) != 0)
    if ((x8_1 & 0xe0) == 0xc0)
        x8_1 = (zx.d(x9_1[1]) & 0x3f) | (0x1f & x8_1) << 6
    else if ((x8_1 & 0xf0) == 0xe0)
        x8_1 = (((0xfffff03f & (x8_1 & 0xf) << 0xc) | (0x3f & zx.d(x9_1[1])) << 6) & 0xffffffc0)
            | (zx.d(x9_1[2]) & 0x3f)
    else if ((x8_1 & 0xf8) == 0xf0)
        x8_1 = (((0xfffff03f & ((0xfffc0fff & (x8_1 & 7) << 0x12) | (0x3f & zx.d(x9_1[1])) << 0xc))
            | (0x3f & zx.d(x9_1[2])) << 6) & 0xffffffc0) | (zx.d(x9_1[3]) & 0x3f)

int32_t x23_1

if (x8_1 s< 0x80)
    x23_1 = 1
else if (x8_1 s< 0x800)
    x23_1 = 2
else if (x8_1 s>= 0x10000)
    x23_1 = 4
else
    x23_1 = 3

XString::XString()
char var_38
XString::AppendLength(&var_38, XString::operator char const*())
int32_t x0_6 = XString::operator char const*()
XString::Length()
XString::AppendLength(&var_38, x0_6 + x22_1.d + x23_1)
XString::operator=(arg1)
XString::~XString()

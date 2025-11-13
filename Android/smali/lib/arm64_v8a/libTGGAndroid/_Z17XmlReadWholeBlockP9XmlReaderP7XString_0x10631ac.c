// 函数: _Z17XmlReadWholeBlockP9XmlReaderP7XString
// 地址: 0x10631ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 8)
char* x20_1

if (x8 == 3)
    x20_1 = *(arg1 + 0x10)
    
    if ((XmlReadSkipBlock(arg1) & 1) == 0)
        return 0
else
    if (x8 != 1)
        return 0
    
    x20_1 = *(arg1 + 0x18)
    
    do
        x20_1 = &x20_1[-1]
    while (zx.d(*x20_1) != 0x3c)
    
    if ((XmlReadSkipBlock(arg1) & 1) == 0)
        return 0

int64_t x9 = *(arg1 + 0x18)
char* x8_2 = x9 - 2
int32_t x21_1 = x9.d - x20_1.d
uint32_t i

do
    i = zx.d(*x8_2)
    x8_2 = &x8_2[-1]
    x21_1 -= 1
while (i != 0x3e)
XString::operator=(arg2)
XString::AppendLength(arg2, x20_1.d)
return 1

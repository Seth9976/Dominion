// 函数: _Z14AssetNameSplitPKcR7XStringS2_
// 地址: 0xf72318
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char const* x8 = arg1
char const* x20_1
void* i

do
    x20_1 = x8
    i = strchr(x8, 0x2f)
    x8 = i + 1
while (i != 0)
XString& x0_3

if (x20_1 == arg1)
    XString::operator=(arg2)
    x0_3 = arg3
else
    char var_28
    XString::XString(&var_28, arg1)
    XString::operator=(arg2)
    XString::~XString()
    x0_3 = arg3

return XString::operator=(x0_3)

// 函数: _Z24UI2StateOverrideGetNamesPKcP7XStringi
// 地址: 0x100e944
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char const* x22 = arg1
int64_t x24 = 0
uint64_t x19 = zx.q(arg3)
XString* x21 = arg2

do
    void* x0_1 = strchr(x22, 0x2e)
    
    if (x0_1 == 0)
        x19 = zx.q(x24.d + 1)
        XString::operator=(arg2 + (zx.q(x24.d) << 3))
        break
    
    char var_38
    XString::XString(&var_38, x22)
    XString::operator=(x21)
    x24 += 1
    XString::~XString()
    x22 = x0_1 + 1
    x21 += 8
while (x19 != x24)

return zx.q(x19.d)

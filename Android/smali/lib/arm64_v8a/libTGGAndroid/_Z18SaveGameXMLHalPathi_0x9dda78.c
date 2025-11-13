// 函数: _Z18SaveGameXMLHalPathi
// 地址: 0x9dda78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(gGameSettings + 0x10)
uint64_t x11 = zx.q(*(x8 + 0x1f2e0))
void* x15 = x8 + 0x4320
uint64_t x13

x13 = x11.d u> 1 ? x11 : 1

void* x11_1 = x8

while (*x15 != *(x8 + 0x1f2e4))
    x11_1 += 0x7cb8
    uint64_t temp0_1 = x13
    x13 -= 1
    x15 += 0x7cb8
    
    if (temp0_1 == 1)
        x11_1 = x8
        *(x8 + 0x1f2e4) = *(x8 + 0x4320)
        break

*(x11_1 + 0x30) = 0
*(x11_1 + 0x4320)
XFormatString("gamelocal_%d_%d.xml")
void var_20
XString::XString(&var_20)
HalFilePathCreate(&var_20, 0)
XString::~XString()
return XString::~XString()

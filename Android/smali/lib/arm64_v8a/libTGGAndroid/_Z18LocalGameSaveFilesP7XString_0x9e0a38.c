// 函数: _Z18LocalGameSaveFilesP7XString
// 地址: 0x9e0a38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

GetClient()
void* x0 = GetClient()
void* x8 = *(gGameSettings + 0x10)
*(x0 + 0x506c)
uint64_t x12 = zx.q(*(x8 + 0x1f2e0))
void* x15 = x8 + 0x4320
uint64_t x13

x13 = x12.d u> 1 ? x12 : 1

void* x12_1 = x8

while (*x15 != *(x8 + 0x1f2e4))
    x12_1 += 0x7cb8
    uint64_t temp0_1 = x13
    x13 -= 1
    x15 += 0x7cb8
    
    if (temp0_1 == 1)
        x12_1 = x8
        *(x8 + 0x1f2e4) = *(x8 + 0x4320)
        break

*(x12_1 + 0x30) = 0
*(x12_1 + 0x4320)
XGetSaveGameFolder(false)
XFormatString("%sgamelocal_%d_%d.xml")
XString::operator=(arg1)
XString::~XString()
void* x8_1 = *(gGameSettings + 0x10)
uint64_t x11_1 = zx.q(*(x8_1 + 0x1f2e0))
void* x15_1 = x8_1 + 0x4320
uint64_t x13_1

x13_1 = x11_1.d u> 1 ? x11_1 : 1

void* x11_2 = x8_1

while (*x15_1 != *(x8_1 + 0x1f2e4))
    x11_2 += 0x7cb8
    uint64_t temp1_1 = x13_1
    x13_1 -= 1
    x15_1 += 0x7cb8
    
    if (temp1_1 == 1)
        x11_2 = x8_1
        *(x8_1 + 0x1f2e4) = *(x8_1 + 0x4320)
        break

*(x11_2 + 0x30) = 0
*(x11_2 + 0x4320)
XGetSaveGameFolder(false)
XFormatString("%sgamelocal_%d_%d.bin")
XString::operator=(arg1 + 8)
XString::~XString()
return 2

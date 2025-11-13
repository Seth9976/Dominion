// 函数: _Z15LocalGameExistsb
// 地址: 0x9ddc68
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
int32_t x9_1 = *(x11_1 + 0x4330)
int32_t x8_1 = x9_1 != 0 ? 1 : 0

if (x9_1 != 0 && (arg1.d & 1) != 0)
    SaveGameXMLHalPath(x9_1)
    void var_48
    HalFilePath var_30
    
    if ((HalOpen(&var_48, &var_30, 0) & 1) == 0)
        XString::~XString()
        x8_1 = 0
        *(x11_1 + 0x4330) = 0
    else
        HalClose(&var_48)
        XString::~XString()
        x8_1 = 1

return zx.q(x8_1)

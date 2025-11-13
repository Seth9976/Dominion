// 函数: _Z21GameClientHandleInputR9InputData
// 地址: 0x9b0010
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

bool var_14

if ((UI2FocusHandlesInput(arg1, &var_14) & 1) != 0)
    return zx.q(zx.d(var_14) != 0 ? 1 : 0)

if (*arg1 == 1)
    int32_t x8_2 = *(arg1 + 4)
    
    if (x8_2 == 0x57)
        ToggleWidescreen()
        return 1
    
    if (x8_2 == 0x42 && (zx.d(*(arg1 + 8)) & 4) != 0)
        ToggleFullscreen()
        return 1

if ((GameSpecfic_HandleInput(arg1) & 1) != 0)
    return 1

if (zx.d(*(*gpGameData + 0x3c)) == 0 || *arg1 != 1)
    return 0

int32_t x8_7 = *(arg1 + 4)

if (x8_7 == 0x4e)
    data_11ca754 += 1
    XFormatString("New Notification %d")
    NotificationsAdd("Hi!", XString::operator char const*(), nullptr, nullptr, 0)
    XString::~XString()
else if (x8_7 == 0x51)
    *weird ^= 1
    return 1

return 0

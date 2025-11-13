// 函数: _Z16ToggleWidescreenv
// 地址: 0x9ab47c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = GetLocalSettings()

if (zx.d(*(result + 0x18)) != 0)
    return result

*(result + 0x14) = *(result + 0x14) == 0 ? 1 : 0
int64_t x0 = AppGetWindowSize()
uint32_t x9 = (x0 u>> 0x20).d
uint64_t x8_3 = *gAppInterface
*(x8_3 + 0x2c) = x9
int32_t x11 = *(result + 0x14)
int64_t x11_1

if (*ASPECTS == x11)
    x11_1 = 0
else if (*(ASPECTS + 0xc) == x11)
    x11_1 = 1
else if (*(ASPECTS + 0x18) != x11)
    if (*(ASPECTS + 0x24) != x11)
        pthread_kill(pthread_self(), 6)
        XNoReturn()
        return GameLocalizationInit() __tailcall
    
    x11_1 = 3
else
    x11_1 = 2

void* x10 = ASPECTS + x11_1 * 0xc
uint64_t x9_2 = zx.q(*(x10 + 4) * x9 s/ *(x10 + 8))
*(x8_3 + 0x28) = x9_2.d
int64_t var_18 = (x0 & 0xffffffff00000000) | x9_2
AppSetWindowSize(&var_18)
*(GetClient() + 0x75cc) = 1
SaveLocalSettings()
return GameDlgManagerRefreshMainLayout()

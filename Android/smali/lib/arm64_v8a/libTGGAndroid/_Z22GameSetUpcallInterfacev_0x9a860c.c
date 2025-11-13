// 函数: _Z22GameSetUpcallInterfacev
// 地址: 0x9a860c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XUpcallSetInterface(gGameAppUpcallInterface)
uint64_t x8 = *gAppInterface
*(x8 + 8) = "Dominion.xpack"
*(x8 + 0x10) = "DominionAndroid"
*(x8 + 0x18) = "Dominion"
int64_t x0_1 = AppGetWindowSize()
uint64_t x9 = *gAppInterface
*(x9 + 0x28) = x0_1.d
*(x9 + 0x2c) = (x0_1 u>> 0x20).d
*(x9 + 0x39) = 0x101
*(x9 + 0x35) = 1
*(x9 + 0x3e) = 1
*(x9 + 0x20) = "Dominion.Android.64.3315"
return GameSpecific_AppSetup() __tailcall

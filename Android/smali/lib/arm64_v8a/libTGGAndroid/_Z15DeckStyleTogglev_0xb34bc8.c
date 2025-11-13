// 函数: _Z15DeckStyleTogglev
// 地址: 0xb34bc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetLocalSettings()
*(x0 + 0x2c) = *(x0 + 0x2c) != 1 ? 1 : 0
return SaveLocalSettings() __tailcall

// 函数: _ZN5Botan9Skein_5125clearEv
// 地址: 0xe27b38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t x0 = *(entry_x0 + 0x48)
int64_t x8 = *(entry_x0 + 0x50)

if (x8 != x0)
    memset(x0, 0, x8 - x0)

*(entry_x0 + 0x60) = 0
return Botan::Skein_512::initial_block() __tailcall

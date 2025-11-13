// 函数: _ZNSt6__ndk18ios_baseD1Ev
// 地址: 0x10a3210
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
int64_t x8 = entry_x0[9]
*entry_x0 = _vtable_for_std::__ndk1::ios_base + 0x10

if (x8 != 0)
    int64_t i = x8 - 1
    
    do
        (*(entry_x0[7] + (i << 3)))(0, entry_x0, zx.q(*(entry_x0[8] + (i << 2))))
        i -= 1
    while (i != -1)

std::__ndk1::locale::~locale()
free(entry_x0[7])
free(entry_x0[8])
free(entry_x0[0xb])
return free(entry_x0[0xe]) __tailcall

// 函数: _ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv
// 地址: 0xef069c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t x8 = *(entry_x0 + 0x58)
int64_t x9 = *(entry_x0 + 0x30)

if (x8 u< x9)
    x8 = x9
    *(entry_x0 + 0x58) = x9

if ((zx.d(*(entry_x0 + 0x60)) & 8) != 0)
    int64_t x9_2 = *(entry_x0 + 0x20)
    
    if (x9_2 u< x8)
        x9_2 = x8
        *(entry_x0 + 0x20) = x8
    
    char* x8_1 = *(entry_x0 + 0x18)
    
    if (x8_1 u< x9_2)
        return zx.q(*x8_1)

return 0xffffffff

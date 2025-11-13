// 函数: _ZNKSt6__ndk118__match_char_icaseIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE
// 地址: 0xf1396c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x1
char* x8 = *(entry_x1 + 0x10)

if (x8 != *(entry_x1 + 0x18))
    std::__ndk1::__state<char>& x20_1 = arg1
    int64_t* x0 = *(arg1 + 0x18)
    arg1 = (*(*x0 + 0x28))(x0, zx.q(*x8))
    
    if (zx.d(*(x20_1 + 0x28)) == zx.d((arg1.d).b))
        int64_t x8_2 = *(entry_x1 + 0x10)
        *entry_x1 = 0xfffffc1d
        *(entry_x1 + 0x10) = x8_2 + 1
        *(entry_x1 + 0x50) = *(x20_1 + 8)
        return 

*entry_x1 = 0xfffffc1f
*(entry_x1 + 0x50) = 0

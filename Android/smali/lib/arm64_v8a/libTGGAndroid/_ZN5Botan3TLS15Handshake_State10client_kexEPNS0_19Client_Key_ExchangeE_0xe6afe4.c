// 函数: _ZN5Botan3TLS15Handshake_State10client_kexEPNS0_19Client_Key_ExchangeE
// 地址: 0xe6afe4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x20 = *(arg1 + 0x140)
int64_t entry_x1
*(arg1 + 0x140) = entry_x1

if (x20 != 0)
    void* x0 = x20[4]
    *x20 = _vtable_for_Botan::TLS::Client_Key_Exchange + 0x10
    
    if (x0 != 0)
        int64_t x8_2 = x20[6]
        x20[5] = x0
        Botan::deallocate_memory(x0, x8_2 - x0, 1)
    
    void* x0_1 = x20[1]
    
    if (x0_1 != 0)
        x20[2] = x0_1
        operator delete(x0_1)
    
    operator delete(x20)
    *(arg1 + 0x140)

jump(*(**(arg1 + 8) + 0x70))

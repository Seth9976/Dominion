// 函数: _ZN5Botan3TLS15Handshake_State15client_finishedEPNS0_8FinishedE
// 地址: 0xe6b100
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x20 = *(arg1 + 0x160)
int64_t entry_x1
*(arg1 + 0x160) = entry_x1

if (x20 != 0)
    void* x0 = x20[1]
    *x20 = _vtable_for_Botan::TLS::Finished + 0x10
    
    if (x0 != 0)
        x20[2] = x0
        operator delete(x0)
    
    operator delete(x20)
    *(arg1 + 0x160)

jump(*(**(arg1 + 8) + 0x70))

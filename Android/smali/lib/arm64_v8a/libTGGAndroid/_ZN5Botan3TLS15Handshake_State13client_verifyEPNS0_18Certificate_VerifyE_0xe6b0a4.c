// 函数: _ZN5Botan3TLS15Handshake_State13client_verifyEPNS0_18Certificate_VerifyE
// 地址: 0xe6b0a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x20 = *(arg1 + 0x148)
int64_t entry_x1
*(arg1 + 0x148) = entry_x1

if (x20 != 0)
    void* x0 = x20[1]
    *x20 = _vtable_for_Botan::TLS::Certificate_Verify + 0x10
    
    if (x0 != 0)
        x20[2] = x0
        operator delete(x0)
    
    operator delete(x20)
    *(arg1 + 0x148)

jump(*(**(arg1 + 8) + 0x70))

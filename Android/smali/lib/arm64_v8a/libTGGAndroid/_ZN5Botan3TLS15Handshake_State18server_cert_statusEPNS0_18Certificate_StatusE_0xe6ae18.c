// 函数: _ZN5Botan3TLS15Handshake_State18server_cert_statusEPNS0_18Certificate_StatusE
// 地址: 0xe6ae18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x20 = *(arg1 + 0x118)
int64_t entry_x1
*(arg1 + 0x118) = entry_x1

if (x20 != 0)
    void* x0 = x20[1]
    *x20 = _vtable_for_Botan::TLS::Certificate_Status + 0x10
    
    if (x0 != 0)
        x20[2] = x0
        operator delete(x0)
    
    operator delete(x20)
    *(arg1 + 0x118)

jump(*(**(arg1 + 8) + 0x70))

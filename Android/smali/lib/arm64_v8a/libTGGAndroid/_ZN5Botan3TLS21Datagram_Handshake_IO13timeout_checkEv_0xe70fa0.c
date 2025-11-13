// 函数: _ZN5Botan3TLS21Datagram_Handshake_IO13timeout_checkEv
// 地址: 0xe70fa0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t entry_x0

if (*(entry_x0 + 0x80) != 0)
    void* x8_1 = *(entry_x0 + 0x48)
    
    if (((x8_1 - *(entry_x0 + 0x40)) s>> 3) * -0x5555555555555555 u< 2
            || *(x8_1 - 0x18) == *(x8_1 - 0x10))
        int64_t x0_1 = std::__ndk1::chrono::steady_clock::now()
        int64_t x20 = *(entry_x0 + 0x88)
        int64_t x21 = x0_1 s/ 0xf4240 - *(entry_x0 + 0x80)
        
        if (x21 u>= x20)
            *(entry_x0 + 0x48) - *(entry_x0 + 0x40)
            Botan::TLS::Datagram_Handshake_IO::retransmit_flight(entry_x0)
            int64_t x9_10 = *(entry_x0 + 0x78)
            int64_t x8_8 = *(entry_x0 + 0x88) << 1
            int64_t x8_9
            
            x8_9 = x9_10 u< x8_8 ? x9_10 : x8_8
            
            *(entry_x0 + 0x88) = x8_9
        
        return zx.q(x21 u>= x20 ? 1 : 0)

return 0

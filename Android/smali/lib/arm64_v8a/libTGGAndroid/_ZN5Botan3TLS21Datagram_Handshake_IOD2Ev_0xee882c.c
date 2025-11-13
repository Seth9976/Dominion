// 函数: _ZN5Botan3TLS21Datagram_Handshake_IOD2Ev
// 地址: 0xee882c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
int64_t* x0 = entry_x0[0x18]
*entry_x0 = _vtable_for_Botan::TLS::Datagram_Handshake_IO + 0x10

if (&entry_x0[0x14] == x0)
    (*(*x0 + 0x20))()
else if (x0 != 0)
    (*(*x0 + 0x28))()

entry_x0[0xc]
std::__ndk1::__tree<std::__ndk1::__value_type<uint16_t, Botan::TLS::Datagram_Handshake_IO::Message_Info>, std::__ndk1::__map_value_compare<uint16_t, std::__ndk1::__value_type<uint16_t, Botan::TLS::Datagram_Handshake_IO::Message_Info>, std::__ndk1::less<uint16_t>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<uint16_t, Botan::TLS::Datagram_Handshake_IO::Message_Info> > >::destroy(
    &entry_x0[0xb])
void* x20 = entry_x0[8]

if (x20 != 0)
    int64_t* x8_4 = entry_x0[9]
    void* x0_3
    
    if (x8_4 == x20)
        x0_3 = x20
    else
        int64_t* x21_1 = x8_4
        
        do
            x21_1 = &x21_1[-3]
            void* x0_2 = *x21_1
            
            if (x0_2 != 0)
                x8_4[-2] = x0_2
                operator delete(x0_2)
            
            x8_4 = x21_1
        while (x20 != x21_1)
        
        x0_3 = entry_x0[8]
    
    entry_x0[9] = x20
    operator delete(x0_3)

entry_x0[6]
std::__ndk1::__tree<uint16_t, std::__ndk1::less<uint16_t>, std::__ndk1::allocator<uint16_t> >::destroy(
    &entry_x0[5])
entry_x0[3]
return std::__ndk1::__tree<std::__ndk1::__value_type<uint16_t, Botan::TLS::Datagram_Handshake_IO::Handshake_Reassembly>, std::__ndk1::__map_value_compare<uint16_t, std::__ndk1::__value_type<uint16_t, Botan::TLS::Datagram_Handshake_IO::Handshake_Reassembly>, std::__ndk1::less<uint16_t>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<uint16_t, Botan::TLS::Datagram_Handshake_IO::Handshake_Reassembly> > >::destroy(
    &entry_x0[2]) __tailcall

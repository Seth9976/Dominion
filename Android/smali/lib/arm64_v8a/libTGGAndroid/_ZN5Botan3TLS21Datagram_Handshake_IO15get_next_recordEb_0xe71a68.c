// 函数: _ZN5Botan3TLS21Datagram_Handshake_IO15get_next_recordEb
// 地址: 0xe71a68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x9 = *(arg1 + 0x48)
void* x20 = arg1

if (*(x9 - 0x18) != *(x9 - 0x10))
    if (x9 u>= *(x20 + 0x50))
        std::__ndk1::vector<std::__ndk1::vector<uint16_t, std::__ndk1::allocator<uint16_t> >, std::__ndk1::allocator<std::__ndk1::vector<uint16_t, std::__ndk1::allocator<uint16_t> > > >::__push_back_slow_path<std::__ndk1::vector<uint16_t, std::__ndk1::allocator<uint16_t> > >(
            x20 + 0x40)
    else
        __builtin_memset(x9, 0, 0x18)
        *(x9 + 8) = 0
        *(x9 + 0x10) = 0
        *(x20 + 0x48) = x9 + 0x18

int32_t entry_x1
int32_t x8_3

if ((entry_x1 & 1) == 0)
    void* i = *(x20 + 0x18)
    
    if (i != 0)
        uint32_t x8_4 = zx.d(*(x20 + 0x90))
        void* i_1 = x20 + 0x18
        
        do
            uint32_t x12_1 = zx.d(*(i + 0x20))
            
            if (x12_1 u>= x8_4)
                i_1 = i
            
            i = *(i + (zx.q(x12_1 u< x8_4 ? 1 : 0) << 3))
        while (i != 0)
        
        if (i_1 != x20 + 0x18 && x8_4 u>= zx.d(*(i_1 + 0x20)) && zx.d(*(i_1.b + 0x28)) != 0xff
                && *(i_1 + 0x60) - *(i_1 + 0x58) == *(i_1 + 0x30))
            *(x20 + 0x90) = x8_4.w + 1
            Botan::TLS::Datagram_Handshake_IO::Handshake_Reassembly::message()
            return 
    
labelid_3:
    x8_3 = 0xff
else if (*(x20 + 0x20) == 0)
label_e71bb0:
    x8_3 = 0xff
else
    void* x8_2 = *(x20 + 0x30)
    
    if (x8_2 == 0)
    label_e71bb0_1:
        x8_3 = 0xff
    else
        uint32_t x9_2 = zx.d(*(*(x20 + 0x10) + 0x38))
        
        while (true)
            uint32_t x10_2 = zx.d(*(x8_2 + 0x1a))
            
            if (x9_2 u>= x10_2)
                if (x10_2 u>= x9_2)
                    x8_3 = 0xfe
                    break
                
                x8_2 += 8
            
            x8_2 = *x8_2
            
            if (x8_2 == 0)
                goto label_e71bb0_1

int32_t* entry_x8
*(entry_x8 + 0x10) = 0
*(entry_x8 + 0x18) = 0
*entry_x8 = x8_3
*(entry_x8 + 8) = 0

// 函数: _ZN5Botan3TLS7Channel12write_recordEPNS0_23Connection_Cipher_StateEthPKhm
// 地址: 0xe5e000
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg1 + 0x48)
uint8_t x22 = arg4.b
Botan::TLS::Connection_Cipher_State* x23 = arg2

if (x8 != 0)
label_e5e034:
    int64_t* x0 = *(arg1 + 0x38)
    
    if (x0 != 0)
        uint64_t x24 = zx.q(*(x8 + 0x20))
        uint64_t x0_1 = (*(*x0 + 0x30))(x0, zx.q(arg3.d))
        uint64_t entry_x5
        
        if (x23 == 0)
            Botan::TLS::write_unencrypted_record(arg1 + 0x80, x22, x24, x0_1, arg5, entry_x5)
        else
            Botan::TLS::write_record(arg1 + 0x80, x22, x24, x0_1, arg5, entry_x5, x23, 
                *(arg1 + 0x30))
        *(arg1 + 0x80)
        *(arg1 + 0x88)
        jump(*(**(arg1 + 0x18) + 0x10))
    
    Botan::assertion_failure("m_sequence_numbers", "Have a sequence numbers object", 
        "sequence_numbers", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x13ded)
else
    x8 = *(arg1 + 0x40)
    
    if (x8 != 0)
        goto label_e5e034

std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x0_4
uint8_t x1_4
int64_t x2_3
uint64_t x3_2
uint8_t* x4_2
uint64_t x5_2
x0_4, x1_4, x2_3, x3_2, x4_2, x5_2 = Botan::assertion_failure("m_pending_state || m_active_state", 
    "Some connection state exists", "write_record", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x13fa7)
return Botan::TLS::write_unencrypted_record(x0_4, x1_4, x2_3, x3_2, x4_2, x5_2) __tailcall

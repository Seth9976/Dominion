// 函数: _ZN5Botan3TLS7Channel11send_recordEhRKNSt6__ndk16vectorIhNS2_9allocatorIhEEEE
// 地址: 0xe5c3d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = *(arg1 + 0x38)

if (x0 == 0)
    return Botan::TLS::Handshake_State::set_version(Botan::assertion_failure("m_sequence_numbers", 
        "Have a sequence numbers object", "sequence_numbers", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x13ded)) __tailcall

uint8_t x0_1 = (*(*x0 + 0x28))()
int64_t* entry_x2
entry_x2[1]
return Botan::TLS::Channel::send_record_array(arg1.w, x0_1, zx.q(arg2.d), *entry_x2) __tailcall

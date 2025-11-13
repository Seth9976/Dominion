// 函数: _ZNK5Botan3TLS7Channel16sequence_numbersEv
// 地址: 0xe5b800
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t result = *(entry_x0 + 0x38)

if (result == 0)
    return Botan::TLS::Channel::read_cipher_state_epoch(Botan::assertion_failure(
        "m_sequence_numbers", "Have a sequence numbers object", "sequence_numbers", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x13ded)) __tailcall

return result

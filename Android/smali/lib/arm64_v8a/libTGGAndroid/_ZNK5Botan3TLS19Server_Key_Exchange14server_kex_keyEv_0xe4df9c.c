// 函数: _ZNK5Botan3TLS19Server_Key_Exchange14server_kex_keyEv
// 地址: 0xe4df9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t result = *(entry_x0 + 0x18)

if (result != 0)
    return result

Botan::TLS::Handshake_IO* x0
Botan::TLS::Handshake_State* x1
int64_t x2
x0, x1, x2 = Botan::assertion_failure("m_kex_key is not null", &data_793a18, "server_kex_key", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x13a13)
return Botan::TLS::Finished::Finished(x0, x1, x2) __tailcall

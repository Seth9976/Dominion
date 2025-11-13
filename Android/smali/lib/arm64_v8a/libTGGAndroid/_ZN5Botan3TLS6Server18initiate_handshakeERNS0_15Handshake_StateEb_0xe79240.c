// 函数: _ZN5Botan3TLS6Server18initiate_handshakeERNS0_15Handshake_StateEb
// 地址: 0xe79240
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = arg2
void* x0_1 = __dynamic_cast(x19, _typeinfo_for_Botan::TLS::Handshake_State, 
    _typeinfo_for_Botan::TLS::Server_Handshake_State, 0)

if (x0_1 == 0)
    __cxa_bad_cast()
    noreturn

int32_t entry_x2
*(x0_1 + 0x170) = (not.d(entry_x2)).b & 1
int64_t* x0_2 = *(x19 + 0x10)
void* __offset(vtable_for_Botan::TLS::Hello_Request, 0x10) var_18 =
    _vtable_for_Botan::TLS::Hello_Request + 0x10
(*(*x0_2 + 8))(x0_2, &var_18)
void* result

if (result == 0)
    return result

void* result_1 = result
return operator delete(result)

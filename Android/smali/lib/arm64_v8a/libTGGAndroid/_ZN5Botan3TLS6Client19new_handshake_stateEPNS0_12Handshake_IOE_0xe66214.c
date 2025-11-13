// 函数: _ZN5Botan3TLS6Client19new_handshake_stateEPNS0_12Handshake_IOE
// 地址: 0xe66214
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = operator new(0x180)
int64_t x8 = *(arg1 + 0x18)
result[3] = 0
result[1] = x8
int64_t* entry_x1
result[2] = entry_x1
*result = _vtable_for_Botan::TLS::Handshake_State + 0x10
int16_t x0_1 = (**entry_x1)(entry_x1)
result[7].d = 0x10001
result[4].w = x0_1
result[5].w = 0
result[6] = 0
__builtin_memset(result + 0x3c, 0, 0x2d)
__builtin_memset(&result[0xe], 0, 0x108)
*result = &_vtable_for_Botan::TLS::(anonymous namespace)::Client_Handshake_State{for `Botan::TLS::Handshake_State'}
result[0x2f].b = 0
return result

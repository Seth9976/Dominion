// 函数: _ZN5Botan3TLS6Server19new_handshake_stateEPNS0_12Handshake_IOE
// 地址: 0xe790d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = operator new(0x190)
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
result[0x2e].w = 1
result[0x2c] = 0
result[0x2d] = 0
result[0x31] = 0
*result = _vtable_for_Botan::TLS::Server_Handshake_State + 0x10
int32_t x8_4 = result[3].d
__builtin_memset(result + 0x3c, 0, 0x2d)
__builtin_memset(&result[0xe], 0, 0xf0)
result[0x2f] = 0
result[0x30] = 0
result[3].d = x8_4 | 4
return result

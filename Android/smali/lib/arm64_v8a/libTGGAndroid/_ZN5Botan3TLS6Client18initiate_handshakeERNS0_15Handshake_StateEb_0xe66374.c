// 函数: _ZN5Botan3TLS6Client18initiate_handshakeERNS0_15Handshake_StateEb
// 地址: 0xe66374
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = *(arg1 + 0x28)
int16_t x0_1 = (*(*x0 + 0x108))(x0, zx.q(zx.d(*(arg2 + 0x21)) u> 0xfa ? 1 : 0))
int16_t var_38 = 0
int64_t var_40 = 0
int32_t entry_x2
int64_t result =
    Botan::TLS::Client::send_client_hello(arg1, arg2, zx.q(entry_x2) & 1, zx.q(x0_1), &var_38)

if ((zx.d(var_38.b) & 1) == 0)
    return result

void* var_28
return operator delete(var_28)

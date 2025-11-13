// 函数: sub_f1be14
// 地址: 0xf1be14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = arg1[0x2e]
*arg1 = &_vtable_for_Botan::TLS::(anonymous namespace)::Client_Handshake_State{for `Botan::TLS::Handshake_State'}
arg1[0x2e] = 0

if (x20 != 0)
    Botan::TLS::Session::~Session()
    operator delete(x20)

int64_t* x0_2 = arg1[0x2d]
arg1[0x2d] = 0

if (x0_2 != 0)
    (*(*x0_2 + 8))()

return Botan::TLS::Handshake_State::~Handshake_State() __tailcall

// 函数: _ZN5Botan3TLS22Server_Handshake_StateD0Ev
// 地址: 0xf1c200
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x21 = entry_x0[0x2f]
*entry_x0 = _vtable_for_Botan::TLS::Server_Handshake_State + 0x10

if (x21 != 0)
    int64_t* x20_1 = entry_x0[0x30]
    void* x0_1
    
    if (x20_1 == x21)
        x0_1 = x21
    else
        do
            x20_1 = &x20_1[-0x11]
            (*(*x20_1 + 0x10))(x20_1)
        while (x21 != x20_1)
        
        x0_1 = entry_x0[0x2f]
    
    entry_x0[0x30] = x21
    operator delete(x0_1)

Botan::TLS::Handshake_State::~Handshake_State()
return operator delete(entry_x0) __tailcall

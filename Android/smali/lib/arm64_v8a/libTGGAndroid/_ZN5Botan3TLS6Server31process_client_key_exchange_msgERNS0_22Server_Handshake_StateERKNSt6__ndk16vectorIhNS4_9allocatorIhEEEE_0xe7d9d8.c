// 函数: _ZN5Botan3TLS6Server31process_client_key_exchange_msgERNS0_22Server_Handshake_StateERKNSt6__ndk16vectorIhNS4_9allocatorIhEEEE
// 地址: 0xe7d9d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_1

if ((zx.d(*(arg2 + 0x1c)) & 0x10) != 0)
    x8_1 = *(arg2 + 0x138)

int32_t x8_3

if ((zx.d(*(arg2 + 0x1c)) & 0x10) == 0 || *(x8_1 + 8) == *(x8_1 + 0x10))
    x8_3 = 0x2000
else
    x8_3 = 0x400

*(arg2 + 0x18) |= x8_3
std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* x0 = operator new(0x38)
*(arg1 + 0x30)
std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* x21_1 = x0
Botan::TLS::Handshake_State* entry_x2
Botan::TLS::Client_Key_Exchange::Client_Key_Exchange(x0, entry_x2, arg2, *(arg2 + 0x168), 
    *(arg1 + 0xd0), *(arg1 + 0x28))
void** x20_1 = *(arg2 + 0x140)
*(arg2 + 0x140) = x21_1

if (x20_1 != 0)
    void* x0_1 = x20_1[4]
    *x20_1 = _vtable_for_Botan::TLS::Client_Key_Exchange + 0x10
    
    if (x0_1 != 0)
        int64_t x8_6 = x20_1[6]
        x20_1[5] = x0_1
        Botan::deallocate_memory(x0_1, x8_6 - x0_1, 1)
    
    void* x0_2 = x20_1[1]
    
    if (x0_2 != 0)
        x20_1[2] = x0_2
        operator delete(x0_2)
    
    operator delete(x20_1)
    x21_1 = *(arg2 + 0x140)

int64_t* x0_4 = *(arg2 + 8)
(*(*x0_4 + 0x70))(x0_4, x21_1)
Botan::TLS::Handshake_State var_98
Botan::TLS::Session_Keys::Session_Keys(&var_98, arg2, (*(arg2 + 0x140)).b + 0x20)
Botan::TLS::Session_Keys::operator=(arg2 + 0x70)
return Botan::TLS::Session_Keys::~Session_Keys()

// 函数: _ZN5Botan3TLS19Server_Key_ExchangeD2Ev
// 地址: 0xeee224
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[7]
*entry_x0 = _vtable_for_Botan::TLS::Server_Key_Exchange + 0x10

if (x0 != 0)
    entry_x0[8] = x0
    operator delete(x0)

void* x0_1 = entry_x0[4]

if (x0_1 != 0)
    entry_x0[5] = x0_1
    operator delete(x0_1)

int64_t* result = entry_x0[3]
entry_x0[3] = 0

if (result != 0)
    result = (*(*result + 8))()

void* x20 = entry_x0[2]
entry_x0[2] = 0

if (x20 != 0)
    memset(x20 + 0x18, 0, 0x800)
    void* x0_3 = *x20
    
    if (x0_3 != 0)
        int64_t x8_3 = *(x20 + 0x10)
        *(x20 + 8) = x0_3
        Botan::deallocate_memory(x0_3, x8_3 - x0_3, 1)
    
    result = operator delete(x20)

void* x20_1 = entry_x0[1]
entry_x0[1] = 0

if (x20_1 == 0)
    return result

Botan::SRP6_Server_Session::~SRP6_Server_Session()
return operator delete(x20_1) __tailcall

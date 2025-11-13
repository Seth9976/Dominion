// 函数: _ZN5Botan3TLS15Handshake_StateD2Ev
// 地址: 0xeefadc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void** x20 = entry_x0[0x2c]
entry_x0[0x2c] = 0
*entry_x0 = _vtable_for_Botan::TLS::Handshake_State + 0x10

if (x20 != 0)
    void* x0 = x20[1]
    *x20 = _vtable_for_Botan::TLS::Finished + 0x10
    
    if (x0 != 0)
        x20[2] = x0
        operator delete(x0)
    
    operator delete(x20)

void** x20_1 = entry_x0[0x2b]
entry_x0[0x2b] = 0

if (x20_1 != 0)
    void* x0_2 = x20_1[1]
    *x20_1 = _vtable_for_Botan::TLS::Finished + 0x10
    
    if (x0_2 != 0)
        x20_1[2] = x0_2
        operator delete(x0_2)
    
    operator delete(x20_1)

void** x20_2 = entry_x0[0x2a]
entry_x0[0x2a] = 0

if (x20_2 != 0)
    void* x0_4 = x20_2[2]
    *x20_2 = _vtable_for_Botan::TLS::New_Session_Ticket + 0x10
    
    if (x0_4 != 0)
        x20_2[3] = x0_4
        operator delete(x0_4)
    
    operator delete(x20_2)

void** x20_3 = entry_x0[0x29]
entry_x0[0x29] = 0

if (x20_3 != 0)
    void* x0_6 = x20_3[1]
    *x20_3 = _vtable_for_Botan::TLS::Certificate_Verify + 0x10
    
    if (x0_6 != 0)
        x20_3[2] = x0_6
        operator delete(x0_6)
    
    operator delete(x20_3)

void** x20_4 = entry_x0[0x28]
entry_x0[0x28] = 0

if (x20_4 != 0)
    void* x0_8 = x20_4[4]
    *x20_4 = _vtable_for_Botan::TLS::Client_Key_Exchange + 0x10
    
    if (x0_8 != 0)
        int64_t x8_6 = x20_4[6]
        x20_4[5] = x0_8
        Botan::deallocate_memory(x0_8, x8_6 - x0_8, 1)
    
    void* x0_9 = x20_4[1]
    
    if (x0_9 != 0)
        x20_4[2] = x0_9
        operator delete(x0_9)
    
    operator delete(x20_4)

void** x20_5 = entry_x0[0x27]
entry_x0[0x27] = 0

if (x20_5 != 0)
    void* x23_1 = x20_5[1]
    *x20_5 = _vtable_for_Botan::TLS::Certificate + 0x10
    
    if (x23_1 != 0)
        int64_t* x21_1 = x20_5[2]
        void* x0_12
        
        if (x21_1 == x23_1)
            x0_12 = x23_1
        else
            do
                x21_1 = &x21_1[-0x11]
                (*(*x21_1 + 0x10))(x21_1)
            while (x23_1 != x21_1)
            
            x0_12 = x20_5[1]
        
        x20_5[2] = x23_1
        operator delete(x0_12)
    
    operator delete(x20_5)

void* x0_14 = entry_x0[0x26]
entry_x0[0x26] = 0

if (x0_14 != 0)
    operator delete(x0_14)

void** x1_2 = entry_x0[0x25]
entry_x0[0x25] = 0

if (x1_2 != 0)
    sub_f4edb8(&entry_x0[0x25], x1_2)

void* x20_6 = entry_x0[0x24]
entry_x0[0x24] = 0

if (x20_6 != 0)
    Botan::TLS::Server_Key_Exchange::~Server_Key_Exchange()
    operator delete(x20_6)

void** x20_7 = entry_x0[0x23]
entry_x0[0x23] = 0

if (x20_7 != 0)
    void* x0_18 = x20_7[1]
    *x20_7 = _vtable_for_Botan::TLS::Certificate_Status + 0x10
    
    if (x0_18 != 0)
        x20_7[2] = x0_18
        operator delete(x0_18)
    
    operator delete(x20_7)

void** x20_8 = entry_x0[0x22]
entry_x0[0x22] = 0

if (x20_8 != 0)
    void* x23_2 = x20_8[1]
    *x20_8 = _vtable_for_Botan::TLS::Certificate + 0x10
    
    if (x23_2 != 0)
        int64_t* x21_2 = x20_8[2]
        void* x0_21
        
        if (x21_2 == x23_2)
            x0_21 = x23_2
        else
            do
                x21_2 = &x21_2[-0x11]
                (*(*x21_2 + 0x10))(x21_2)
            while (x23_2 != x21_2)
            
            x0_21 = x20_8[1]
        
        x20_8[2] = x23_2
        operator delete(x0_21)
    
    operator delete(x20_8)

void** x20_9 = entry_x0[0x21]
entry_x0[0x21] = 0

if (x20_9 != 0)
    x20_9[0xa]
    *x20_9 = _vtable_for_Botan::TLS::Server_Hello + 0x10
    std::__ndk1::__tree<std::__ndk1::__value_type<Botan::TLS::Handshake_Extension_Type, std::__ndk1::unique_ptr<Botan::TLS::Extension, std::__ndk1::default_delete<Botan::TLS::Extension> > >, std::__ndk1::__map_value_compare<Botan::TLS::Handshake_Extension_Type, std::__ndk1::__value_type<Botan::TLS::Handshake_Extension_Type, std::__ndk1::unique_ptr<Botan::TLS::Extension, std::__ndk1::default_delete<Botan::TLS::Extension> > >, std::__ndk1::less<Botan::TLS::Handshake_Extension_Type>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::TLS::Handshake_Extension_Type, std::__ndk1::unique_ptr<Botan::TLS::Extension, std::__ndk1::default_delete<Botan::TLS::Extension> > > > >::destroy(
        &x20_9[9])
    void* x0_24 = x20_9[5]
    
    if (x0_24 != 0)
        x20_9[6] = x0_24
        operator delete(x0_24)
    
    void* x0_25 = x20_9[2]
    
    if (x0_25 != 0)
        x20_9[3] = x0_25
        operator delete(x0_25)
    
    operator delete(x20_9)

void** x1_4 = entry_x0[0x20]
entry_x0[0x20] = 0

if (x1_4 != 0)
    sub_f4ed30(&entry_x0[0x20], x1_4)

void* x0_28 = entry_x0[0x1d]

if (x0_28 != 0)
    entry_x0[0x1e] = x0_28
    operator delete(x0_28)

Botan::TLS::Session_Keys::~Session_Keys()
int64_t* result = entry_x0[2]
entry_x0[2] = 0

if (result == 0)
    return result

jump(*(*result + 0x40))

// 函数: _ZN5Botan3TLS6Server14session_resumeERNS0_22Server_Handshake_StateEbRNS0_7SessionE
// 地址: 0xe7b408
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::TLS::Server_Hello* x19 = arg2
int64_t* i_6 = *(arg2 + 0x100) + 0x90
int64_t* i = *i_6
void* var_d8
char x28

if (i == 0)
    x28 = 0
else
    int64_t* i_5 = i_6
    
    do
        int32_t x11_1 = i[4].d
        
        if (x11_1 s>= 0x23)
            i_5 = i
        
        i = i[zx.q(x11_1 s< 0x23 ? 1 : 0)]
    while (i != 0)
    
    if (i_5 == i_6 || i_5[4].d s> 0x23)
        x28 = 0
    else
        int64_t x0 = i_5[5]
        
        if (x0 == 0)
            x28 = 0
        else if (__dynamic_cast(x0, _typeinfo_for_Botan::TLS::Extension, 
                _typeinfo_for_Botan::TLS::Session_Ticket, 0) == 0)
            x28 = 0
        else
            Botan::TLS::Client_Hello::session_ticket()
            void* x0_3 = var_d8
            int64_t var_d0
            x28 = (x0_3 == var_d0 ? 1 : 0).b & arg3.b
            
            if (x0_3 != 0)
                void* var_d0_1 = x0_3
                operator delete(x0_3)

Botan::TLS::Handshake_IO* x0_4 = operator new(0x60)
Botan::TLS::Handshake_Hash* x24 = *(x19 + 0x10)
Botan::RandomNumberGenerator* x25 = *(arg1 + 0x18)
Botan::TLS::Callbacks* x27 = *(arg1 + 0x28)
std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* x26 = *(arg1 + 0x30)
Botan::TLS::Channel::secure_renegotiation_data_for_server_hello()
void* __offset(Botan::TLS::Server_Handshake_State, 0xd8) var_150 = arg1 + 0xd8
char var_158 = x28
Botan::OctetString* entry_x3
Botan::OctetString* var_160 = entry_x3
Botan::TLS::Server_Hello::Server_Hello(x0_4, x24, x19 + 0xe8, x27, x25, x26, &var_d8, 
    *(x19 + 0x100))
Botan::TLS::Handshake_State::server_hello(x19)
void* x0_8 = var_d8

if (x0_8 != 0)
    void* var_d0_2 = x0_8
    operator delete(x0_8)

*(x19 + 0x108)
Botan::TLS::Channel::secure_renegotiation_check(arg1)
*(x19 + 0x171) = 1
Botan::TLS::Session_Keys::Session_Keys(&var_d8, x19, entry_x3.b + 0x38)
Botan::TLS::Session_Keys::operator=(x19 + 0x70)
Botan::TLS::Session_Keys::~Session_Keys()

if (x19 + 0x178 != entry_x3 + 0x60)
    *(entry_x3 + 0x68)
    std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> >::assign<Botan::X509_Certificate*>(
        x19 + 0x178, *(entry_x3 + 0x60))

int64_t* x0_13 = *(arg1 + 0x18)

if (((*(*x0_13 + 0x28))(x0_13, entry_x3) & 1) == 0)
    int64_t* x0_15 = *(arg1 + 0x20)
    (*(*x0_15 + 0x10))(x0_15, entry_x3 + 8)
    int64_t* i_7 = *(x19 + 0x108) + 0x50
    int64_t* i_1 = *i_7
    
    if (i_1 != 0)
        int64_t* i_3 = i_7
        
        do
            int32_t x11_3 = i_1[4].d
            
            if (x11_3 s>= 0x23)
                i_3 = i_1
            
            i_1 = i_1[zx.q(x11_3 s< 0x23 ? 1 : 0)]
        while (i_1 != 0)
        
        if (i_3 != i_7 && i_3[4].d s<= 0x23)
            int64_t x0_16 = i_3[5]
            
            if (x0_16 != 0 && __dynamic_cast(x0_16, _typeinfo_for_Botan::TLS::Extension, 
                    _typeinfo_for_Botan::TLS::Session_Ticket, 0) != 0)
                Botan::TLS::Handshake_IO* x0_18 = operator new(0x28)
                Botan::TLS::Handshake_IO* x23_2 = x0_18
                Botan::TLS::New_Session_Ticket::New_Session_Ticket(x0_18, *(x19 + 0x10))
                void** x24_1 = *(x19 + 0x150)
                *(x19 + 0x150) = x23_2
                
                if (x24_1 != 0)
                    void* x0_19 = x24_1[2]
                    *x24_1 = _vtable_for_Botan::TLS::New_Session_Ticket + 0x10
                    
                    if (x0_19 != 0)
                        x24_1[3] = x0_19
                        operator delete(x0_19)
                    
                    operator delete(x24_1)
                    x23_2 = *(x19 + 0x150)
                
                int64_t* x0_21 = *(x19 + 8)
                (*(*x0_21 + 0x70))(x0_21, x23_2)

int64_t* i_8 = *(x19 + 0x108) + 0x50
int64_t* i_2 = *i_8

if (i_2 != 0)
    int64_t* i_4 = i_8
    
    do
        int32_t x11_5 = i_2[4].d
        
        if (x11_5 s>= 0x23)
            i_4 = i_2
        
        i_2 = i_2[zx.q(x11_5 s< 0x23 ? 1 : 0)]
    while (i_2 != 0)
    
    if (i_4 != i_8 && i_4[4].d s<= 0x23)
        int64_t x0_22 = i_4[5]
        
        if (x0_22 != 0 && __dynamic_cast(x0_22, _typeinfo_for_Botan::TLS::Extension, 
                _typeinfo_for_Botan::TLS::Session_Ticket, 0) != 0 && *(x19 + 0x150) == 0)
            int64_t* x0_24 = *(arg1 + 0xd0)
            char var_f0 = 0x14
            char var_108 = 0x1c
            int64_t var_ef
            __builtin_strncpy(&var_ef, "tls-server", 0xb)
            int64_t var_107
            __builtin_strncpy(&var_107, "session-ticket", 0xf)
            int16_t var_120 = 0
            (*(*x0_24 + 0x60))(x0_24, &var_f0, &var_108, &var_120)
            
            if ((zx.d(var_120.b) & 1) == 0)
                if ((zx.d(var_108) & 1) != 0)
                    goto label_e7b824
                
                goto label_e7b774
            
            void* var_110
            operator delete(var_110)
            void* var_e0
            
            if ((zx.d(var_108) & 1) == 0)
            label_e7b774:
                
                if ((zx.d(var_f0) & 1) != 0)
                    operator delete(var_e0)
            else
            label_e7b824:
                void* var_f8
                operator delete(var_f8)
                
                if ((zx.d(var_f0) & 1) != 0)
                    operator delete(var_e0)
            Botan::TLS::Handshake_IO* x0_26 = operator new(0x28)
            Botan::TLS::Handshake_Hash* x24_2 = *(x19 + 0x10)
            *(arg1 + 0x30)
            Botan::TLS::Session::encrypt(entry_x3, &var_d8)
            (*(**(arg1 + 0x28) + 0xf0))()
            Botan::TLS::New_Session_Ticket::New_Session_Ticket(x0_26, x24_2, x19 + 0xe8, &var_f0)
            void** x22_1 = *(x19 + 0x150)
            *(x19 + 0x150) = x0_26
            
            if (x22_1 != 0)
                void* x0_31 = x22_1[2]
                *x22_1 = _vtable_for_Botan::TLS::New_Session_Ticket + 0x10
                
                if (x0_31 != 0)
                    x22_1[3] = x0_31
                    operator delete(x0_31)
                
                operator delete(x22_1)
            
            (*(**(x19 + 8) + 0x70))()
            void* x0_36 = var_f0.q
            
            if (x0_36 != 0)
                var_ef = x0_36
                operator delete(x0_36)
            
            void* x0_37 = var_d8
            
            if (x0_37 != 0)
                void* var_d0_3 = x0_37
                int64_t var_c8
                Botan::deallocate_memory(x0_37, var_c8 - x0_37, 1)
            
            if (*(x19 + 0x150) == 0)
                Botan::TLS::Handshake_IO* x0_38 = operator new(0x28)
                Botan::TLS::Handshake_IO* x22_2 = x0_38
                Botan::TLS::New_Session_Ticket::New_Session_Ticket(x0_38, *(x19 + 0x10))
                void** x21_3 = *(x19 + 0x150)
                *(x19 + 0x150) = x22_2
                
                if (x21_3 != 0)
                    void* x0_39 = x21_3[2]
                    *x21_3 = _vtable_for_Botan::TLS::New_Session_Ticket + 0x10
                    
                    if (x0_39 != 0)
                        x21_3[3] = x0_39
                        operator delete(x0_39)
                    
                    operator delete(x21_3)
                    x22_2 = *(x19 + 0x150)
                
                int64_t* x0_41 = *(x19 + 8)
                (*(*x0_41 + 0x70))(x0_41, x22_2)

int64_t* x0_42 = *(x19 + 0x10)
var_d8 = _vtable_for_Botan::TLS::Change_Cipher_Spec + 0x10
(*(*x0_42 + 8))(x0_42, &var_d8)
void* var_138

if (var_138 != 0)
    void* var_130_1 = var_138
    operator delete(var_138)

Botan::TLS::Channel::change_cipher_spec_writer(arg1)
Botan::TLS::Handshake_IO* x0_45 = operator new(0x20)
Botan::TLS::Handshake_IO* x20_1 = x0_45
Botan::TLS::Finished::Finished(x0_45, *(x19 + 0x10), x19)
void** x21_4 = *(x19 + 0x158)
*(x19 + 0x158) = x20_1

if (x21_4 != 0)
    void* x0_46 = x21_4[1]
    *x21_4 = _vtable_for_Botan::TLS::Finished + 0x10
    
    if (x0_46 != 0)
        x21_4[2] = x0_46
        operator delete(x0_46)
    
    operator delete(x21_4)
    x20_1 = *(x19 + 0x158)

int64_t* x0_48 = *(x19 + 8)
int64_t result = (*(*x0_48 + 0x70))(x0_48, x20_1)
*(x19 + 0x18) |= 0x2000
return result

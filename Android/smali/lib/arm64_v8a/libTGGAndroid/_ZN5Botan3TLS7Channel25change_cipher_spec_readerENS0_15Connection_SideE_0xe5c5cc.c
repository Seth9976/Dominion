// 函数: _ZN5Botan3TLS7Channel25change_cipher_spec_readerENS0_15Connection_SideE
// 地址: 0xe5c5cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x26
void* var_40 = entry_x26
uint64_t entry_x25
uint64_t var_38 = entry_x25
void* entry_x24
void* var_30 = entry_x24
uint64_t entry_x22
uint64_t var_20 = entry_x22
uint64_t entry_x21
uint64_t var_18 = entry_x21
int64_t entry_x20
int64_t var_10 = entry_x20
void* entry_x19
void* var_8 = entry_x19
void* x23 = *(arg1 + 0x48)
void* x8_1

if (x23 != 0)
    x8_1 = *(x23 + 0x108)

if (x23 == 0 || x8_1 == 0)
    Botan::assertion_failure("pending && pending->server_hello()", "Have received server hello", 
        "change_cipher_spec_reader", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
        0x13e5e)
else
    if (zx.d(*(x8_1 + 0x42)) != 0)
        goto label_e5c914
    
    entry_x19 = arg1
    int64_t* x0 = *(arg1 + 0x38)
    int64_t* x0_1
    
    if (x0 != 0)
        int32_t entry_x1
        entry_x22 = zx.q(entry_x1)
        (*(*x0 + 0x10))()
        x0_1 = *(entry_x19 + 0x38)
    
    if (x0 == 0 || x0_1 == 0)
        Botan::assertion_failure("m_sequence_numbers", "Have a sequence numbers object", 
            "sequence_numbers", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
            0x13ded)
    label_e5c914:
        void** x0_15 = __cxa_allocate_exception(0x20)
        int64_t x0_16
        int128_t v0_1
        x0_16, v0_1 = operator new(0x30)
        int64_t var_70 = x0_16
        int128_t var_80 = data_71aa70
        __builtin_strncpy(x0_16, "Negotiated unknown compression algorithm", 0x29)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "Internal error: ", &var_80)
        *x0_15 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_15[1])
        char var_68
        void* var_58
        
        if ((zx.d(var_68) & 1) != 0)
            operator delete(var_58)
        *x0_15 = _vtable_for_Botan::Internal_Error + 0x10
        __cxa_throw(x0_15, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
        noreturn
    
    int32_t x0_2 = (*(*x0_1 + 0x20))()
    entry_x26 = entry_x19 + 0x70
    void* x8_7 = *entry_x26
    entry_x21 = zx.q(x0_2)
    
    if (x8_7 != 0)
        while (true)
            uint32_t x9_1 = zx.d(*(x8_7 + 0x20))
            uint32_t temp0_1 = zx.d((entry_x21.d).w)
            
            if (x9_1 u<= temp0_1)
                if (x9_1 u>= temp0_1)
                    break
                
                x8_7 += 8
            
            x8_7 = *x8_7
            
            if (x8_7 == 0)
                goto label_e5c640
        
        Botan::assertion_failure("m_read_cipher_states.count(epoch) == 0", 
            "No read cipher state currently set for next epoch", "change_cipher_spec_reader", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x13e68)
    else
    label_e5c640:
        int64_t x0_3 = operator new(0x40)
        entry_x25 = zx.q(*(x23 + 0x20))
        entry_x20 = x0_3
        entry_x24 = x23 + 0x28
        int64_t* i_5 = *(x23 + 0x108) + 0x50
        int64_t* i = *i_5
        x23 += 0x70
        
        if (i != 0)
            int64_t* i_4 = i_5
            
            do
                int32_t x11_1 = i[4].d
                
                if (x11_1 s>= 0x16)
                    i_4 = i
                
                i = i[zx.q(x11_1 s< 0x16 ? 1 : 0)]
            while (i != 0)
            
            if (i_4 != i_5 && i_4[4].d s<= 0x16)
                int64_t x0_4 = i_4[5]
                
                if (x0_4 != 0)
                    __dynamic_cast(x0_4, _typeinfo_for_Botan::TLS::Extension, 
                        _typeinfo_for_Botan::TLS::Encrypt_then_MAC, 0)

bool x2_2

x2_2 = entry_x22.d == 1 ? true : true

Botan::TLS::Connection_Cipher_State::Connection_Cipher_State(entry_x20, entry_x25, x2_2, nullptr, 
    entry_x24, x23.b)
void** result = operator new(0x20)
int64_t* x24_1 = &result[1]
*x24_1 = 0
result[2] = 0
result[3] = entry_x20
*result = _vtable_for_std::__ndk1::__shared_ptr_pointer<Botan::TLS::Connection_Cipher_State*, std::__ndk1::default_delete<Botan::TLS::Connection_Cipher_State>, std::__ndk1::allocator<Botan::TLS::Connection_Cipher_State> >
    + 0x10
void* x8_11 = *entry_x26
void** result_1 = result
int64_t* x23_1
void* x25

if (x8_11 == 0)
    x25 = entry_x26
    x23_1 = *x25
    
    if (x23_1 == 0)
    label_e5c7cc:
        int64_t* x0_8 = operator new(0x38)
        x0_8[4].w = (entry_x21.d).w
        x0_8[5] = 0
        x0_8[6] = 0
        *x0_8 = 0
        x0_8[1] = 0
        x0_8[2] = entry_x26
        *x25 = x0_8
        x23_1 = x0_8
        int64_t x8_13 = **(entry_x19 + 0x68)
        int64_t* x1_3
        
        if (x8_13 == 0)
            x1_3 = x23_1
        else
            *(entry_x19 + 0x68) = x8_13
            x1_3 = *x25
        
        result = std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(
            *(entry_x19 + 0x70), x1_3)
        *(entry_x19 + 0x78) += 1
else
    x25 = entry_x19 + 0x70
    
    while (true)
        uint32_t x9_3 = zx.d(*(x8_11 + 0x20))
        uint32_t temp1_1 = zx.d((entry_x21.d).w)
        void* x9_2
        
        if (x9_3 u<= temp1_1)
            if (x9_3 u>= temp1_1)
                break
            
            x25 = x8_11 + 8
            x9_2 = *x25
            
            if (x9_2 == 0)
                break
        else
            x9_2 = *x8_11
            
            if (x9_2 == 0)
                entry_x26 = x8_11
                x25 = x8_11
                x23_1 = *x25
                
                if (x23_1 != 0)
                    goto label_e5c824
                
                goto label_e5c7cc
            
            x25 = x8_11
        
        x8_11 = x9_2
    
    entry_x26 = x8_11
    x23_1 = *x25
    
    if (x23_1 == 0)
        goto label_e5c7cc
label_e5c824:
int32_t i_1

do
    i_1 = __stxr(__ldxr(x24_1) + 1, x24_1)
while (i_1 != 0)
int64_t* x19 = x23_1[6]
x23_1[5] = entry_x20
x23_1[6] = result_1

if (x19 != 0)
    int64_t x9_5
    int32_t i_2
    
    do
        x9_5 = __ldaxr(&x19[1])
        i_2 = __stlxr(x9_5 - 1, &x19[1])
    while (i_2 != 0)
    
    if (x9_5 == 0)
        (*(*x19 + 0x10))(x19)
        result = std::__ndk1::__shared_weak_count::__release_weak()

int64_t x8_21
int32_t i_3

do
    x8_21 = __ldaxr(x24_1)
    i_3 = __stlxr(x8_21 - 1, x24_1)
while (i_3 != 0)

if (x8_21 != 0)
    return result

(*(*result_1 + 0x10))(result_1)
return std::__ndk1::__shared_weak_count::__release_weak() __tailcall

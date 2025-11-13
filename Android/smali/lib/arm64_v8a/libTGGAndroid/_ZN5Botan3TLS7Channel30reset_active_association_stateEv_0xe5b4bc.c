// 函数: _ZN5Botan3TLS7Channel30reset_active_association_stateEv
// 地址: 0xe5b4bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0

if (zx.d(*(entry_x0 + 9)) == 0)
    Botan::assertion_failure("m_is_datagram", &data_793a18, "reset_active_association_state", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x13dda)
    return Botan::TLS::Channel::~Channel() __tailcall

int64_t* x0 = *(entry_x0 + 0x40)
*(entry_x0 + 0x40) = 0

if (x0 != 0)
    (*(*x0 + 8))()

void* x23_1 = entry_x0 + 0x70
*x23_1
std::__ndk1::__tree<std::__ndk1::__value_type<uint16_t, std::__ndk1::shared_ptr<Botan::TLS::Connection_Cipher_State> >, std::__ndk1::__map_value_compare<uint16_t, std::__ndk1::__value_type<uint16_t, std::__ndk1::shared_ptr<Botan::TLS::Connection_Cipher_State> >, std::__ndk1::less<uint16_t>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<uint16_t, std::__ndk1::shared_ptr<Botan::TLS::Connection_Cipher_State> > > >::destroy(
    entry_x0 + 0x68)
*(entry_x0 + 0x68) = x23_1
*x23_1 = 0
*(entry_x0 + 0x58)
*(entry_x0 + 0x78) = 0
std::__ndk1::__tree<std::__ndk1::__value_type<uint16_t, std::__ndk1::shared_ptr<Botan::TLS::Connection_Cipher_State> >, std::__ndk1::__map_value_compare<uint16_t, std::__ndk1::__value_type<uint16_t, std::__ndk1::shared_ptr<Botan::TLS::Connection_Cipher_State> >, std::__ndk1::less<uint16_t>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<uint16_t, std::__ndk1::shared_ptr<Botan::TLS::Connection_Cipher_State> > > >::destroy(
    entry_x0 + 0x50)
*(entry_x0 + 0x50) = entry_x0 + 0x58
*(entry_x0 + 0x58) = 0
*(entry_x0 + 0x60) = 0
std::__ndk1::__tree_node_base<void*>* x0_3 = operator new(0x38)
*(x0_3 + 0x20) = 0
*(x0_3 + 0x28) = 0
*(x0_3 + 0x30) = 0
*x0_3 = 0
*(x0_3 + 8) = 0
*(x0_3 + 0x10) = entry_x0 + 0x58
*(entry_x0 + 0x50) = x0_3
*(entry_x0 + 0x58) = x0_3
std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(x0_3, x0_3)
*(entry_x0 + 0x60) += 1
int64_t* x21_2 = *(x0_3 + 0x30)
*(x0_3 + 0x28) = 0
*(x0_3 + 0x30) = 0
int64_t x9_1

if (x21_2 != 0)
    int32_t i
    
    do
        x9_1 = __ldaxr(&x21_2[1])
        i = __stlxr(x9_1 - 1, &x21_2[1])
    while (i != 0)

void* x8_6

if (x21_2 != 0 && x9_1 == 0)
    (*(*x21_2 + 0x10))(x21_2)
    std::__ndk1::__shared_weak_count::__release_weak()
    x8_6 = *x23_1
    
    if (x8_6 != 0)
        goto label_e5b588
    
    goto label_e5b5e0

x8_6 = *x23_1
void* x21_3
void* x22_1

if (x8_6 != 0)
label_e5b588:
    
    if (zx.d(*(x8_6 + 0x20)) == 0)
        x22_1 = entry_x0 + 0x70
        x23_1 = x8_6
        x21_3 = *x22_1
        
        if (x21_3 != 0)
            goto label_e5b5b0
        
        goto label_e5b604
    
    do
        x23_1 = x8_6
        x8_6 = *x8_6
        
        if (x8_6 == 0)
            goto label_e5b5e0
    while (zx.d(*(x8_6 + 0x20)) != 0)
    
    x22_1 = x23_1
    x23_1 = x8_6
    x21_3 = *x22_1
    
    if (x21_3 == 0)
        goto label_e5b604
    
    goto label_e5b5b0

label_e5b5e0:
x22_1 = x23_1
x21_3 = *x22_1
int64_t* x20_1

if (x21_3 == 0)
label_e5b604:
    std::__ndk1::__tree_node_base<void*>* x0_6 = operator new(0x38)
    *(x0_6 + 0x20) = 0
    *(x0_6 + 0x28) = 0
    *(x0_6 + 0x30) = 0
    *x0_6 = 0
    *(x0_6 + 8) = 0
    *(x0_6 + 0x10) = x23_1
    *x22_1 = x0_6
    int64_t x8_10 = **(entry_x0 + 0x68)
    std::__ndk1::__tree_node_base<void*>* x1_3
    
    if (x8_10 == 0)
        x1_3 = x0_6
    else
        *(entry_x0 + 0x68) = x8_10
        x1_3 = *x22_1
    
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(
        *(entry_x0 + 0x70), x1_3)
    *(entry_x0 + 0x78) += 1
    x20_1 = *(x0_6 + 0x30)
    *(x0_6 + 0x28) = 0
    *(x0_6 + 0x30) = 0
    
    if (x20_1 == 0)
        goto label_e5b674
    
    goto label_e5b66c

label_e5b5b0:
x20_1 = *(x21_3 + 0x30)
*(x21_3 + 0x28) = 0
*(x21_3 + 0x30) = 0
int64_t* result

if (x20_1 != 0)
label_e5b66c:
    int64_t x9_4
    int32_t i_1
    
    do
        x9_4 = __ldaxr(&x20_1[1])
        i_1 = __stlxr(x9_4 - 1, &x20_1[1])
    while (i_1 != 0)
    
    if (x9_4 != 0)
        goto label_e5b674
    
    (*(*x20_1 + 0x10))(x20_1)
    std::__ndk1::__shared_weak_count::__release_weak()
    result = *(entry_x0 + 0x38)
    
    if (result != 0)
        jump(*(*result + 0x50))
else
label_e5b674:
    result = *(entry_x0 + 0x38)
    
    if (result != 0)
        jump(*(*result + 0x50))

return result

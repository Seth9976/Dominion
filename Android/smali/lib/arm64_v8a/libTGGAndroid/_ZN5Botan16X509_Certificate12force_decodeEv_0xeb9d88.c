// 函数: _ZN5Botan16X509_Certificate12force_decodeEv
// 地址: 0xeb9d88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::Public_Key* entry_x0
int64_t* x20 = *(entry_x0 + 0x80)
*(entry_x0 + 0x78) = 0
*(entry_x0 + 0x80) = 0

if (x20 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&x20[1])
        i = __stlxr(x9_1 - 1, &x20[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*x20 + 0x10))(x20)
        std::__ndk1::__shared_weak_count::__release_weak()

void* var_28
sub_eb9ea8(&var_28, entry_x0)
void* x20_1 = var_28
var_28 = nullptr
void** result = operator new(0x20)
result[2] = 0
result[3] = x20_1
*result = _vtable_for_std::__ndk1::__shared_ptr_pointer<Botan::X509_Certificate_Data*, std::__ndk1::default_delete<Botan::X509_Certificate_Data>, std::__ndk1::allocator<Botan::X509_Certificate_Data> >
    + 0x10
result[1] = 0
int64_t* x21 = *(entry_x0 + 0x80)
*(entry_x0 + 0x78) = x20_1
*(entry_x0 + 0x80) = result

if (x21 != 0)
    int64_t x9_2
    int32_t i_1
    
    do
        x9_2 = __ldaxr(&x21[1])
        i_1 = __stlxr(x9_2 - 1, &x21[1])
    while (i_1 != 0)
    
    if (x9_2 == 0)
        (*(*x21 + 0x10))(x21)
        result = std::__ndk1::__shared_weak_count::__release_weak()

void* x19_1 = var_28
var_28 = nullptr

if (x19_1 == 0)
    return result

Botan::X509_Certificate_Data::~X509_Certificate_Data()
return operator delete(x19_1)

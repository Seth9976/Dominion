// 函数: _ZN5Botan27Certificate_Store_In_Memory7add_crlERKNS_8X509_CRLE
// 地址: 0xe96a08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = operator new(0xa0)
x0[2] = 0
x0[1] = 0
*x0 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::X509_CRL const, std::__ndk1::allocator<Botan::X509_CRL const> >
    + 0x10
Botan::X509_Object::X509_Object(&x0[3])
x0[3] = _vtable_for_Botan::X509_CRL + 0x10
void* entry_x1
int64_t x8_2 = *(entry_x1 + 0x80)
x0[0x12] = *(entry_x1 + 0x78)
x0[0x13] = x8_2

if (x8_2 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_2 + 8) + 1, x8_2 + 8)
    while (i != 0)

void* var_40 = &x0[3]
int32_t i_1

do
    i_1 = __stxr(__ldxr(&x0[1]) + 1, &x0[1])
while (i_1 != 0)
int64_t result = Botan::Certificate_Store_In_Memory::add_crl(arg1)

if (x0 != 0)
    int64_t x9_4
    int32_t i_2
    
    do
        x9_4 = __ldaxr(&x0[1])
        i_2 = __stlxr(x9_4 - 1, &x0[1])
    while (i_2 != 0)
    
    if (x9_4 == 0)
        (*(*x0 + 0x10))(x0)
        result = std::__ndk1::__shared_weak_count::__release_weak()

int64_t x8_9
int32_t i_3

do
    x8_9 = __ldaxr(&x0[1])
    i_3 = __stlxr(x8_9 - 1, &x0[1])
while (i_3 != 0)

if (x8_9 != 0)
    return result

(*(*x0 + 0x10))(x0)
return std::__ndk1::__shared_weak_count::__release_weak()

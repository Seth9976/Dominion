// 函数: _ZN5Botan27Certificate_Store_In_Memory15add_certificateERKNS_16X509_CertificateE
// 地址: 0xe95acc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x22 = *(arg1 + 8)
int64_t x23 = *(arg1 + 0x10)
int64_t result

if (x22 != x23)
    do
        Botan::X509_Certificate* x0 = *x22
        x22 = &x22[2]
        result = Botan::X509_Certificate::operator==(x0)
        
        if ((result.d & 1) != 0)
            return result
    while (x23 != x22)

void** x0_1 = operator new(0xa0)
x0_1[2] = 0
*x0_1 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::X509_Certificate const, std::__ndk1::allocator<Botan::X509_Certificate const> >
    + 0x10
x0_1[1] = 0
result = Botan::X509_Object::X509_Object(&x0_1[3])
x0_1[3] = _vtable_for_Botan::X509_Certificate + 0x10
void* entry_x1
int64_t x8_3 = *(entry_x1 + 0x80)
x0_1[0x12] = *(entry_x1 + 0x78)
x0_1[0x13] = x8_3

if (x8_3 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_3 + 8) + 1, x8_3 + 8)
    while (i != 0)

void* var_40_1 = &x0_1[3]
void** x8_5 = *(arg1 + 0x10)

if (x8_5 u>= *(arg1 + 0x18))
    result = std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > >::__push_back_slow_path<std::__ndk1::shared_ptr<Botan::X509_Certificate const> >(
        arg1 + 8)
    
    if (x0_1 != 0)
        int64_t x9_6
        int32_t i_1
        
        do
            x9_6 = __ldaxr(&x0_1[1])
            i_1 = __stlxr(x9_6 - 1, &x0_1[1])
        while (i_1 != 0)
        
        if (x9_6 == 0)
            (*(*x0_1 + 0x10))(x0_1)
            return std::__ndk1::__shared_weak_count::__release_weak()
else
    *x8_5 = &x0_1[3]
    x8_5[1] = x0_1
    *(arg1 + 0x10) = &x8_5[2]

return result

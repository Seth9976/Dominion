// 函数: _ZN5Botan27Certificate_Store_In_Memory15add_certificateENSt6__ndk110shared_ptrIKNS_16X509_CertificateEEE
// 地址: 0xe95dc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21_1 = arg1 + 8
int64_t* x24 = *x21_1
void* x19 = arg1
int64_t* x23 = x21_1[1]
int64_t* entry_x1

if (x24 != x23)
    *entry_x1
    
    do
        Botan::X509_Certificate* x0 = *x24
        x24 = &x24[2]
        
        if ((Botan::X509_Certificate::operator==(x0).d & 1) != 0)
            return 
    while (x23 != x24)

if (x23 == *(x19 + 0x18))
    return std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > >::__push_back_slow_path<std::__ndk1::shared_ptr<Botan::X509_Certificate const> const&>(
        x21_1) __tailcall

*x23 = *entry_x1
int64_t x8_3 = entry_x1[1]
x23[1] = x8_3

if (x8_3 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_3 + 8) + 1, x8_3 + 8)
    while (i != 0)

*(x19 + 0x10) = &x23[2]

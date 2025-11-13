// 函数: _ZN5Botan24System_Certificate_StoreC1Ev
// 地址: 0xcfdf0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
entry_x0[1] = 0
entry_x0[2] = 0
*entry_x0 = _vtable_for_Botan::System_Certificate_Store + 0x10
char var_24 = 1
void** x0
int64_t x1
x0, x1 = operator new(0x80)
x0[2] = 0
*x0 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::Flatfile_Certificate_Store, std::__ndk1::allocator<Botan::Flatfile_Certificate_Store> >
    + 0x10
x0[1] = 0
int64_t result = std::__ndk1::__compressed_pair_elem<Botan::Flatfile_Certificate_Store, 1, false>::__compressed_pair_elem<char const (&)[0x23], bool&&, 0ul, 1ul>(
    &x0[3], x1, "/etc/ssl/certs/ca-certificates.crt")
int64_t* x20 = entry_x0[2]
entry_x0[1] = &x0[3]
entry_x0[2] = x0

if (x20 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&x20[1])
        i = __stlxr(x9_1 - 1, &x20[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*x20 + 0x10))(x20)
        return std::__ndk1::__shared_weak_count::__release_weak()

return result

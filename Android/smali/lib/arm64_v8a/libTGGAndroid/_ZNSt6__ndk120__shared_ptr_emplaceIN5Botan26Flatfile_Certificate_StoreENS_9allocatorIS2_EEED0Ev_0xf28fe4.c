// 函数: _ZNSt6__ndk120__shared_ptr_emplaceIN5Botan26Flatfile_Certificate_StoreENS_9allocatorIS2_EEED0Ev
// 地址: 0xf28fe4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
entry_x0[0xe]
*entry_x0 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::Flatfile_Certificate_Store, std::__ndk1::allocator<Botan::Flatfile_Certificate_Store> >
    + 0x10
entry_x0[3] = _vtable_for_Botan::Flatfile_Certificate_Store + 0x10
std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const> >, std::__ndk1::__map_value_compare<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::__value_type<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const> >, std::__ndk1::less<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const> > > >::destroy(
    &entry_x0[0xd])
entry_x0[0xb]
std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const> >, std::__ndk1::__map_value_compare<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::__value_type<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const> >, std::__ndk1::less<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const> > > >::destroy(
    &entry_x0[0xa])
entry_x0[8]
std::__ndk1::__tree<std::__ndk1::__value_type<Botan::X509_DN, std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > > >, std::__ndk1::__map_value_compare<Botan::X509_DN, std::__ndk1::__value_type<Botan::X509_DN, std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > > >, std::__ndk1::less<Botan::X509_DN>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::X509_DN, std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > > > > >::destroy(
    &entry_x0[7])
void* x22 = entry_x0[4]

if (x22 != 0)
    void** x20_1 = entry_x0[5]
    void* x0_4
    
    if (x20_1 == x22)
        x0_4 = x22
    else
        do
            x20_1 -= 0x38
            sub_f276a8(&entry_x0[6], x20_1)
        while (x22 != x20_1)
        
        x0_4 = entry_x0[4]
    
    entry_x0[5] = x22
    operator delete(x0_4)

std::__ndk1::__shared_weak_count::~__shared_weak_count()
return operator delete(entry_x0) __tailcall

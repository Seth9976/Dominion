// 函数: _ZNK5Botan27Certificate_Store_In_Memory12all_subjectsEv
// 地址: 0xe95e78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::X509_DN** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
void* entry_x0
int64_t* x20 = *(entry_x0 + 8)
int64_t x22 = *(entry_x0 + 0x10)

if (x20 == x22)
    return 

while (true)
    *x20
    Botan::X509_Certificate::data()
    Botan::X509_DN* x21_1 = entry_x8[1]
    
    if (x21_1 == entry_x8[2])
        std::__ndk1::vector<Botan::X509_DN, std::__ndk1::allocator<Botan::X509_DN> >::__push_back_slow_path<Botan::X509_DN const&>(
            entry_x8)
        x20 = &x20[2]
        
        if (x22 == x20)
            break
    else
        Botan::X509_DN::X509_DN(x21_1)
        entry_x8[1] = x21_1 + 0x38
        x20 = &x20[2]
        
        if (x22 == x20)
            break

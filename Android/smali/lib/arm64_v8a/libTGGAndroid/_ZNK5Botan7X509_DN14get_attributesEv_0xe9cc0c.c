// 函数: _ZNK5Botan7X509_DN14get_attributesEv
// 地址: 0xe9cc0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x8
entry_x8[2] = 0
entry_x8[1] = 0
*entry_x8 = &entry_x8[1]
void* entry_x0
Botan::OID* i = *(entry_x0 + 8)

for (int64_t x21 = *(entry_x0 + 0x10); i != x21; i += 0x60)
    Botan::multimap_insert<Botan::OID, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
        entry_x8, i, i + 0x40)

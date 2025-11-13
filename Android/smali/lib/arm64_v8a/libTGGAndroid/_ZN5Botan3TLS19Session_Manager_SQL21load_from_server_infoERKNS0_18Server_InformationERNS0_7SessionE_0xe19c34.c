// 函数: _ZN5Botan3TLS19Session_Manager_SQL21load_from_server_infoERKNS0_18Server_InformationERNS0_7SessionE
// 地址: 0xe19c34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x22 = *(arg1 + 8)
void* x0
int128_t v0
x0, v0 = operator new(0x70)
int128_t var_120 = data_71a7c0
__builtin_strncpy(x0, 
    "select session from tls_sessions where hostname = ?1 and hostport = ?2 order by session_start desc", 
    0x63)
(**x22)(x22, &var_120)

if ((zx.d(var_120.b) & 1) != 0)
    operator delete(x0)

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_120)
int64_t* var_50
(**var_50)(var_50, 1, &var_120)

if ((zx.d(var_120.b) & 1) != 0)
    operator delete(x0)

(*(*var_50 + 8))(var_50, 2, zx.q(*(arg2 + 0x30)))
int32_t x0_8 = (*(*var_50 + 0x48))()

if ((x0_8 & 1) != 0)
    uint8_t* x0_10
    uint64_t x1_2
    x0_10, x1_2 = (*(*var_50 + 0x28))(var_50, 0)
    void* var_138
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(&var_138)
    Botan::TLS::Session::decrypt(x0_10, x1_2, &var_138)
    Botan::TLS::Session* entry_x2
    Botan::TLS::Session::operator=(entry_x2)
    Botan::TLS::Session::~Session()
    void* x0_14 = var_138
    
    if (x0_14 != 0)
        void* var_130_1 = x0_14
        int64_t var_128
        Botan::deallocate_memory(x0_14, var_128 - x0_14, 1)

int64_t* var_48

if (var_48 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&var_48[1])
        i = __stlxr(x9_1 - 1, &var_48[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*var_48 + 0x10))(var_48)
        std::__ndk1::__shared_weak_count::__release_weak()

return zx.q(x0_8) & 1

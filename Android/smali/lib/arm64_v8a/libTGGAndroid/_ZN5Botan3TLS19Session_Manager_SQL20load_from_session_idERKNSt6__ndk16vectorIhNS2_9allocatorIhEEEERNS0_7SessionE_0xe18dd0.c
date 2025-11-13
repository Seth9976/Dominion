// 函数: _ZN5Botan3TLS19Session_Manager_SQL20load_from_session_idERKNSt6__ndk16vectorIhNS2_9allocatorIhEEEERNS0_7SessionE
// 地址: 0xe18dd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x22 = *(arg1 + 8)
void* x0
int128_t v0
x0, v0 = operator new(0x40)
int128_t var_120 = data_71bff0
__builtin_strncpy(x0, "select session from tls_sessions where session_id = ?1", 0x37)
(**x22)(x22, &var_120)

if ((zx.d(var_120.b) & 1) != 0)
    operator delete(x0)

uint8_t* x0_3 = *arg2
Botan::hex_encode(x0_3, *(arg2 + 8) - x0_3, true)
int64_t* var_50
(**var_50)(var_50, 1, &var_120)

if ((zx.d(var_120.b) & 1) != 0)
    operator delete(x0)

int32_t x0_7 = (*(*var_50 + 0x48))()

if ((x0_7 & 1) != 0)
    uint8_t* x0_9
    uint64_t x1_2
    x0_9, x1_2 = (*(*var_50 + 0x28))(var_50, 0)
    void* var_138
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(&var_138)
    Botan::TLS::Session::decrypt(x0_9, x1_2, &var_138)
    Botan::TLS::Session* entry_x2
    Botan::TLS::Session::operator=(entry_x2)
    Botan::TLS::Session::~Session()
    void* x0_13 = var_138
    
    if (x0_13 != 0)
        void* var_130_1 = x0_13
        int64_t var_128
        Botan::deallocate_memory(x0_13, var_128 - x0_13, 1)

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

return zx.q(x0_7) & 1

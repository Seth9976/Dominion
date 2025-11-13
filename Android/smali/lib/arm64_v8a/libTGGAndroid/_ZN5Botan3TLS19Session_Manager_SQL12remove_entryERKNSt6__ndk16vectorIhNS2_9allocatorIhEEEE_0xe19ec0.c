// 函数: _ZN5Botan3TLS19Session_Manager_SQL12remove_entryERKNSt6__ndk16vectorIhNS2_9allocatorIhEEEE
// 地址: 0xe19ec0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = *(arg1 + 8)
void* x0
int128_t v0
x0, v0 = operator new(0x30)
int128_t var_50 = data_71a900
__builtin_strncpy(x0, "delete from tls_sessions where session_id = ?1", 0x2f)
(**x20)(x20, &var_50)

if ((zx.d(var_50.b) & 1) != 0)
    operator delete(x0)

int64_t* entry_x1
uint8_t* x0_3 = *entry_x1
Botan::hex_encode(x0_3, entry_x1[1] - x0_3, true)
int64_t* var_30
(**var_30)(var_30, 1, &var_50)

if ((zx.d(var_50.b) & 1) != 0)
    operator delete(x0)

int64_t result = (*(*var_30 + 0x40))()
int64_t* var_28

if (var_28 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&var_28[1])
        i = __stlxr(x9_1 - 1, &var_28[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*var_28 + 0x10))(var_28)
        return std::__ndk1::__shared_weak_count::__release_weak()

return result

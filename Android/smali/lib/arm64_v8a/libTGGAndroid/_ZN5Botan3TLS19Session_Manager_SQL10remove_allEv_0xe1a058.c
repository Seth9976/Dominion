// 函数: _ZN5Botan3TLS19Session_Manager_SQL10remove_allEv
// 地址: 0xe1a058
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t* x19 = *(entry_x0 + 8)
void* x0
int128_t v0
x0, v0 = operator new(0x20)
int128_t var_50 = data_71af80
__builtin_strncpy(x0, "delete from tls_sessions", 0x19)
(**x19)(x19, &var_50)

if ((zx.d(var_50.b) & 1) != 0)
    operator delete(x0)

int64_t* var_30
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
        std::__ndk1::__shared_weak_count::__release_weak()

return result

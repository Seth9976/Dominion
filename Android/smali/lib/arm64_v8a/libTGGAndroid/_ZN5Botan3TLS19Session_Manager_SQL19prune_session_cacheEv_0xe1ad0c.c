// 函数: _ZN5Botan3TLS19Session_Manager_SQL19prune_session_cacheEv
// 地址: 0xe1ad0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t* x20 = *(entry_x0 + 8)
void* x0
int128_t v0
x0, v0 = operator new(0x40)
int128_t var_50 = data_71ac10
__builtin_strncpy(x0, "delete from tls_sessions where session_start <= ?1", 0x33)
(**x20)(x20, &var_50)

if ((zx.d(var_50.b) & 1) != 0)
    operator delete(x0)

int64_t* var_30
(*(*var_30 + 0x10))(var_30, 1, 
    std::__ndk1::chrono::system_clock::now() - *(entry_x0 + 0x40) * 0xf4240)
(*(*var_30 + 0x40))()
int64_t* x0_6 = *(entry_x0 + 8)
var_50.b = 0x18
__builtin_strncpy(&var_50:1, "tls_sessions", 0xd)
int64_t result = (*(*x0_6 + 8))(x0_6, &var_50)
int64_t result_1 = result

if ((zx.d(var_50.b) & 1) != 0)
    result = operator delete(x0)

if (result_1 u> *(entry_x0 + 0x38))
    int64_t* x21_1 = *(entry_x0 + 8)
    void* x0_8
    int128_t v0_1
    x0_8, v0_1 = operator new(0x60)
    var_50 = data_71c3d0
    __builtin_strncpy(x0_8, 
        "delete from tls_sessions where session_id in (select session_id from tls_sessions limit ?1)", 
        0x5c)
    (**x21_1)(x21_1, &var_50)
    
    if ((zx.d(var_50.b) & 1) != 0)
        operator delete(x0_8)
    
    int64_t* var_60
    (*(*var_60 + 8))(var_60, 1, result_1 - *(entry_x0 + 0x38))
    result = (*(*var_60 + 0x40))()
    int64_t* var_58
    
    if (var_58 != 0)
        int64_t x9_4
        int32_t i
        
        do
            x9_4 = __ldaxr(&var_58[1])
            i = __stlxr(x9_4 - 1, &var_58[1])
        while (i != 0)
        
        if (x9_4 == 0)
            (*(*var_58 + 0x10))(var_58)
            result = std::__ndk1::__shared_weak_count::__release_weak()

int64_t* var_28

if (var_28 != 0)
    int64_t x9_5
    int32_t i_1
    
    do
        x9_5 = __ldaxr(&var_28[1])
        i_1 = __stlxr(x9_5 - 1, &var_28[1])
    while (i_1 != 0)
    
    if (x9_5 == 0)
        (*(*var_28 + 0x10))(var_28)
        return std::__ndk1::__shared_weak_count::__release_weak()

return result

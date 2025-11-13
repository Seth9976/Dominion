// 函数: _ZNK5Botan26Encrypted_PSK_Database_SQL6kv_getERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xdf160c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21 = *(arg1 + 0x30)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "select psk_value from ", arg1 + 0x40)
char var_68[0x10]
int128_t* x0_1
int128_t v0
x0_1, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_68)
void* x8 = x0_1[1].q
int128_t var_50 = *x0_1
__builtin_memset(x0_1, 0, 0x18)
(**x21)(x21, &var_50)

if ((zx.d(var_50.b) & 1) != 0)
    operator delete(x8)

void* var_58

if ((zx.d(var_68[0]) & 1) != 0)
    operator delete(var_58)
int64_t* var_30
int64_t entry_x1
(**var_30)(var_30, 1, entry_x1)
int64_t result = (*(*var_30 + 0x48))()
int64_t* var_28
int64_t* x19_1

if ((result.d & 1) == 0)
    int16_t* entry_x8
    *entry_x8 = 0
    x19_1 = var_28
    
    if (x19_1 != 0)
    label_df1710:
        int64_t x9_2
        int32_t i
        
        do
            x9_2 = __ldaxr(&x19_1[1])
            i = __stlxr(x9_2 - 1, &x19_1[1])
        while (i != 0)
        
        if (x9_2 == 0)
            (*(*x19_1 + 0x10))(x19_1)
            return std::__ndk1::__shared_weak_count::__release_weak()
else
    result = (*(*var_30 + 0x30))(var_30, 0)
    x19_1 = var_28
    
    if (x19_1 != 0)
        goto label_df1710
return result

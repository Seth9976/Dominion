// 函数: _ZN5Botan24Certificate_Store_In_SQL10remove_keyERKNS_11Private_KeyE
// 地址: 0xcfd2ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_50 = 0xe
int32_t var_4f
__builtin_strncpy(&var_4f, "SHA-256", 8)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x1
Botan::Private_Key::fingerprint_private(entry_x1)
void* var_40

if ((zx.d(var_50) & 1) != 0)
    operator delete(var_40)
int64_t* x19 = *(arg1 + 0x10)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "DELETE FROM ", arg1 + 0x20)
char var_78[0x10]
int128_t* x0_3
int128_t v0
x0_3, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_78)
void* x8_1 = x0_3[1].q
var_50.o = *x0_3
__builtin_memset(x0_3, 0, 0x18)
(**x19)(x19, &var_50)

if ((zx.d(var_50) & 1) != 0)
    operator delete(x8_1)

void* var_68

if ((zx.d(var_78[0]) & 1) != 0)
    operator delete(var_68)
int64_t* var_60
char var_38
(**var_60)(var_60, 1, &var_38)
int64_t result = (*(*var_60 + 0x40))()
int64_t* var_58
void* var_28

if (var_58 == 0)
label_cfd408:
    
    if ((zx.d(var_38) & 1) != 0)
        return operator delete(var_28)
else
    int64_t x9_2
    int32_t i
    
    do
        x9_2 = __ldaxr(&var_58[1])
        i = __stlxr(x9_2 - 1, &var_58[1])
    while (i != 0)
    
    if (x9_2 != 0)
        goto label_cfd408
    
    (*(*var_58 + 0x10))(var_58)
    result = std::__ndk1::__shared_weak_count::__release_weak()
    
    if ((zx.d(var_38) & 1) != 0)
        return operator delete(var_28)
return result

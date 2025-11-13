// 函数: _ZNK5Botan8GCM_Mode4nameEv
// 地址: 0xd813c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_58[0x10]
int64_t* entry_x0
sub_cafe1c(&entry_x0[2], "/GCM(", &var_58)
std::__ndk1::to_string((*(*entry_x0 + 0x80))(entry_x0))
char var_70
void* var_60
uint64_t x1

if ((zx.d(var_70) & 1) == 0)
    x1 = &var_70 | 1
else
    x1 = var_60

int128_t* x0_4
int128_t v0
x0_4, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_58, x1)
void* x8_4 = x0_4[1].q
int128_t var_40 = *x0_4
__builtin_memset(x0_4, 0, 0x18)
int128_t* result
int128_t v0_1
result, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_40)
int128_t* entry_x8
entry_x8[1].q = result[1].q
*entry_x8 = *result
__builtin_memset(result, 0, 0x18)

if ((zx.d(var_40.b) & 1) == 0)
    if ((zx.d(var_70) & 1) != 0)
        goto label_d814a8
    
    goto label_d81480

result = operator delete(x8_4)

if ((zx.d(var_70) & 1) == 0)
label_d81480:
    
    if ((zx.d(var_58[0]) & 1) == 0)
        return result
else
label_d814a8:
    result = operator delete(var_60)
    
    if ((zx.d(var_58[0]) & 1) == 0)
        return result

void* var_48
return operator delete(var_48)

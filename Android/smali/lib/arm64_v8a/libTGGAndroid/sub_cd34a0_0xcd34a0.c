// 函数: sub_cd34a0
// 地址: 0xcd34a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* var_30 = arg6
void* var_8 = arg5
char var_c0
void* var_b0
char var_a0
void* var_90
void* __offset(vtable_for_Botan::Blowfish, 0x10) var_88

if (zx.d(arg4 - 4) u>= 0xf)
    int64_t* x0_32 = Botan::throw_invalid_argument("Invalid bcrypt work factor", "make_bcrypt", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
    
    if ((zx.d(var_c0) & 1) != 0)
        operator delete(var_b0)
        
        if ((zx.d(var_a0) & 1) != 0)
            operator delete(var_90)
    else if ((zx.d(var_a0) & 1) != 0)
        operator delete(var_90)
    
    operator delete(arg5)
    int128_t var_70
    void* x0_36 = var_70:8.q
    var_88 = arg6 + 0x10
    
    if (x0_36 != 0)
        int128_t var_60
        int64_t x8_48 = var_60:8.q
        var_60.q = x0_36
        Botan::deallocate_memory(x0_36, (x8_48 - x0_36) s>> 2, 4)
    
    void* var_80
    void* x0_37 = var_80
    
    if (x0_37 != 0)
        var_80 = x0_37
        Botan::deallocate_memory(x0_37, (var_70.q - x0_37) s>> 2, 4)
    
    sub_1101e04(x0_32)
    noreturn

var_88 = _vtable_for_Botan::Blowfish + 0x10
int64_t result_1 = (zx.o(0)).q
int128_t var_70_1
__builtin_memset(&var_70_1, 0, 0x20)
uint64_t x8_3 = zx.q(*arg2)
uint64_t x3 = *arg3
int32_t temp0 = x8_3.d & 1
void* x1

if (temp0 != 0)
    x1 = *(arg2 + 0x10)
else
    x1 = &arg2[1]

uint64_t x8_5

if (temp0 == 0)
    x8_5 = x8_3 u>> 1
else
    x8_5 = *(arg2 + 8)

Botan::Blowfish::salted_set_key(&var_88, x1, x8_5 + 1, x3, arg3[1] - x3, arg4.b & 0xff)
uint64_t x0_1 = operator new(0x18)
int64_t i_1 = 0x40
__builtin_strncpy(x0_1, "OrpheanBeholderScryDoubt", 0x18)
int64_t i

do
    Botan::Blowfish::encrypt_n(&var_88, x0_1, x0_1)
    i = i_1
    i_1 -= 1
while (i != 1)
uint64_t x1_2 = *arg3
sub_ef46f0(&var_a0, x1_2, arg3[1] - x1_2)
std::__ndk1::to_string(zx.d(arg4))
uint64_t x8_7 = zx.q(var_c0)
uint64_t x8_8
uint64_t var_b8

if ((x8_7.d & 1) == 0)
    x8_8 = x8_7 u>> 1
else
    x8_8 = var_b8
int128_t var_e0

if (x8_8 == 1)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "0", &var_c0)
    
    if ((zx.d(var_c0) & 1) != 0)
        operator delete(var_b0)
    
    var_c0.o = var_e0
    void* var_d0
    var_b0 = var_d0

char x4
char var_177 = x4
char var_178 = 2
char var_176 = 0
int128_t* x0_7
int128_t v0_2
x0_7, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_178, nullptr)
void* x8_11 = x0_7[1].q
int128_t var_160 = *x0_7
__builtin_memset(x0_7, 0, 0x18)
int128_t* x0_9
int128_t v0_3
x0_9, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_160)
void* x8_12 = x0_9[1].q
int128_t var_140 = *x0_9
__builtin_memset(x0_9, 0, 0x18)
void* x1_5

if ((zx.d(var_c0) & 1) == 0)
    x1_5 = &var_c0 | 1
else
    x1_5 = var_b0

int128_t* x0_11
int128_t v0_4
x0_11, v0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_140, x1_5)
void* x8_14 = x0_11[1].q
int128_t var_120 = *x0_11
__builtin_memset(x0_11, 0, 0x18)
int128_t* x0_13
int128_t v0_5
x0_13, v0_5 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_120)
void* x8_15 = x0_13[1].q
int128_t var_100 = *x0_13
__builtin_memset(x0_13, 0, 0x18)
char var_190
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_190, &var_a0, 0, 0x16)
uint64_t var_180
uint64_t x1_8

if ((zx.d(var_190) & 1) == 0)
    x1_8 = &var_190 | 1
else
    x1_8 = var_180

int128_t* x0_16
int128_t v0_6
x0_16, v0_6 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_100, x1_8)
void* x8_17 = x0_16[1].q
var_e0 = *x0_16
__builtin_memset(x0_16, 0, 0x18)
char var_1a8
sub_ef46f0(&var_1a8, x0_1, 0x17)
uint64_t var_198
uint64_t x1_10

if ((zx.d(var_1a8) & 1) == 0)
    x1_10 = &var_1a8 | 1
else
    x1_10 = var_198

int128_t* x0_19
int128_t v0_7
x0_19, v0_7 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_e0, x1_10)
arg1[1].q = x0_19[1].q
*arg1 = *x0_19
__builtin_memset(x0_19, 0, 0x18)

if ((zx.d(var_1a8) & 1) == 0)
    if ((zx.d(var_e0.b) & 1) != 0)
        goto label_cd382c
    
    goto label_cd3768

operator delete(var_198)

if ((zx.d(var_e0.b) & 1) != 0)
label_cd382c:
    operator delete(x8_17)
    
    if ((zx.d(var_190) & 1) == 0)
        goto label_cd3770
    
    goto label_cd383c

label_cd3768:

if ((zx.d(var_190) & 1) == 0)
label_cd3770:
    
    if ((zx.d(var_100.b) & 1) != 0)
        goto label_cd384c
    
    goto label_cd3778

label_cd383c:
operator delete(var_180)

if ((zx.d(var_100.b) & 1) != 0)
label_cd384c:
    operator delete(x8_15)
    
    if ((zx.d(var_120.b) & 1) == 0)
        goto label_cd3780
    
    goto label_cd385c

label_cd3778:

if ((zx.d(var_120.b) & 1) == 0)
label_cd3780:
    
    if ((zx.d(var_140.b) & 1) != 0)
        goto label_cd386c
    
    goto label_cd3788

label_cd385c:
operator delete(x8_14)

if ((zx.d(var_140.b) & 1) != 0)
label_cd386c:
    operator delete(x8_12)
    
    if ((zx.d(var_160.b) & 1) == 0)
        goto label_cd3790
    
    goto label_cd387c

label_cd3788:

if ((zx.d(var_160.b) & 1) == 0)
label_cd3790:
    
    if ((zx.d(var_178) & 1) != 0)
        goto label_cd388c
    
    goto label_cd3798

label_cd387c:
operator delete(x8_11)

if ((zx.d(var_178) & 1) != 0)
label_cd388c:
    void* var_168
    operator delete(var_168)
    
    if ((zx.d(var_c0) & 1) == 0)
        goto label_cd37a0
    
    goto label_cd389c

label_cd3798:

if ((zx.d(var_c0) & 1) != 0)
label_cd389c:
    operator delete(var_b0)
    
    if ((zx.d(var_a0) & 1) != 0)
        operator delete(var_90)
else
label_cd37a0:
    
    if ((zx.d(var_a0) & 1) != 0)
        operator delete(var_90)

operator delete(x0_1)
void* x0_22 = var_70_1:8.q
var_88 = _vtable_for_Botan::Blowfish + 0x10

if (x0_22 != 0)
    int128_t var_60_1
    int64_t x8_31 = var_60_1:8.q
    var_60_1.q = x0_22
    Botan::deallocate_memory(x0_22, (x8_31 - x0_22) s>> 2, 4)

int64_t result = result_1

if (result == 0)
    return result

result_1 = result
return Botan::deallocate_memory(result, (var_70_1.q - result) s>> 2, 4)

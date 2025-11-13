// 函数: _ZN5Botan6Sodium25crypto_auth_hmacsha512256EPhPKhmS3_
// 地址: 0xe33d84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_50 = 0x1a
int64_t var_4f
__builtin_strncpy(&var_4f, "HMAC(SHA-512)", 0xe)
int16_t var_68 = 0
Botan::MessageAuthenticationCode::create_or_throw(&var_50, &var_68)
void* var_58

if ((zx.d(var_68.b) & 1) != 0)
    operator delete(var_58)
void* var_40

if ((zx.d(var_50) & 1) != 0)
    operator delete(var_40)
int64_t* var_38
Botan::SymmetricAlgorithm::set_key(&var_38[1], arg4)
(*(*var_38 + 0x18))(var_38, arg2, arg3)
__builtin_memset(&var_50, 0, 0x18)
int64_t x0_5
int128_t v0
x0_5, v0 = Botan::allocate_memory(0x40, 1)
v0.q = 0
v0:8.q = 0
var_4f = x0_5 + 0x40
__builtin_memset(x0_5, 0, 0x40)
var_50.q = x0_5
int64_t x21_1 = x0_5
int64_t x0_7 = (**var_38)(var_38, v0)

if (x0_7 u>= 0x41)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&var_50)
    x21_1 = var_50.q
else if (x0_7 != 0x40)
    var_4f = x21_1 + x0_7

int128_t v0_1
int128_t v1
v0_1, v1 = (*(*var_38 + 0x20))(var_38, x21_1)

if (arg1 != 0)
    int128_t* x0_10 = var_50.q
    
    if (x0_10 != 0)
        v0_1 = x0_10[1]
        *arg1 = *x0_10
        *(arg1 + 0x10) = v0_1
        var_4f = x0_10
        Botan::deallocate_memory(x0_10, x0_5 + 0x40 - x0_10, 1)
        (*(*var_38 + 0x10))(var_38)
        return 0

sub_c776cc(Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401))
noreturn

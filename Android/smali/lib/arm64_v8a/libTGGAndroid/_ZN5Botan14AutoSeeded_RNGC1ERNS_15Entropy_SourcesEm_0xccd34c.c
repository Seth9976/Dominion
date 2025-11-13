// 函数: _ZN5Botan14AutoSeeded_RNGC1ERNS_15Entropy_SourcesEm
// 地址: 0xccd34c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::AutoSeeded_RNG + 0x10
*(arg1 + 8) = 0
int64_t x0 = operator new(0x88)
char var_48 = 0x1a
int64_t var_47
__builtin_strncpy(&var_47, "HMAC(SHA-384)", 0xe)
int16_t var_60 = 0
Botan::MessageAuthenticationCode::create_or_throw(&var_48, &var_60)
int64_t* var_28
uint64_t entry_x2
Botan::HMAC_DRBG::HMAC_DRBG(x0, &var_28, arg2, entry_x2)
int64_t* x0_3 = *(arg1 + 8)
*(arg1 + 8) = x0

if (x0_3 != 0)
    (*(*x0_3 + 8))()

int64_t* x0_4 = var_28
var_28 = nullptr

if (x0_4 != 0)
    (*(*x0_4 + 0x10))()

void* var_50

if ((zx.d(var_60.b) & 1) != 0)
    operator delete(var_50)
void* var_38

if ((zx.d(var_48) & 1) != 0)
    operator delete(var_38)
return Botan::AutoSeeded_RNG::force_reseed()

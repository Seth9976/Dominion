// 函数: _ZN5Botan14AutoSeeded_RNGC1ERNS_21RandomNumberGeneratorERNS_15Entropy_SourcesEm
// 地址: 0xccd4d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::AutoSeeded_RNG + 0x10
*(arg1 + 8) = 0
int64_t x0 = operator new(0x88)
char var_50 = 0x1a
int64_t var_4f
__builtin_strncpy(&var_4f, "HMAC(SHA-384)", 0xe)
int16_t var_68 = 0
Botan::MessageAuthenticationCode::create_or_throw(&var_50, &var_68)
int64_t* var_38
uint64_t entry_x3
Botan::HMAC_DRBG::HMAC_DRBG(x0, &var_38, arg2, arg3, entry_x3)
int64_t* x0_3 = *(arg1 + 8)
*(arg1 + 8) = x0

if (x0_3 != 0)
    (*(*x0_3 + 8))()

int64_t* x0_4 = var_38
var_38 = nullptr

if (x0_4 != 0)
    (*(*x0_4 + 0x10))()

void* var_58

if ((zx.d(var_68.b) & 1) != 0)
    operator delete(var_58)
void* var_40

if ((zx.d(var_50) & 1) != 0)
    operator delete(var_40)
return Botan::AutoSeeded_RNG::force_reseed()

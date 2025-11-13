// 函数: _ZNK5Botan19XMSS_Index_Registry11make_key_idERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEES7_
// 地址: 0xecb748
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int16_t var_68 = 0
Botan::HashFunction::create(Botan::XMSS_Index_Registry::m_index_hash_function, &var_68)
void* var_58

if ((zx.d(var_68.b) & 1) != 0)
    operator delete(var_58)

int64_t* var_48

if (var_48 == 0)
    sub_c776cc(Botan::assertion_failure("hash != nullptr", "XMSS_Index_Registry requires SHA-256", 
        "make_key_id", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x18739))
    noreturn

int64_t x1_1 = *arg2
(*(*var_48 + 0x18))(var_48, x1_1, *(arg2 + 8) - x1_1)
int64_t* entry_x2
int64_t x1_2 = *entry_x2
(*(*var_48 + 0x18))(var_48, x1_2, entry_x2[1] - x1_2)
Botan::Buffered_Computation::final()
void* x0_5 = var_68.q
char x23 = *x0_5
uint32_t x26 = zx.d(*(x0_5 + 1))
uint32_t x24 = zx.d(*(x0_5 + 2))
uint64_t x25 = zx.q(*(x0_5 + 3))
uint64_t x22 = zx.q(*(x0_5 + 4))
uint64_t x21 = zx.q(*(x0_5 + 5))
uint64_t x20_1 = zx.q(*(x0_5 + 6))
char x19_1 = *(x0_5 + 7)
void* var_60 = x0_5
Botan::deallocate_memory(x0_5, var_58 - x0_5, 1)
int64_t var_48_1 = 0

if (var_48 != 0)
    (*(*var_48 + 0x10))()

int64_t x9_5 = zx.q((x21 << 8).w) | (0xffffffffffff & (zx.q((x25 << 8).w)
    | (0xffffffffffff & ((0xff00ffff & zx.q(x26 << 8)) | zx.q(zx.d(x23) << 0x10) | zx.q(x24)))
    << 0x10 | x22)) << 0x10
return zx.q(x19_1) | (0xffffffffffffff & (x9_5 | x20_1)) << 8

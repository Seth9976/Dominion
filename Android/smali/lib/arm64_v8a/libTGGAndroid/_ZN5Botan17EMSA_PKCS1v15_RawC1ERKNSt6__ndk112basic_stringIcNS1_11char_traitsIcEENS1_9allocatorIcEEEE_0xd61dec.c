// 函数: _ZN5Botan17EMSA_PKCS1v15_RawC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xd61dec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x18) = zx.o(0)
*(arg1 + 0x38) = zx.o(0)
*(arg1 + 0x48) = zx.o(0)
*arg1 = _vtable_for_Botan::EMSA_PKCS1v15_Raw + 0x10
*(arg1 + 8) = zx.o(0)
*(arg1 + 0x28) = zx.o(0)
char* entry_x1
uint64_t x8_1 = zx.q(*entry_x1)
uint64_t x8_2

if ((x8_1.d & 1) == 0)
    x8_2 = x8_1 u>> 1
else
    x8_2 = *(entry_x1 + 8)

if (x8_2 == 0)
    *(arg1 + 8) = 0
    return 

Botan::pkcs_hash_id(entry_x1)
void* x0_1 = *(arg1 + 0x28)

if (x0_1 != 0)
    *(arg1 + 0x30) = x0_1
    operator delete(x0_1)
    __builtin_memset(arg1 + 0x28, 0, 0x18)

int128_t var_50
*(arg1 + 0x28) = var_50
void* var_40
*(arg1 + 0x38) = var_40
var_50.w = 0
Botan::HashFunction::create_or_throw(entry_x1, &var_50)

if ((zx.d(var_50.b) & 1) != 0)
    operator delete(var_40)

int64_t* var_58
(*(*var_58 + 0x40))()

if ((zx.d(*(arg1 + 0x10)) & 1) != 0)
    operator delete(*(arg1 + 0x20))

int128_t v0_2 = var_50
*(arg1 + 0x20) = var_40
*(arg1 + 0x10) = v0_2
*(arg1 + 8) = (**var_58)()
arg1 = var_58
int64_t var_58_1 = 0

if (arg1 != 0)
    (*(*arg1 + 0x10))()

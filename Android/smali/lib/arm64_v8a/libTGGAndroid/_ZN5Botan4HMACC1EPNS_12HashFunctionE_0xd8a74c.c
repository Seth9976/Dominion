// 函数: _ZN5Botan4HMACC1EPNS_12HashFunctionE
// 地址: 0xd8a74c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = 0
v0:8.q = 0
*(arg1 + 0x28) = zx.o(0)
*arg1 = _vtable_for_Botan::HMAC + 0x10
*(arg1 + 8) = _vtable_for_Botan::HMAC + 0x98
int64_t* entry_x1
*(arg1 + 0x10) = entry_x1
*(arg1 + 0x18) = zx.o(0)
*(arg1 + 0x38) = zx.o(0)
int64_t x0_1 = (**entry_x1)(entry_x1, v0)
int64_t* x8_3 = *(arg1 + 0x10)
*(arg1 + 0x48) = x0_1
int64_t result = (*(*x8_3 + 0x48))(x8_3)
int64_t x8_4 = *(arg1 + 0x48)
*(arg1 + 0x50) = result

if (result u>= x8_4)
    return result

int64_t* x0_3 = Botan::throw_invalid_argument("HMAC is not compatible with this hash function", 
    "HMAC", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
void* x8_5 = *(arg1 + 0x30)

if (x8_5 != 0)
    int64_t x9_3 = *(arg1 + 0x40)
    *(arg1 + 0x38) = x8_5
    Botan::deallocate_memory(x8_5, x9_3 - x8_5, 1)

void* x0_5 = *(arg1 + 0x18)

if (x0_5 != 0)
    int64_t x8_6 = *(arg1 + 0x28)
    *(arg1 + 0x20) = x0_5
    Botan::deallocate_memory(x0_5, x8_6 - x0_5, 1)

int64_t* x0_6 = *(arg1 + 0x10)
*(arg1 + 0x10) = 0

if (x0_6 != 0)
    (*(*x0_6 + 0x10))()

sub_1101e04(x0_3)
noreturn

// 函数: _ZN5Botan6ChaChaC1Em
// 地址: 0xcff9c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::ChaCha + 0x10
int64_t entry_x1
*(arg1 + 8) = entry_x1
*(arg1 + 0x10) = zx.o(0)
__builtin_memset(arg1 + 0x20, 0, 0x40)

if (entry_x1 u<= 0x14 && (1 << entry_x1 & 0x101100) != 0)
    return 

int64_t* x0 = Botan::throw_invalid_argument("ChaCha only supports 8, 12 or 20 rounds", "ChaCha", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
void* x8 = *(arg1 + 0x40)

if (x8 != 0)
    int64_t x9_2 = *(arg1 + 0x50)
    *(arg1 + 0x48) = x8
    Botan::deallocate_memory(x8, x9_2 - x8, 1)

void* x0_2 = *(arg1 + 0x28)

if (x0_2 != 0)
    int64_t x8_1 = *(arg1 + 0x38)
    *(arg1 + 0x30) = x0_2
    Botan::deallocate_memory(x0_2, (x8_1 - x0_2) s>> 2, 4)

void* x0_3 = *(arg1 + 0x10)

if (x0_3 != 0)
    int64_t x8_3 = *(arg1 + 0x20)
    *(arg1 + 0x18) = x0_3
    Botan::deallocate_memory(x0_3, (x8_3 - x0_3) s>> 2, 4)

sub_1101e04(x0)
noreturn

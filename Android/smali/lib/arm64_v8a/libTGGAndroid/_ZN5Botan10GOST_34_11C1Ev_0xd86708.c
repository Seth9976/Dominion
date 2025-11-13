// 函数: _ZN5Botan10GOST_34_11C1Ev
// 地址: 0xd86708
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
*entry_x0 = _vtable_for_Botan::GOST_34_11 + 0x10
char var_68 = 0x1e
int64_t var_67
__builtin_strncpy(&var_67, "R3411_CryptoPro", 0x10)
void* var_50
Botan::GOST_28147_89_Params::GOST_28147_89_Params(&var_50)
__builtin_memset(&entry_x0[2], 0, 0x18)
entry_x0[1] = _vtable_for_Botan::GOST_28147_89 + 0x10
int64_t x0_1 = operator new(0x1000)
int64_t x20 = x0_1
entry_x0[2] = x0_1
entry_x0[4] = x0_1 + 0x1000
memset(x0_1, 0, 0x1000)
int64_t x8_2 = 0
int64_t x9 = 0xc00
entry_x0[3] = x0_1 + 0x1000
__builtin_memset(&entry_x0[5], 0, 0x18)

while (true)
    void* x10_1 = var_50
    uint64_t x12_1 = x8_2 u>> 2
    int64_t x11_2 = zx.q(x9.d - 0xc00) & 0x3c
    int64_t x13_1 = x12_1 & 0x1ffffffffffffffc
    *(x20 + x9 - 0xc00) =
        zx.d(((zx.d(*(x10_1 + x13_1)) << 0x20 | zx.d(*(x10_1 + x11_2)) << 0x18) u>> 0x1c).b) << 0xb
    void* x10_6 = var_50
    *(entry_x0[2] + x9 - 0x800) = zx.d(((zx.d(*(x10_6 + (x13_1 | 1))) << 0x20
        | zx.d(*(x10_6 + (x11_2 | 1))) << 0x18) u>> 0x1c).b) << 0x13
    void* x10_11 = var_50
    *(entry_x0[2] + x9 - 0x400) = ror.d(
        zx.d(((zx.d(*(x10_11 + (x13_1 | 2))) << 0x20 | zx.d(*(x10_11 + (x11_2 | 2))) << 0x18)
            u>> 0x1c).b), 
        5)
    void* x10_16 = var_50
    *(entry_x0[2] + x9) = zx.d(((zx.d(*(x10_16 + (x12_1 | 3))) << 0x20
        | zx.d(*(x10_16 + (x11_2 | 3))) << 0x18) u>> 0x1c).b) << 3
    
    if (x9 == 0xffc)
        break
    
    x20 = entry_x0[2]
    x8_2 += 1
    x9 += 4

char var_48
void* var_38

if ((zx.d(var_48) & 1) != 0)
    operator delete(var_38)
__builtin_memset(&entry_x0[8], 0, 0x18)
int64_t x0_4 = Botan::allocate_memory(0x20, 1)
entry_x0[8] = x0_4
entry_x0[0xa] = x0_4 + 0x20
__builtin_memset(x0_4, 0, 0x20)
entry_x0[0xb] = 0
entry_x0[9] = x0_4 + 0x20
entry_x0[0xc] = 0
entry_x0[0xd] = 0
int64_t x0_5 = Botan::allocate_memory(0x20, 1)
entry_x0[0xb] = x0_5
entry_x0[0xd] = x0_5 + 0x20
__builtin_memset(x0_5, 0, 0x20)
entry_x0[0xe] = 0
entry_x0[0xc] = x0_5 + 0x20
entry_x0[0xf] = 0
entry_x0[0x10] = 0
int64_t result = Botan::allocate_memory(0x20, 1)
entry_x0[0x10] = result + 0x20
entry_x0[0x11] = 0
__builtin_memset(result, 0, 0x20)
entry_x0[0xe] = result
entry_x0[0xf] = result + 0x20
entry_x0[0x12] = 0
return result

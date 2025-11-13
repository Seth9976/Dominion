// 函数: _ZN5Botan8CAST_12812key_scheduleEPKhm
// 地址: 0xceb974
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 8)
int64_t x10 = *(arg1 + 0x10) - x8

if (x10 s>> 2 u<= 0x2f)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&arg1[8])
else if (x10 != 0xc0)
    *(arg1 + 0x10) = x8 + 0xc0

int64_t x8_2 = *(arg1 + 0x20)
int64_t x9_3 = *(arg1 + 0x28) - x8_2

if (x9_3 u<= 0x2f)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&arg1[0x20])
else if (x9_3 != 0x30)
    *(arg1 + 0x28) = x8_2 + 0x30

int64_t* x0_2 = Botan::allocate_memory(0x10, 1)
*x0_2 = 0
x0_2[1] = 0
size_t entry_x2

if (entry_x2 != 0)
    if (arg2 == 0)
        sub_c776cc(Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401))
        noreturn
    
    memcpy(x0_2, arg2, entry_x2)

int32_t* x0_4 = Botan::allocate_memory(4, 4)
int32_t x9_4 = *(x0_2 + 4)
void* var_50 = &x0_4[4]
void* var_48 = &x0_4[4]
int32_t temp0 = _byteswap(*x0_2)
int32_t temp0_1 = _byteswap(x9_4)
*x0_4 = temp0
x0_4[1] = temp0_1
int32_t x8_6 = x0_2[1].d
int32_t x9_6 = *(x0_2 + 0xc)
int32_t* var_58 = x0_4
int32_t temp0_2 = _byteswap(x8_6)
int32_t temp0_3 = _byteswap(x9_6)
x0_4[2] = temp0_2
x0_4[3] = temp0_3
Botan::CAST_128::cast_ks(&arg1[8], &var_58)
char* x0_6 = Botan::allocate_memory(0x30, 4)
void* var_68 = &x0_6[0xc0]
void* var_60 = &x0_6[0xc0]
__builtin_memset(x0_6, 0, 0xc0)
char* var_70 = x0_6
Botan::CAST_128::cast_ks(&var_70, &var_58)
**(arg1 + 0x20) = *x0_6 & 0x1f
*(*(arg1 + 0x20) + 1) = x0_6[4] & 0x1f
*(*(arg1 + 0x20) + 2) = x0_6[8] & 0x1f
*(*(arg1 + 0x20) + 3) = x0_6[0xc] & 0x1f
*(*(arg1 + 0x20) + 4) = x0_6[0x10] & 0x1f
*(*(arg1 + 0x20) + 5) = x0_6[0x14] & 0x1f
*(*(arg1 + 0x20) + 6) = x0_6[0x18] & 0x1f
*(*(arg1 + 0x20) + 7) = x0_6[0x1c] & 0x1f
*(*(arg1 + 0x20) + 8) = x0_6[0x20] & 0x1f
*(*(arg1 + 0x20) + 9) = x0_6[0x24] & 0x1f
*(*(arg1 + 0x20) + 0xa) = x0_6[0x28] & 0x1f
*(*(arg1 + 0x20) + 0xb) = x0_6[0x2c] & 0x1f
*(*(arg1 + 0x20) + 0xc) = x0_6[0x30] & 0x1f
*(*(arg1 + 0x20) + 0xd) = x0_6[0x34] & 0x1f
*(*(arg1 + 0x20) + 0xe) = x0_6[0x38] & 0x1f
*(*(arg1 + 0x20) + 0xf) = x0_6[0x3c] & 0x1f
char* x0_8 = var_70

if (x0_8 != 0)
    char* var_68_1 = x0_8
    Botan::deallocate_memory(x0_8, (&x0_6[0xc0] - x0_8) s>> 2, 4)

int32_t* x0_9 = var_58

if (x0_9 != 0)
    Botan::deallocate_memory(x0_9, (&x0_4[4] - x0_9) s>> 2, 4)

return Botan::deallocate_memory(x0_2, 0x10, 1)

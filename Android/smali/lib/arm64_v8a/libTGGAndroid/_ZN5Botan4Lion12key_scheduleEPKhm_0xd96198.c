// 函数: _ZN5Botan4Lion12key_scheduleEPKhm
// 地址: 0xd96198
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = *(arg1 + 0x20)
int64_t x8 = *(arg1 + 0x28)

if (x8 != x0)
    memset(x0, 0, x8 - x0)
    x0 = *(arg1 + 0x20)

*(arg1 + 0x28) = x0
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::shrink_to_fit()
int64_t x0_2 = *(arg1 + 0x38)
int64_t x8_1 = *(arg1 + 0x40)

if (x8_1 != x0_2)
    memset(x0_2, 0, x8_1 - x0_2)
    x0_2 = *(arg1 + 0x38)

*(arg1 + 0x40) = x0_2
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::shrink_to_fit()
(*(**(arg1 + 0x10) + 0x38))()
(*(**(arg1 + 0x18) + 0x10))()
int64_t x0_7 = (***(arg1 + 0x10))()
int64_t x8_8 = *(arg1 + 0x20)
int64_t x9_1 = *(arg1 + 0x28) - x8_8

if (x0_7 u> x9_1)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&arg1[0x20])
else if (x0_7 u< x9_1)
    *(arg1 + 0x28) = x8_8 + x0_7

int64_t x0_10 = (***(arg1 + 0x10))()
int64_t x8_12 = *(arg1 + 0x38)
int64_t x9_3 = *(arg1 + 0x40) - x8_12

if (x0_10 u> x9_3)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&arg1[0x38])
else if (x0_10 u< x9_3)
    *(arg1 + 0x40) = x8_12 + x0_10

int64_t x0_12 = *(arg1 + 0x20)
int64_t x8_14 = *(arg1 + 0x28)
int64_t entry_x2
size_t x23_1 = entry_x2 u>> 1

if (x8_14 != x0_12)
    memset(x0_12, 0, x8_14 - x0_12)

int64_t result = *(arg1 + 0x38)
int64_t x8_15 = *(arg1 + 0x40)

if (x8_15 != result)
    result = memset(result, 0, x8_15 - result)

if (x23_1 == 0)
    return result

if (arg2 != 0)
    int64_t x0_13 = *(arg1 + 0x20)
    
    if (x0_13 != 0)
        memmove(x0_13, arg2, x23_1)
        int64_t x0_14 = *(arg1 + 0x38)
        
        if (x0_14 != 0)
            return memmove(x0_14, arg2 + x23_1, x23_1) __tailcall

Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
return Botan::Lion::clear() __tailcall

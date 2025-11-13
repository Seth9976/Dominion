// 函数: _ZN5BotandvERKNS_6BigIntEj
// 地址: 0xcdd030
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::BigInt* entry_x8

if (arg2 == 1)
    int64_t x0_3 =
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(entry_x8)
    *(entry_x8 + 0x18) = *(arg1 + 0x18)
    *(entry_x8 + 0x20) = *(arg1 + 0x20)
    return x0_3

if (arg2 == 2)
    return Botan::operator>>(arg1, 1) __tailcall

if (arg2 == 0)
    void* x0_9 = __cxa_allocate_exception(0x20)
    Botan::BigInt::DivideByZero::DivideByZero()
    __cxa_throw(x0_9, _typeinfo_for_Botan::BigInt::DivideByZero, Botan::Exception::~Exception)
    noreturn

void* var_50

if (arg2 u<= 0xff)
    __builtin_memset(entry_x8, 0, 0x18)
    *(entry_x8 + 0x18) = -1
    *(entry_x8 + 0x20) = 1
    return Botan::ct_divide_u8(arg1, arg2.b, entry_x8, &var_50)

__builtin_memset(&var_50, 0, 0x18)
void* var_78
__builtin_memset(&var_78, 0, 0x18)
int64_t var_38_1 = -1
int32_t var_30_1 = 1
int64_t var_60_1 = -1
int32_t var_58_1 = 1
void* var_a0
Botan::BigInt::BigInt(&var_a0)
Botan::vartime_divide(arg1, &var_a0, &var_50, &var_78)
void* x0_8 = var_a0

if (x0_8 != 0)
    void* var_98_1 = x0_8
    int64_t var_90
    Botan::deallocate_memory(x0_8, (var_90 - x0_8) s>> 2, 4)

int64_t var_38_2 = -1
int128_t v0_2 = var_50.o
void* x0_1 = var_78
int64_t var_40
*(entry_x8 + 0x10) = var_40
*(entry_x8 + 0x18) = var_38_1
*(entry_x8 + 0x20) = var_30_1
__builtin_memset(&var_50, 0, 0x18)
*entry_x8 = v0_2
int32_t var_30_2 = 1

if (x0_1 != 0)
    void* var_70_1 = x0_1
    int64_t var_68
    Botan::deallocate_memory(x0_1, (var_68 - x0_1) s>> 2, 4)
    x0_1 = var_50
    
    if (x0_1 != 0)
        void* var_48_1 = x0_1
        int64_t var_40_1
        return Botan::deallocate_memory(x0_1, (var_40_1 - x0_1) s>> 2, 4)

return x0_1

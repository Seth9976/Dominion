// 函数: _ZNK5Botan22Encrypted_PSK_Database3getERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xdf0a78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x1
uint64_t x8 = zx.q(*entry_x1)
int32_t temp0 = x8.d & 1
void* x0

if (temp0 != 0)
    x0 = *(entry_x1 + 0x10)
else
    x0 = &entry_x1[1]

uint64_t x1

if (temp0 == 0)
    x1 = x8 u>> 1
else
    x1 = *(entry_x1 + 8)

Botan::nist_key_wrap_padded(x0, x1, *(arg1 + 8))
uint8_t* result
int64_t var_30
Botan::base64_encode(result, var_30 - result)
char var_68
(*(*arg1 + 0x40))(arg1, &var_68)
void* var_58

if ((zx.d(var_68) & 1) != 0)
    operator delete(var_58)

char var_50
uint64_t x8_4 = zx.q(var_50)
uint64_t x1_3
uint64_t var_48

if ((x8_4.d & 1) == 0)
    x1_3 = x8_4 u>> 1
else
    x1_3 = var_48

if (x1_3 == 0)
    void** x0_16 = __cxa_allocate_exception(0x20, x1_3)
    __builtin_strncpy(&var_68, "*Named PSK not located", 0x17)
    *x0_16 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_16[1])
    *x0_16 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_16, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

char* var_40
char* x0_4

if ((x8_4.d & 1) == 0)
    x0_4 = &var_50 | 1
else
    x0_4 = var_40

Botan::base64_decode(x0_4, x1_3, true)
uint8_t* x0_6 = (*(**(arg1 + 8) + 0x68))()
int64_t* x21_1 = *(arg1 + 0x10)
(*(*x21_1 + 0x18))(x21_1, result, var_30 - result)
Botan::Buffered_Computation::final()
uint64_t var_80
Botan::SymmetricAlgorithm::set_key(x0_6, var_80)

if (var_80 != 0)
    uint64_t var_78_1 = var_80
    int64_t var_70
    Botan::deallocate_memory(var_80, var_70 - var_80, 1)

uint8_t* x0_11 = var_68.q
int120_t var_67
Botan::nist_key_unwrap_padded(x0_11, var_67:7.q - x0_11, x0_6)
(*(*x0_6 + 8))(x0_6)
void* x0_13 = var_68.q

if (x0_13 != 0)
    var_67:7.q = x0_13
    Botan::deallocate_memory(x0_13, var_58 - x0_13, 1)

if ((zx.d(var_50) & 1) != 0)
    operator delete(var_40)

if (result == 0)
    return result

uint8_t* result_1 = result
return operator delete(result)

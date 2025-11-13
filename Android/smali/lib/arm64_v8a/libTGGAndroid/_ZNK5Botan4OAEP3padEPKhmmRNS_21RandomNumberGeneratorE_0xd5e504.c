// 函数: _ZNK5Botan4OAEP3padEPKhmmRNS_21RandomNumberGeneratorE
// 地址: 0xd5e504
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = arg4 u>> 3
int64_t x2 = *(arg1 + 0x10) - *(arg1 + 8)
int64_t x9_3

if (x25 u> (1 | (0x7fffffffffffffff & x2) << 1))
    x9_3 = (-1 ^ x2 << 1) + x25
else
    x9_3 = 0

if (x9_3 u< arg3)
    void** x0_8 = __cxa_allocate_exception(0x20)
    int64_t x0_9
    int128_t v0
    x0_9, v0 = operator new(0x20)
    int64_t var_60_1 = x0_9
    int128_t var_70_1 = data_71af80
    __builtin_strncpy(x0_9, "OAEP: Input is too large", 0x19)
    *x0_8 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_8[1])
    *x0_8 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_8, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
uint8_t* x23
void* x26

if (x25 == 0)
    x26 = nullptr
    x23 = nullptr
else
    uint8_t* x0_1 = Botan::allocate_memory(x25, 1)
    x26 = &x0_1[x25]
    x23 = x0_1
    *entry_x8 = x0_1
    entry_x8[2] = x26
    memset(x0_1, 0, x25)
    entry_x8[1] = x26
    x2 = *(arg1 + 0x10) - *(arg1 + 8)

int64_t* entry_x4
(*(*entry_x4 + 0x10))(entry_x4, x23, x2)
int64_t x1_1 = *(arg1 + 8)
void* x27 = x26 - x23
size_t x24_1 = *(arg1 + 0x10) - x1_1
uint64_t x25_1 = x27 - x24_1

if (x27 u< x24_1)
    Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, "buffer_insert", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x461)
    Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, "buffer_insert", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x461)
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
else
    size_t x2_2
    
    x2_2 = x25_1 u< x24_1 ? x25_1 : x24_1
    
    if (x2_2 == 0)
        goto label_d5e5f8
    
    if (x1_1 == 0)
        Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
    else
        memmove(&x23[x24_1], x1_1, x2_2)
    label_d5e5f8:
        *(x26 + not.q(arg3)) = 1
        
        if (x27 u< arg3)
            Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, "buffer_insert", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x461)
            Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                "If n > 0 then args are not null", "copy_mem", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        else
            if (arg3 == 0)
                goto label_d5e62c
            
            if (arg2 != 0)
                memmove(x23 + x27 - arg3, arg2, arg3)
            label_d5e62c:
                Botan::mgf1_mask(*(arg1 + 0x20), x23, x24_1, &x23[x24_1], x25_1)
                uint8_t* x3_1 = *entry_x8
                uint64_t x4_1 = *(arg1 + 0x10) - *(arg1 + 8)
                uint8_t* x1_4 = &x3_1[x4_1]
                return Botan::mgf1_mask(*(arg1 + 0x20), x1_4, entry_x8[1] - x1_4, x3_1, x4_1)

int64_t* x0_12 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
char var_70
void* var_60

if ((zx.d(var_70) & 1) != 0)
    operator delete(var_60)
sub_1101e04(x0_12)
noreturn

// 函数: sub_d6240c
// 地址: 0xd6240c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0_1 = (**arg2)(arg2)
int128_t var_90
char var_78
void* var_68

if (arg3[1] - *arg3 != x0_1)
    void** x0_19 = __cxa_allocate_exception(0x20)
    int64_t x0_20
    int128_t v0
    x0_20, v0 = operator new(0x40)
    int64_t var_80_1 = x0_20
    var_90 = data_71c540
    __builtin_strncpy(x0_20, "Cannot encode PSS string, input length invalid for hash", 0x38)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Encoding error: ", &var_90)
    *x0_19 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_19[1])
    *x0_19 = _vtable_for_Botan::Invalid_Argument + 0x10
    
    if ((zx.d(var_78) & 1) != 0)
        operator delete(var_68)
    
    *x0_19 = _vtable_for_Botan::Encoding_Error + 0x10
    __cxa_throw(x0_19, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
    noreturn

int64_t x19 = arg4[1] - *arg4

if (((x19 + x0_1) << 3) + 9 u> arg5)
    void** x0_25 = __cxa_allocate_exception(0x20)
    int64_t x0_26
    int128_t v0_1
    x0_26, v0_1 = operator new(0x40)
    int64_t var_80_2 = x0_26
    var_90 = data_71d0c0
    __builtin_strncpy(x0_26, "Cannot encode PSS string, output length too small", 0x32)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Encoding error: ", &var_90)
    *x0_25 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_25[1])
    *x0_25 = _vtable_for_Botan::Invalid_Argument + 0x10
    
    if ((zx.d(var_78) & 1) != 0)
        operator delete(var_68)
    
    *x0_25 = _vtable_for_Botan::Encoding_Error + 0x10
    __cxa_throw(x0_25, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
    noreturn

var_78 = 0
(*(*arg2 + 0x18))(arg2, &var_78, 1)
var_78 = 0
(*(*arg2 + 0x18))(arg2, &var_78, 1)
var_78 = 0
(*(*arg2 + 0x18))(arg2, &var_78, 1)
var_78 = 0
(*(*arg2 + 0x18))(arg2, &var_78, 1)
var_78 = 0
(*(*arg2 + 0x18))(arg2, &var_78, 1)
var_78 = 0
(*(*arg2 + 0x18))(arg2, &var_78, 1)
var_78 = 0
(*(*arg2 + 0x18))(arg2, &var_78, 1)
var_78 = 0
(*(*arg2 + 0x18))(arg2, &var_78, 1)
int64_t x1_8 = *arg3
uint64_t x25 = (arg5 + 7) u>> 3
(*(*arg2 + 0x18))(arg2, x1_8, arg3[1] - x1_8)
int64_t x1_9 = *arg4
(*(*arg2 + 0x18))(arg2, x1_9, arg4[1] - x1_9)
Botan::Buffered_Computation::final()
__builtin_memset(arg1, 0, 0x18)
uint8_t** var_a8 = arg1
void* x20_1
uint8_t* x24_1

if (x25 == 0)
    x20_1 = nullptr
    x24_1 = nullptr
else
    uint8_t* x0_14 = Botan::allocate_memory(x25, 1)
    x20_1 = &x0_14[x25]
    x24_1 = x0_14
    *arg1 = x0_14
    arg1[2] = x20_1
    memset(x0_14, 0, x25)
    arg1[1] = x20_1

uint64_t x26_1 = x25 - x0_1
int64_t x28_1 = x25 - 1 - x0_1
int64_t x8_29 = x28_1 - x19
int64_t x25_1 = x20_1 - x24_1
size_t x9_4 = x25_1 - x8_29
*(x26_1 - x19 + x24_1 - 2) = 1

if (x25_1 u< x8_29)
    Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, "buffer_insert", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x46f)
    Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, "buffer_insert", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x46f)
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
else
    int64_t x1_10 = *arg4
    size_t x10_2 = arg4[1] - x1_10
    size_t x2_3
    
    x2_3 = x9_4 u< x10_2 ? x9_4 : x10_2
    
    if (x2_3 == 0)
        goto label_d62650
    
    if (x1_10 == 0)
        Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
    else
        memmove(&x24_1[x8_29], x1_10, x2_3)
    label_d62650:
        int64_t result = Botan::mgf1_mask(arg2, var_78.q, x0_1, x24_1, x26_1 - 1)
        size_t x8_34 = x25_1 - x28_1
        *x24_1 &= (0xff u>> (((arg5 + 7).d & 0xfffffff8) - arg5.d)).b
        
        if (x25_1 u< x28_1)
            Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, "buffer_insert", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x46f)
            Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                "If n > 0 then args are not null", "copy_mem", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        else
            void* x20_2 = var_78.q
            int64_t var_70
            size_t x9_8 = var_70 - x20_2
            size_t x2_5
            
            x2_5 = x8_34 u< x9_8 ? x8_34 : x9_8
            
            void* var_70_1
            
            if (x2_5 == 0)
                x24_1[x25 - 1] = 0xbc
                
                if (x20_2 == 0)
                    return result
                
                var_70_1 = x20_2
                return Botan::deallocate_memory(x20_2, var_68 - x20_2, 1)
            
            if (x20_2 != 0)
                memmove(&x24_1[x28_1], x20_2, x2_5)
                x24_1[x25 - 1] = 0xbc
                var_70_1 = x20_2
                return Botan::deallocate_memory(x20_2, var_68 - x20_2, 1)

int64_t* x0_31 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
std::exception::~exception()

if ((zx.d(var_78) & 1) != 0)
    operator delete(var_68)

void* var_80

if ((zx.d(var_90.b) & 1) != 0)
    operator delete(var_80)
__cxa_free_exception(x19)
sub_1101e04(x0_31)
noreturn

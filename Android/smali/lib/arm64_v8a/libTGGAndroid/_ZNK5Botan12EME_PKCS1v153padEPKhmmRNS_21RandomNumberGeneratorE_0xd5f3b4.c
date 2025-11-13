// 函数: _ZNK5Botan12EME_PKCS1v153padEPKhmmRNS_21RandomNumberGeneratorE
// 地址: 0xd5f3b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = arg4 u>> 3
int64_t x9_1

if (arg4 u> 0x57)
    x9_1 = x19 - 0xa
else
    x9_1 = 0

int128_t var_70

if (x9_1 u< arg3)
    void** x0_6 = __cxa_allocate_exception(0x20)
    int64_t x0_7
    int128_t v0
    x0_7, v0 = operator new(0x20)
    int64_t var_60_1 = x0_7
    var_70 = data_71aa40
    __builtin_strncpy(x0_7, "PKCS1: Input is too large", 0x1a)
    *x0_6 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_6[1])
    *x0_6 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_6, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
char* x0_1 = Botan::allocate_memory(x19, 1)
void* x25 = &x0_1[x19]
*entry_x8 = x0_1
entry_x8[2] = x25
memset(x0_1, 0, x19)
entry_x8[1] = x25
*x0_1 = 2
uint64_t x25_1 = x19 - arg3
int64_t* entry_x4
int64_t result = (*(*entry_x4 + 0x10))(entry_x4, &x0_1[1], x25_1 - 2)

if (x25_1 != 2)
    int64_t i = 1
    
    do
        if (zx.d(x0_1[i]) == 0)
            result = (*(*entry_x4 + 0x10))(entry_x4, &var_70, 1)
            uint32_t x8_5
            
            while (true)
                x8_5 = zx.d(var_70.b)
                
                if (x8_5 != 0)
                    break
                
                result = (*(*entry_x4 + 0x10))(entry_x4, &var_70, 1)
            
            x0_1[i] = x8_5.b
        
        i += 1
    while (i != x25_1 - 1)

if (x19 u< arg3)
    Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, "buffer_insert", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x461)
else
    if (arg3 == 0)
        return result
    
    if (arg2 != 0)
        return memmove(&x0_1[x25_1], arg2, arg3)

int64_t* x0_10 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
void* var_60

if ((zx.d(var_70.b) & 1) != 0)
    operator delete(var_60)
sub_1101e04(x0_10)
noreturn

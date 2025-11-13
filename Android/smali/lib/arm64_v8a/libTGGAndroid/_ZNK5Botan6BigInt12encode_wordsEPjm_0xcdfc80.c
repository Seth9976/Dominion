// 函数: _ZNK5Botan6BigInt12encode_wordsEPjm
// 地址: 0xcdfc80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21 = *(arg1 + 0x18)

if (x21 == -1)
    int64_t x8_1 = *arg1
    int64_t x10_1 = *(arg1 + 8)
    int64_t x9_1 = x10_1 - x8_1
    
    if (x10_1 == x8_1)
        x21 = 0
    else
        int64_t x11_1
        
        x11_1 = x9_1 s>= 0 ? x9_1 : -1
        
        int64_t x10_2 = x8_1 - x10_1
        int64_t x11_2
        
        x11_2 = x11_1 s< 1 ? x11_1 : 1
        
        x21 = x9_1 s>> 2
        int64_t x9_2
        
        x9_2 = x10_2 s> x9_1 ? x10_2 : x9_1
        
        int64_t i_1 = x11_2 * (x9_2 u>> 2)
        uint64_t x10_3 = 1
        int64_t i
        
        do
            int32_t x11_3 = *(x8_1 - 4 + (i_1 << 2))
            i = i_1
            i_1 -= 1
            x10_3 = zx.q(x10_3.d) & zx.q(((x11_3 - 1) & not.d(x11_3)) s>> 0x1f)
            x21 -= x10_3
        while (i != 1)
    
    *(arg1 + 0x18) = x21

int128_t var_50
char var_38
void* var_28
int64_t entry_x2

if (x21 u> entry_x2)
    void** x0_3 = __cxa_allocate_exception(0x20)
    int64_t x0_4
    int128_t v0_1
    x0_4, v0_1 = operator new(0x30)
    int64_t var_40_1 = x0_4
    var_50 = data_71a900
    __builtin_strncpy(x0_4, "BigInt::encode_words value too large to encode", 0x2f)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Encoding error: ", &var_50)
    *x0_3 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_3[1])
    *x0_3 = _vtable_for_Botan::Invalid_Argument + 0x10
    
    if ((zx.d(var_38) & 1) != 0)
        operator delete(var_28)
    
    *x0_3 = _vtable_for_Botan::Encoding_Error + 0x10
    __cxa_throw(x0_3, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
    noreturn

size_t x2 = entry_x2 << 2

if (x2 != 0)
    memset(arg2, 0, x2)

if (x21 == 0)
    return 

if (arg2 != 0)
    int64_t x1 = *arg1
    
    if (x1 != 0)
        return memmove(arg2, x1, x21 << 2) __tailcall

int64_t* x0_9 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
std::exception::~exception()

if ((zx.d(var_38) & 1) != 0)
    operator delete(var_28)

void* var_40

if ((zx.d(var_50.b) & 1) != 0)
    operator delete(var_40)
__cxa_free_exception(arg2)
sub_1101e04(x0_9)
noreturn

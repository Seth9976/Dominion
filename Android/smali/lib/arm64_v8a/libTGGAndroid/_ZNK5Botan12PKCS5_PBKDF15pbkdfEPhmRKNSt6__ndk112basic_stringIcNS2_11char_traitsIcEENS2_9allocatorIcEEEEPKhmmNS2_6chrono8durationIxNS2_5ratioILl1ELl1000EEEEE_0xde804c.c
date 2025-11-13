// 函数: _ZNK5Botan12PKCS5_PBKDF15pbkdfEPhmRKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPKhmmNS2_6chrono8durationIxNS2_5ratioILl1ELl1000EEEEE
// 地址: 0xde804c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = arg7

if ((***(arg1 + 8))() u< arg3)
    void** x0_14 = __cxa_allocate_exception(0x20)
    int64_t x0_15
    int128_t v0
    x0_15, v0 = operator new(0x30)
    (*" length too long")[0].o
    int64_t var_70_1 = x0_15
    v0 = data_71a900
    __builtin_strncpy(x0_15, "PKCS5_PBKDF1: Requested output length too long", 0x2f)
    int128_t var_80_1 = v0
    *x0_14 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_14[1])
    *x0_14 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_14, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

*arg4
(*(**(arg1 + 8) + 0x18))()
int64_t* x0_3 = *(arg1 + 8)
(*(*x0_3 + 0x18))(x0_3, arg5, arg6)
*(arg1 + 8)
Botan::Buffered_Computation::final()
int64_t x0_5 = std::__ndk1::chrono::steady_clock::now()
int128_t var_80
void* x21_1

if (result == 0)
    int64_t x25_1 = 1
    
    while (true)
        if (x25_1 u/ 0x2710 * 0x2710 - 1 == result)
            int64_t x8_14 = (
                muls.dp.q(std::__ndk1::chrono::steady_clock::now() - x0_5, 0x431bde82d7b634db)
                u>> 0x40).q
            int64_t entry_x7
            
            if ((x8_14 s>> 0x12) + (x8_14 u>> 0x3f) s> entry_x7)
                break
        
        int64_t* x0_10 = *(arg1 + 8)
        int64_t x1_4 = var_80.q
        (*(*x0_10 + 0x18))(x0_10, x1_4, var_80:8.q - x1_4)
        int64_t* x0_11 = *(arg1 + 8)
        (*(*x0_11 + 0x20))(x0_11, var_80.q)
        x25_1 += 1
        result += 1
    
    result += 1
    x21_1 = var_80.q
    
    if (arg3 == 0)
        goto label_de8200
else
    if (result != 1)
        int64_t x23_1 = 1
        
        do
            int64_t* x0_6 = *(arg1 + 8)
            int64_t x1_1 = var_80.q
            (*(*x0_6 + 0x18))(x0_6, x1_1, var_80:8.q - x1_1)
            int64_t* x0_7 = *(arg1 + 8)
            (*(*x0_7 + 0x20))(x0_7, var_80.q)
            x23_1 += 1
        while (result != x23_1)
    
    x21_1 = var_80.q
    
    if (arg3 == 0)
    label_de8200:
        
        if (x21_1 == 0)
            return result
        
        goto label_de8208

void* var_70

if (arg2 != 0 && x21_1 != 0)
    memmove(arg2, x21_1, arg3)
label_de8208:
    var_80:8.q = x21_1
    Botan::deallocate_memory(x21_1, var_70 - x21_1, 1)
    return result

int64_t* x0_19 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)

if ((zx.d(var_80.b) & 1) != 0)
    operator delete(var_70)

sub_1101e04(x0_19)
noreturn

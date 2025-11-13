// 函数: _ZN5Botan14Montgomery_Int8fix_sizeEv
// 地址: 0xdd3170
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
int64_t x8 = entry_x0[5]
int64_t x9_1 = *(*entry_x0 + 0xa8)

if (x8 == -1)
    int64_t x10_1 = entry_x0[2]
    int64_t x12_1 = entry_x0[3]
    int64_t x11_1 = x12_1 - x10_1
    
    if (x12_1 == x10_1)
        x8 = 0
    else
        int64_t x13_1
        
        x13_1 = x11_1 s>= 0 ? x11_1 : -1
        
        int64_t x12_2 = x10_1 - x12_1
        int64_t x13_2
        
        x13_2 = x13_1 s< 1 ? x13_1 : 1
        
        x8 = x11_1 s>> 2
        int64_t x11_2
        
        x11_2 = x12_2 s> x11_1 ? x12_2 : x11_1
        
        int64_t i_1 = x13_2 * (x11_2 u>> 2)
        uint64_t x12_3 = 1
        int64_t i
        
        do
            int32_t x13_3 = *(x10_1 - 4 + (i_1 << 2))
            i = i_1
            i_1 -= 1
            x12_3 = zx.q(x12_3.d) & zx.q(((x13_3 - 1) & not.d(x13_3)) s>> 0x1f)
            x8 -= x12_3
        while (i != 1)
    
    entry_x0[5] = x8

if (x8 u<= x9_1)
    int64_t x10_3 = entry_x0[2]
    int64_t x11_4 = (entry_x0[3] - x10_3) s>> 2
    
    if (x9_1 u> x11_4)
        if (x9_1 u<= (entry_x0[4] - x10_3) s>> 2 || (x9_1 & 0xfffffffffffffff8) + 8 u> x11_4)
            return std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                &entry_x0[2]) __tailcall
        
        if ((x9_1 & 0xfffffffffffffff8) + 8 u< x11_4)
            entry_x0[3] = x10_3 + (((x9_1 & 0xfffffffffffffff8) + 8) << 2)
    
    return 

void** x0_2 = __cxa_allocate_exception(0x20)
int64_t x0_3
int128_t v0_1
x0_3, v0_1 = operator new(0x30)
int64_t var_40 = x0_3
int128_t var_50 = data_71b7f0
__builtin_strncpy(x0_3, "Montgomery_Int::fix_size v too large", 0x25)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Internal error: ", &var_50)
*x0_2 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_2[1])
char var_38
void* var_28

if ((zx.d(var_38) & 1) != 0)
    operator delete(var_28)
*x0_2 = _vtable_for_Botan::Internal_Error + 0x10
__cxa_throw(x0_2, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
noreturn

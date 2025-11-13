// 函数: _ZN5Botan7mul_subERKNS_6BigIntES2_S2_
// 地址: 0xdd62b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg3 + 0x20) != 0)
    int64_t x8 = *(arg3 + 0x18)
    
    if (x8 == -1)
        int64_t x9_1 = *arg3
        int64_t x11_1 = *(arg3 + 8)
        int64_t x10_1 = x11_1 - x9_1
        
        if (x11_1 == x9_1)
            x8 = 0
        else
            int64_t x12_1
            
            x12_1 = x10_1 s>= 0 ? x10_1 : -1
            
            int64_t x11_2 = x9_1 - x11_1
            int64_t x12_2
            
            x12_2 = x12_1 s< 1 ? x12_1 : 1
            
            x8 = x10_1 s>> 2
            int64_t x10_2
            
            x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
            
            int64_t i_3 = x12_2 * (x10_2 u>> 2)
            uint64_t x11_3 = 1
            int64_t i
            
            do
                int32_t x12_3 = *(x9_1 - 4 + (i_3 << 2))
                i = i_3
                i_3 -= 1
                x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
                x8 -= x11_3
            while (i != 1)
        
        *(arg3 + 0x18) = x8
    
    if (x8 != 0)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >* entry_x8
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(entry_x8)
        *(entry_x8 + 0x18) = *(arg1 + 0x18)
        *(entry_x8 + 0x20) = *(arg1 + 0x20)
        Botan::BigInt::operator*=(entry_x8)
        int64_t x2 = *(arg3 + 0x18)
        uint64_t x1_2 = *arg3
        
        if (x2 == -1)
            int64_t x8_3 = *(arg3 + 8)
            int64_t x9_3 = x8_3 - x1_2
            
            if (x8_3 == x1_2)
                x2 = 0
            else
                int64_t x11_4
                
                x11_4 = x9_3 s>= 0 ? x9_3 : -1
                
                int64_t x10_4 = x1_2 - x8_3
                int64_t x11_5
                
                x11_5 = x11_4 s< 1 ? x11_4 : 1
                
                x2 = x9_3 s>> 2
                int64_t x9_4
                
                x9_4 = x10_4 s> x9_3 ? x10_4 : x9_3
                
                int64_t i_2 = x11_5 * (x9_4 u>> 2)
                uint64_t x10_5 = 1
                int64_t i_1
                
                do
                    int32_t x11_6 = *(x1_2 - 4 + (i_2 << 2))
                    i_1 = i_2
                    i_2 -= 1
                    x10_5 = zx.q(x10_5.d) & zx.q(((x11_6 - 1) & not.d(x11_6)) s>> 0x1f)
                    x2 -= x10_5
                while (i_1 != 1)
            
            *(arg3 + 0x18) = x2
        
        *(arg3 + 0x20)
        return Botan::BigInt::add(entry_x8, x1_2, x2)

void** x0_4 = __cxa_allocate_exception(0x20)
int64_t x0_5
int128_t v2
x0_5, v2 = operator new(0x30)
v2 = data_71b820
int64_t var_40 = x0_5
__builtin_strncpy(x0_5, "mul_sub: Third argument must be > 0", 0x24)
int128_t var_50 = v2
*x0_4 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_4[1])
*x0_4 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_4, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn

// 函数: _ZN5Botan19SRP6_Server_Session5step2ERKNS_6BigIntE
// 地址: 0xe3a568
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_60
Botan::BigInt* entry_x1

if (*(entry_x1 + 0x20) != 0)
    int64_t i_2 = *(entry_x1 + 0x18)
    
    if (i_2 == -1)
        int64_t x9_1 = *entry_x1
        int64_t x11_1 = *(entry_x1 + 8)
        int64_t x10_1 = x11_1 - x9_1
        
        if (x11_1 == x9_1)
            i_2 = 0
            *(entry_x1 + 0x18) = 0
        else
            int64_t x12_1
            
            x12_1 = x10_1 s>= 0 ? x10_1 : -1
            
            int64_t x11_2 = x9_1 - x11_1
            int64_t x12_2
            
            x12_2 = x12_1 s< 1 ? x12_1 : 1
            
            i_2 = x10_1 s>> 2
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
                i_2 -= x11_3
            while (i != 1)
            *(entry_x1 + 0x18) = i_2
            
            if (i_2 u> 1)
                goto label_e3a668
        
    label_e3a61c:
        
        if (i_2 != 0)
            int32_t* x9_3 = *entry_x1
            int32_t x10_4 = 0
            int64_t i_1
            
            do
                int32_t x11_4 = *x9_3
                x9_3 = &x9_3[1]
                i_1 = i_2
                i_2 -= 1
                int32_t x11_6 = ((x11_4 - 1) & not.d(x11_4)) s>> 0x1f
                x10_4 = (x10_4 & x11_6) | (not.d(x11_6) & 1)
            while (i_1 != 1)
            
            if (x10_4 s>= 1)
                goto label_e3a668
    else
        if (i_2 u<= 1)
            goto label_e3a61c
        
    label_e3a668:
        
        if ((Botan::BigInt::cmp(entry_x1, (arg1 + 0xb8).b) & 0x80000000) != 0)
            sub_e399ac(&var_60, arg1, *(arg1 + 0xe0), entry_x1, arg1 + 0x18)
            Botan::power_mod(arg1 + 0x68, &var_60, arg1 + 0xb8)
            void* var_d8
            Botan::operator*(entry_x1, &var_d8)
            void* var_b0
            Botan::power_mod(&var_b0, arg1 + 0x40, arg1 + 0xb8)
            void* x0_6 = var_b0
            void* var_a8
            int64_t var_a0
            
            if (x0_6 != 0)
                var_a8 = x0_6
                Botan::deallocate_memory(x0_6, (var_a0 - x0_6) s>> 2, 4)
            
            void* x0_7 = var_d8
            
            if (x0_7 != 0)
                void* var_d0_1 = x0_7
                int64_t var_c8
                Botan::deallocate_memory(x0_7, (var_c8 - x0_7) s>> 2, 4)
            
            void* var_88
            Botan::BigInt::encode_1363(&var_88, *(arg1 + 0xe0))
            void* x20_2 = var_b0
            int64_t* entry_x8
            __builtin_memset(entry_x8, 0, 0x18)
            uint64_t x22_2 = var_a8 - x20_2
            
            if (var_a8 != x20_2)
                if ((x22_2 & 0xffffffff80000000) != 0)
                    sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
                    noreturn
                
                void* x0_10 = Botan::allocate_memory(x22_2, 1)
                x20_2 = var_b0
                void* x21_2 = x0_10
                *entry_x8 = x0_10
                entry_x8[1] = x0_10
                void* x22_3 = var_a8 - x20_2
                entry_x8[2] = x0_10 + x22_2
                
                if (x22_3 s>= 1)
                    memcpy(x21_2, x20_2, x22_3)
                    x21_2 += x22_3
                
                entry_x8[1] = x21_2
            
            if (x20_2 != 0)
                void* var_a8_1 = x20_2
                Botan::deallocate_memory(x20_2, var_a0 - x20_2, 1)
            
            void* x0_13 = var_88
            
            if (x0_13 != 0)
                void* var_80_1 = x0_13
                int64_t var_78
                Botan::deallocate_memory(x0_13, (var_78 - x0_13) s>> 2, 4)
            
            void* result = var_60.q
            
            if (result == 0)
                return result
            
            var_60:8.q = result
            int64_t var_50
            return Botan::deallocate_memory(result, (var_50 - result) s>> 2, 4)

void** x0_14 = __cxa_allocate_exception(0x20)
int64_t x0_15
int128_t v0
x0_15, v0 = operator new(0x30)
v0 = data_71c510
int64_t var_50_1 = x0_15
__builtin_strncpy(x0_15, "Invalid SRP parameter from client", 0x22)
var_60 = v0
*x0_14 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_14[1])
*x0_14 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_14, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn

// 函数: sub_ef6050
// 地址: 0xef6050
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result_1
__builtin_memset(&result_1, 0, 0x18)
int64_t i_4 = -1
int32_t var_30 = 1
Botan::BigInt::binary_decode(&result_1, arg2)
int128_t var_80

if (var_30 != 0)
    int64_t i_2 = i_4
    
    if (i_2 == -1)
        void* result_6 = result_1
        int64_t var_48
        void* x10_1 = var_48 - result_6
        
        if (var_48 == result_6)
            i_2 = 0
            i_4 = 0
        else
            void* x12_1
            
            x12_1 = x10_1 s>= 0 ? x10_1 : -ffffffffffffffff
            
            void* x11_2 = result_6 - var_48
            void* x12_2
            
            x12_2 = x12_1 s< 1 ? x12_1 : 1
            
            i_2 = x10_1 s>> 2
            void* x10_2
            
            x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
            
            int64_t i_3 = x12_2 * (x10_2 u>> 2)
            uint64_t x11_3 = 1
            int64_t i
            
            do
                int32_t x12_3 = *(result_6 - 4 + (i_3 << 2))
                i = i_3
                i_3 -= 1
                x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
                i_2 -= x11_3
            while (i != 1)
            i_4 = i_2
            
            if (i_2 u> 1)
                goto label_ef6164
        
    label_ef6118:
        
        if (i_2 != 0)
            void* result_7 = result_1
            int32_t x10_4 = 0
            int64_t i_1
            
            do
                int32_t x11_4 = *result_7
                result_7 += 4
                i_1 = i_2
                i_2 -= 1
                int32_t x11_6 = (((x11_4 ^ 1) - 1) & not.d(x11_4)) s>> 0x1f
                x10_4 =
                    (x10_4 & x11_6) | ((((x11_4 - 1) & not.d(x11_4)) s>> 0x1f | 1) & not.d(x11_6))
            while (i_1 != 1)
            
            if (x10_4 s>= 1)
                goto label_ef6164
    else
        if (i_2 u<= 1)
            goto label_ef6118
        
    label_ef6164:
        Botan::BigInt* x0_1 = *(arg1 + 0x10)
        uint32_t var_24 = 1
        Botan::BigInt::add2(x0_1, &var_24, 1, 0)
        int32_t x0_3 = Botan::BigInt::cmp(&result_1, &var_80)
        void* x8_1 = var_80.q
        int64_t var_70
        
        if (x8_1 != 0)
            var_80:8.q = x8_1
            Botan::deallocate_memory(x8_1, (var_70 - x8_1) s>> 2, 4)
        
        if ((x0_3 & 0x80000000) != 0)
            Botan::Blinder::blind(arg1 + 0x40)
            void* result_3 = result_1
            result_1.o = var_80
            var_80.q = result_3
            int64_t var_40
            
            if (result_3 != 0)
                var_80:8.q = result_3
                Botan::deallocate_memory(result_3, (var_40 - result_3) s>> 2, 4)
            
            sub_ef6634(&var_80, arg1, &result_1)
            void* result_4 = result_1
            result_1.o = var_80
            var_80.q = result_4
            
            if (result_4 != 0)
                var_80:8.q = result_4
                Botan::deallocate_memory(result_4, (var_70 - result_4) s>> 2, 4)
            
            Botan::Blinder::unblind(arg1 + 0x40)
            void* result_5 = result_1
            int64_t var_68
            int64_t var_38_2 = var_68
            int64_t var_70_3 = var_40
            int64_t i_5 = i_4
            result_1.o = var_80
            var_80.q = result_5
            int32_t var_60
            int32_t var_30_3 = var_60
            int32_t var_60_3 = var_30
            
            if (result_5 != 0)
                var_80:8.q = result_5
                Botan::deallocate_memory(result_5, (var_40 - result_5) s>> 2, 4)
            
            *(arg1 + 0x10)
            int64_t x0_9 = Botan::BigInt::bits()
            int64_t x8_10
            
            if ((x0_9 & 7) == 0)
                x8_10 = 0
            else
                x8_10 = 8 - (x0_9 & 7)
            
            Botan::BigInt::encode_1363(&result_1, (x8_10 + x0_9) u>> 3)
            void* result = result_1
            
            if (result == 0)
                return result
            
            void* result_2 = result
            return Botan::deallocate_memory(result, (var_70 - result) s>> 2, 4)

void** x0_11 = __cxa_allocate_exception(0x20)
int64_t x0_12
int128_t v2
x0_12, v2 = operator new(0x30)
v2 = data_71b820
int64_t var_70_4 = x0_12
__builtin_strncpy(x0_12, "DH agreement - invalid key provided", 0x24)
var_80 = v2
*x0_11 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_11[1])
*x0_11 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_11, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn

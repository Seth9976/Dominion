// 函数: _ZN5Botan6BigInt15ct_reduce_belowERKS0_RNSt6__ndk16vectorIjNS_16secure_allocatorIjEEEEm
// 地址: 0xce0628
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg2 + 0x20) != 0)
    Botan::BigInt const& x22_1 = arg1
    
    if (*(arg1 + 0x20) != 0)
        int64_t x23 = *(arg2 + 0x18)
        int64_t entry_i
        int64_t i_7 = entry_i
        
        if (x23 == -1)
            int64_t x8_2 = *arg2
            int64_t x10_1 = *(arg2 + 8)
            int64_t x9_1 = x10_1 - x8_2
            
            if (x10_1 == x8_2)
                x23 = 0
            else
                int64_t x11_1
                
                x11_1 = x9_1 s>= 0 ? x9_1 : -1
                
                int64_t x10_2 = x8_2 - x10_1
                int64_t x11_2
                
                x11_2 = x11_1 s< 1 ? x11_1 : 1
                
                x23 = x9_1 s>> 2
                int64_t x9_2
                
                x9_2 = x10_2 s> x9_1 ? x10_2 : x9_1
                
                int64_t i_4 = x11_2 * (x9_2 u>> 2)
                uint64_t x10_3 = 1
                int64_t i
                
                do
                    int32_t x11_3 = *(x8_2 - 4 + (i_4 << 2))
                    i = i_4
                    i_4 -= 1
                    x10_3 = zx.q(x10_3.d) & zx.q(((x11_3 - 1) & not.d(x11_3)) s>> 0x1f)
                    x23 -= x10_3
                while (i != 1)
            
            *(arg2 + 0x18) = x23
        
        int64_t x8_4 = *x22_1
        int64_t x9_6 = (*(x22_1 + 8) - x8_4) s>> 2
        
        if (x23 u> x9_6)
            if (x23 u<= (*(x22_1 + 0x10) - x8_4) s>> 2 || (x23 & 0xfffffffffffffff8) + 8 u> x9_6)
                std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(x22_1)
            else if ((x23 & 0xfffffffffffffff8) + 8 u< x9_6)
                *(x22_1 + 8) = x8_4 + (((x23 & 0xfffffffffffffff8) + 8) << 2)
        
        int64_t x28 = *x22_1
        int64_t x27 = *(x22_1 + 8)
        int64_t x8_5 = *arg3
        size_t x25 = x27 - x28
        uint64_t x24 = x25 s>> 2
        int64_t x9_9 = (*(arg3 + 8) - x8_5) s>> 2
        
        if (x24 u> x9_9)
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg3)
        else if (x24 u< x9_9)
            *(arg3 + 8) = x8_5 + (x24 << 2)
        
        if (x25 != 0)
            memset(*arg3, 0, x25)
            
            if (i_7 != 0)
                size_t x9_10
                
                x9_10 = x25 s>= 0 ? x25 : -1
                
                size_t x8_7 = x28 - x27
                size_t x9_11
                
                x9_11 = x9_10 s< 1 ? x9_10 : 1
                
                size_t x8_8
                
                x8_8 = x8_7 s> x25 ? x8_7 : x25
                
                int64_t x25_1 = x9_11 * (x8_8 u>> 2)
                int64_t x26_1 = 0
                int64_t i_8 = x25_1 & 0xfffffffffffffff8
                int64_t fp_1 = x25_1 << 2
                
                do
                    uint128_t v0_1
                    uint128_t v1_1
                    uint128_t v2_1
                    uint128_t v3_1
                    uint128_t v4_1
                    arg1, v0_1, v1_1, v2_1, v3_1, v4_1 =
                        Botan::bigint_sub3(*arg3, *x22_1, x24, *arg2, x23)
                    *(x22_1 + 0x18) = -1
                    void* x10_8 = *x22_1
                    void* x9_12 = *arg3
                    int32_t x8_12 = ((arg1.d - 1) & not.d(arg1.d)) s>> 0x1f
                    int64_t i_9
                    
                    if (x25_1 u< 8 || (x10_8 u< x9_12 + fp_1 && x9_12 u< x10_8 + fp_1))
                        i_9 = 0
                    label_ce07f8:
                        int64_t i_5 = x25_1 - i_9
                        int64_t x12_2 = i_9 << 2
                        int32_t* x10_9 = x10_8 + x12_2
                        int32_t* x9_13 = x9_12 + x12_2
                        int64_t i_1
                        
                        do
                            int32_t x12_3 = *x9_13
                            x9_13 = &x9_13[1]
                            i_1 = i_5
                            i_5 -= 1
                            *x10_9 = (x12_3 & x8_12) | (*x10_9 & not.d(x8_12))
                            x10_9 = &x10_9[1]
                        while (i_1 != 1)
                    else
                        v0_1.d = x8_12
                        v0_1:4.d = x8_12
                        v0_1:8.d = x8_12
                        v0_1:0xc.d = x8_12
                        void* x11_7 = x9_12 + 0x10
                        void* x12_6 = x10_8 + 0x10
                        int64_t i_6 = i_8
                        int64_t i_2
                        
                        do
                            v1_1 = *(x11_7 - 0x10)
                            v2_1 = *x11_7
                            v4_1 = *x12_6
                            x11_7 += 0x20
                            i_2 = i_6
                            i_6 -= 8
                            v1_1 = vbslq_s8(v0_1, v1_1, *(x12_6 - 0x10))
                            v2_1 = vbslq_s8(v0_1, v2_1, v4_1)
                            *(x12_6 - 0x10) = v1_1
                            *x12_6 = v2_1
                            x12_6 += 0x20
                        while (i_2 != 8)
                        i_9 = i_8
                        
                        if (x25_1 != i_8)
                            goto label_ce07f8
                    x26_1 += 1
                while (x26_1 != i_7)
        else if (i_7 != 0)
            int64_t i_3
            
            do
                Botan::bigint_sub3(*arg3, *x22_1, x24, *arg2, x23)
                i_3 = i_7
                i_7 -= 1
                *(x22_1 + 0x18) = -1
            while (i_3 != 1)
        
        return 

void** x0_5 = __cxa_allocate_exception(0x20)
int64_t x0_6
int128_t v0_2
x0_6, v0_2 = operator new(0x40)
v0_2 = data_71adb0
int64_t var_70 = x0_6
__builtin_strncpy(x0_6, "BigInt::ct_reduce_below both values must be positive", 0x35)
int128_t var_80 = v0_2
*x0_5 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_5[1])
*x0_5 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_5, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn

// 函数: sub_d31990
// 地址: 0xd31990
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::operator*(arg3, arg3)
void* var_90
Botan::operator*(&var_90, arg3)
void* x0_2 = var_90
int64_t var_80

if (x0_2 != 0)
    void* var_88_1 = x0_2
    Botan::deallocate_memory(x0_2, (var_80 - x0_2) s>> 2, 4)

Botan::operator*(arg5, arg3)
int64_t var_50
int64_t x2 = var_50
uint64_t result

if (x2 == -1)
    int64_t var_60
    int64_t x9_1 = var_60 - result
    
    if (var_60 == result)
        x2 = 0
    else
        int64_t x11_1
        
        x11_1 = x9_1 s>= 0 ? x9_1 : -1
        
        int64_t x10_1 = result - var_60
        int64_t x11_2
        
        x11_2 = x11_1 s< 1 ? x11_1 : 1
        
        x2 = x9_1 s>> 2
        int64_t x9_2
        
        x9_2 = x10_1 s> x9_1 ? x10_1 : x9_1
        
        int64_t i_5 = x11_2 * (x9_2 u>> 2)
        uint64_t x10_2 = 1
        int64_t i
        
        do
            int32_t x11_3 = *(result - 4 + (i_5 << 2))
            i = i_5
            i_5 -= 1
            x10_2 = zx.q(x10_2.d) & zx.q(((x11_3 - 1) & not.d(x11_3)) s>> 0x1f)
            x2 -= x10_2
        while (i != 1)
    
    int64_t var_50_1 = x2

Botan::BigInt::add(&var_90, result, x2)
int64_t x2_1 = arg6[3]
uint64_t x1_5 = *arg6

if (x2_1 == -1)
    int64_t x8_5 = arg6[1]
    int64_t x9_4 = x8_5 - x1_5
    
    if (x8_5 == x1_5)
        x2_1 = 0
    else
        int64_t x11_5
        
        x11_5 = x9_4 s>= 0 ? x9_4 : -1
        
        int64_t x10_3 = x1_5 - x8_5
        int64_t x11_6
        
        x11_6 = x11_5 s< 1 ? x11_5 : 1
        
        x2_1 = x9_4 s>> 2
        int64_t x9_5
        
        x9_5 = x10_3 s> x9_4 ? x10_3 : x9_4
        
        int64_t i_6 = x11_6 * (x9_5 u>> 2)
        uint64_t x10_4 = 1
        int64_t i_1
        
        do
            int32_t x11_7 = *(x1_5 - 4 + (i_6 << 2))
            i_1 = i_6
            i_6 -= 1
            x10_4 = zx.q(x10_4.d) & zx.q(((x11_7 - 1) & not.d(x11_7)) s>> 0x1f)
            x2_1 -= x10_4
        while (i_1 != 1)
    
    arg6[3] = x2_1

arg6[4].d
Botan::BigInt::add(&var_90, x1_5, x2_1)
Botan::operator%(&var_90, arg4)
void* x0_7 = var_90
int64_t var_a8
int64_t var_78_1 = var_a8
int128_t var_c0
var_90.o = var_c0
var_c0.q = x0_7
int32_t var_a0
int32_t var_70_1 = var_a0

if (x0_7 != 0)
    var_c0:8.q = x0_7
    Botan::deallocate_memory(x0_7, (var_80 - x0_7) s>> 2, 4)

Botan::ressol(&var_90, arg4)
int32_t x8_10 = arg1[2].d

if (x8_10 != 0)
    uint64_t i_10 = *(arg1 + 0x18)
    uint32_t* x1_9
    
    if (i_10 == -1)
        int64_t x9_9 = *arg1
        int64_t x11_10 = *(arg1 + 8)
        int64_t x10_7 = x11_10 - x9_9
        
        if (x11_10 == x9_9)
            i_10 = 0
        else
            int64_t x12_3
            
            x12_3 = x10_7 s>= 0 ? x10_7 : -1
            
            int64_t x11_11 = x9_9 - x11_10
            int64_t x12_4
            
            x12_4 = x12_3 s< 1 ? x12_3 : 1
            
            i_10 = x10_7 s>> 2
            int64_t x10_8
            
            x10_8 = x11_11 s> x10_7 ? x11_11 : x10_7
            
            int64_t i_8 = x12_4 * (x10_8 u>> 2)
            uint64_t x11_12 = 1
            int64_t i_2
            
            do
                int32_t x12_5 = *(x9_9 - 4 + (i_8 << 2))
                i_2 = i_8
                i_8 -= 1
                x11_12 = zx.q(x11_12.d) & zx.q(((x12_5 - 1) & not.d(x12_5)) s>> 0x1f)
                i_10 -= x11_12
            while (i_2 != 1)
        
        *(arg1 + 0x18) = i_10
        x1_9 = *arg1
        
        if (i_10 != 1)
            goto label_d31c38
    else
        x1_9 = *arg1
        
        if (i_10 != 1)
        label_d31c38:
            int64_t x10_10 = *(arg1 + 8)
            void* x9_12 = x10_10 - x1_9
            
            if (x10_10 == x1_9)
                if ((arg2 & 1) != 0)
                    if (i_10 != -1)
                        goto label_d31cd4
                    
                    i_10 = 0
                label_d31cbc:
                    *(arg1 + 0x18) = i_10
                label_d31cd4:
                    int128_t v0_1
                    int128_t v1_1
                    v0_1, v1_1 = Botan::BigInt::add2(arg4, x1_9, i_10, zx.q(x8_10 != 1 ? 1 : 0))
                    uint64_t x0_10
                    
                    if (&var_c0 == arg1)
                        x0_10 = *arg1
                        
                        if (x0_10 != 0)
                            var_c0:8.q = x0_10
                            Botan::deallocate_memory(x0_10, (var_80 - x0_10) s>> 2, 4)
                    else
                        v1_1 = *arg1
                        v0_1 = var_c0
                        int64_t x10_12 = arg1[1].q
                        int64_t x11_20 = *(arg1 + 0x18)
                        arg1[1].q = var_80
                        int64_t var_78
                        *(arg1 + 0x18) = var_78
                        int32_t x9_16 = arg1[2].d
                        x0_10 = v1_1.q
                        int64_t var_a8_2 = x11_20
                        *arg1 = v0_1
                        var_c0 = v1_1
                        int32_t var_70
                        arg1[2].d = var_70
                        int32_t var_a0_2 = x9_16
                        
                        if (x0_10 != 0)
                            var_c0:8.q = x0_10
                            Botan::deallocate_memory(x0_10, (x10_12 - x0_10) s>> 2, 4)
            else if ((((zx.d(*x1_9) & 1) ^ arg2) & 1) != 0)
                if (i_10 != -1)
                    goto label_d31cd4
                
                void* x12_10
                
                x12_10 = x9_12 s>= 0 ? x9_12 : -ffffffffffffffff
                
                void* x11_18 = x1_9 - x10_10
                void* x12_11
                
                x12_11 = x12_10 s< 1 ? x12_10 : 1
                
                i_10 = x9_12 s>> 2
                void* x9_13
                
                x9_13 = x11_18 s> x9_12 ? x11_18 : x9_12
                
                int64_t i_7 = x12_11 * (x9_13 u>> 2)
                uint64_t x11_19 = 1
                int64_t i_3
                
                do
                    int32_t x12_12 = *(x1_9 - 4 + (i_7 << 2))
                    i_3 = i_7
                    i_7 -= 1
                    x11_19 = zx.q(x11_19.d) & zx.q(((x12_12 - 1) & not.d(x12_12)) s>> 0x1f)
                    i_10 -= x11_19
                while (i_3 != 1)
                goto label_d31cbc
            
            void* x0_11 = var_90
            
            if (x0_11 != 0)
                void* var_88_2 = x0_11
                int64_t var_b0
                Botan::deallocate_memory(x0_11, (var_b0 - x0_11) s>> 2, 4)
            
            if (result == 0)
                return result
            
            uint64_t result_1 = result
            int64_t var_58
            return Botan::deallocate_memory(result, (var_58 - result) s>> 2, 4)
    
    int32_t x11_13 = 0
    uint32_t* x9_11 = x1_9
    uint64_t i_9 = i_10
    int32_t x12_9
    uint64_t i_4
    
    do
        uint32_t x12_7 = *x9_11
        x9_11 = &x9_11[1]
        i_4 = i_9
        i_9 -= 1
        x12_9 = (x11_13 ^ 1) & ((x12_7 - 1) & not.d(x12_7)) s>> 0x1f
        x11_13 = x12_9 ^ 1
    while (i_4 != 1)
    
    if ((x12_9 & 0x80000000) == 0)
        goto label_d31c38

void** x0_13 = __cxa_allocate_exception(0x20)
int64_t x0_14
int128_t v2
x0_14, v2 = operator new(0x30)
v2 = data_71b820
int64_t var_b0_2 = x0_14
__builtin_strncpy(x0_14, "error during EC point decompression", 0x24)
var_c0 = v2
*x0_13 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_13[1])
*x0_13 = _vtable_for_Botan::Illegal_Point + 0x10
__cxa_throw(x0_13, _typeinfo_for_Botan::Illegal_Point, Botan::Exception::~Exception)
noreturn

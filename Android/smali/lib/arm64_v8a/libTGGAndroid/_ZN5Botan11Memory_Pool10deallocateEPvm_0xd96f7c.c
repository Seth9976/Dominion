// 函数: _ZN5Botan11Memory_Pool10deallocateEPvm
// 地址: 0xd96f7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)

if (*(arg1 + 0x78) u> arg2)
    goto label_d96fb0

int64_t result = 0
int64_t entry_x2

if (entry_x2 - 0x10 u> 0xf0 || *(arg1 + 0x80) u< arg2)
    goto label_d96fbc

int64_t x9_2 = 0
int64_t x10_1
int64_t x24_1

do
    x24_1 = *(&data_8519b8 + x9_2)
    x10_1 = x9_2 + 8
    
    if (x9_2 == 0x60)
        break
    
    x9_2 = x10_1
while (x24_1 u< entry_x2)

if (x10_1 == 0x68)
    goto label_d96fb0

std::__ndk1::mutex::lock()
void* x25_2 = arg1 + 0x68
void* x26_1 = *x25_2
int64_t* x20_1

if (x26_1 != 0)
    x25_2 = arg1 + 0x68
    
    while (true)
        int64_t x8_5 = *(x26_1 + 0x20)
        
        if (x24_1 u>= x8_5)
            if (x8_5 u>= x24_1)
                goto label_d97094
            
            x25_2 = x26_1 + 8
            void* x8_7 = *x25_2
            
            if (x8_7 == 0)
                goto label_d97094
            
            x26_1 = x8_7
        else
            void* x8_6 = *x26_1
            
            if (x8_6 == 0)
                x25_2 = x26_1
                x20_1 = *x25_2
                
                if (x20_1 != 0)
                    goto label_d97108
                
                break
            
            x25_2 = x26_1
            x26_1 = x8_6
    
    goto label_d970a0

x26_1 = x25_2
label_d97094:
x20_1 = *x25_2

if (x20_1 == 0)
label_d970a0:
    int64_t* x0_1 = operator new(0x58)
    x0_1[4] = x24_1
    *x0_1 = 0
    x0_1[1] = 0
    x0_1[2] = x26_1
    __builtin_memset(&x0_1[5], 0, 0x30)
    *x25_2 = x0_1
    x20_1 = x0_1
    int64_t x8_9 = **(arg1 + 0x60)
    std::__ndk1::__tree_node_base<void*>* x1
    
    if (x8_9 == 0)
        x1 = x20_1
    else
        *(arg1 + 0x60) = x8_9
        x1 = *x25_2
    
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(*(arg1 + 0x68), 
        x1)
    *(arg1 + 0x70) += 1

label_d97108:
int64_t x8_12 = x20_1[0xa]

if (x8_12 == 0)
label_d97480:
    std::__ndk1::mutex::unlock()
label_d96fb0:
    result = 0
label_d96fbc:
    
    if (*(x23 + 0x28) == x8)
        return result
else
    int64_t x24_2 = 0
    size_t x2
    int64_t x26_2
    int64_t x27_1
    size_t* x28_1
    
    while (true)
        int64_t x14_1 = x20_1[9] + x24_2
        x26_2 = *(x20_1[6] + ((x14_1 u/ 0x38) << 3))
        x27_1 = x14_1 u% 0x38
        x28_1 = x26_2 + x27_1 * 0x48
        int64_t x14_2 = x28_1[2]
        
        if (x14_2 u<= arg2)
            x2 = *x28_1
            
            if (x2 + arg2 u<= x28_1[1] + x14_2)
                break
        
        x24_2 += 1
        
        if (x8_12 == x24_2)
            goto label_d97480
    
    int128_t v0_1
    int128_t v1_1
    v0_1, v1_1 = memset(arg2, 0, x2)
    uint64_t x8_15 = (arg2 - x28_1[2]) u/ *x28_1
    
    if (*(x26_2 + x27_1 * 0x48 + 0x18) u< x8_15)
        Botan::assertion_failure("bit <= m_len", &data_793a18, "free", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xc340)
        Botan::assertion_failure("w < m_bits.size()", &data_793a18, "free", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xc342)
    else
        uint64_t x12_1 = x8_15 u>> 5
        int64_t x11_1 = *(x26_2 + x27_1 * 0x48 + 0x28)
        
        if (x12_1 u< (*(x26_2 + x27_1 * 0x48 + 0x30) - x11_1) s>> 2)
            uint64_t x12_2 = x12_1 << 2
            *(x11_1 + x12_2) &= not.d(1 << x8_15.d)
            *(x26_2 + x27_1 * 0x48 + 0x40) = 0
            int64_t x11_2 = *(x26_2 + x27_1 * 0x48 + 0x30)
            int32_t* x8_18 = *(x26_2 + x27_1 * 0x48 + 0x28)
            void* x9_7 = x11_2 - x8_18
            
            if (x11_2 == x8_18)
            label_d97248:
                int64_t* x8_19 = *(arg1 + 0x38)
                int64_t x9_11 = *(arg1 + 0x40)
                int64_t x22_2 = x28_1[2]
                int64_t x12_3
                
                if (x9_11 == x8_19)
                    x12_3 = 0
                else
                    x12_3 = ((x9_11 - x8_19) << 6) - 1
                
                int64_t x9_15 = *(arg1 + 0x58) + *(arg1 + 0x50)
                
                if (x12_3 == x9_15)
                    v0_1, v1_1 = std::__ndk1::deque<uint8_t*, std::__ndk1::allocator<uint8_t*> >::__add_back_capacity()
                    x8_19 = *(arg1 + 0x38)
                    x9_15 = *(arg1 + 0x50) + *(arg1 + 0x58)
                
                *(*(x8_19 + (x9_15 u>> 6 & 0x3fffffffffffff8)) + ((x9_15 & 0x1ff) << 3)) = x22_2
                *(arg1 + 0x58) += 1
                int64_t x8_24 = x20_1[0xa] - 1
                
                if (x8_24 != x24_2)
                    int64_t x9_18 = x20_1[9]
                    int64_t x10_13 = x20_1[6]
                    int64_t x8_25 = x9_18 + x8_24
                    int128_t* x14_7 = *(x10_13 + ((x8_25 u/ 0x38) << 3)) + x8_25 u% 0x38 * 0x48
                    int64_t x8_27 = x14_7[1].q
                    int64_t x9_19 = x9_18 + x24_2
                    int128_t var_90_1 = *x14_7
                    int128_t* x9_20 = *(x10_13 + ((x9_19 u/ 0x38) << 3)) + x9_19 u% 0x38 * 0x48
                    int128_t var_78_1 = *(x14_7 + 0x18)
                    v1_1 = *(x14_7 + 0x28)
                    int64_t x21_2 = *(x14_7 + 0x38)
                    __builtin_memset(x14_7 + 0x28, 0, 0x18)
                    int64_t x8_29 = x9_20[1].q
                    char x22_3 = x14_7[4].b
                    *x14_7 = *x9_20
                    x14_7[1].q = x8_29
                    *(x14_7 + 0x18) = *(x9_20 + 0x18)
                    *(x14_7 + 0x28) = *(x9_20 + 0x28)
                    x14_7[3].q = x9_20[3].q
                    *(x14_7 + 0x38) = *(x9_20 + 0x38)
                    x9_20[3].q = 0
                    *(x9_20 + 0x28) = 0
                    *(x9_20 + 0x38) = 0
                    x14_7[4].b = x9_20[4].b
                    x9_20[1].q = x8_27
                    *x9_20 = var_90_1
                    *(x9_20 + 0x18) = var_78_1
                    void* x0_5 = *(x9_20 + 0x28)
                    
                    if (x0_5 != 0)
                        x9_20[3].q = x0_5
                        operator delete(x0_5)
                    
                    *(x9_20 + 0x28) = v1_1
                    *(x9_20 + 0x38) = x21_2
                    x9_20[4].b = x22_3
                    x8_24 = x20_1[0xa] - 1
                
                int64_t x10_20 = x20_1[6]
                int64_t x9_22 = x8_24 + x20_1[9]
                int64_t x11_8 = *(x10_20 + ((x9_22 u/ 0x38) << 3))
                int64_t x12_5 = x9_22 u% 0x38
                void* x0_6 = *(x11_8 + x12_5 * 0x48 + 0x28)
                
                if (x0_6 != 0)
                    *(x11_8 + x12_5 * 0x48 + 0x30) = x0_6
                    operator delete(x0_6)
                    x10_20 = x20_1[6]
                    x8_24 = x20_1[0xa] - 1
                    x9_22 = x20_1[9] + x8_24
                
                void* x11_9 = x20_1[7]
                x20_1[0xa] = x8_24
                int64_t x10_25
                
                if (x11_9 == x10_20)
                    x10_25 = 0
                else
                    x10_25 = ((x11_9 - x10_20) s>> 3) * 0x38 - 1
                
                if (x10_25 - x9_22 u>= 0x70)
                    operator delete(*(x11_9 - 8))
                    x20_1[7] -= 8
            else
                void* x10_7 = x8_18 - x11_2
                void* x11_3
                
                x11_3 = x9_7 s>= 0 ? x9_7 : -ffffffffffffffff
                
                void* x11_4
                
                x11_4 = x11_3 s< 1 ? x11_3 : 1
                
                void* x9_8
                
                x9_8 = x10_7 s> x9_7 ? x10_7 : x9_7
                
                int64_t x9_10 = x11_4 * (x9_8 u>> 2)
                
                while (*x8_18 == 0)
                    int64_t temp2_1 = x9_10
                    x9_10 -= 1
                    x8_18 = &x8_18[1]
                    
                    if (temp2_1 == 1)
                        goto label_d97248
            
            std::__ndk1::mutex::unlock()
            result = 1
            goto label_d96fbc
        
        Botan::assertion_failure("w < m_bits.size()", &data_793a18, "free", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xc342)

__stack_chk_fail()
noreturn

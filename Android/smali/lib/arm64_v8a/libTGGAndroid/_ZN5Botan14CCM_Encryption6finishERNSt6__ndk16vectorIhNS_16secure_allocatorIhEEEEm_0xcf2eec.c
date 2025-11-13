// 函数: _ZN5Botan14CCM_Encryption6finishERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEm
// 地址: 0xcf2eec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x24
void* var_30 = entry_x24
int64_t x8 = *arg2
void* var_90
int64_t var_80
int64_t* result_1
char const* const x0_31
int64_t entry_x2

if (*(arg2 + 8) - x8 u< entry_x2)
    x0_31 = "Offset is sane"
else
    *(arg1 + 0x40)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t*> >(
        arg2, x8 + entry_x2, *(arg1 + 0x38))
    
    if ((zx.q(*(arg1 + 0x58) - *(arg1 + 0x50)) & 0xf) == 0)
        void* x20 = *arg2
        int64_t x26 = *(arg2 + 8)
        int64_t* x21 = *(arg1 + 0x18)
        __builtin_memset(&result_1, 0, 0x18)
        int64_t* result_4 = Botan::allocate_memory(0x10, 1)
        *result_4 = 0
        result_4[1] = 0
        result_1 = result_4
        Botan::CCM_Mode::format_b0(arg1)
        int64_t var_88
        (*(*x21 + 0x48))(x21, var_90, result_4, (var_88 - var_90) u/ (*(*x21 + 0x30))(x21))
        
        if (var_90 != 0)
            Botan::deallocate_memory(var_90, var_80 - var_90, 1)
        
        void* x9_5 = *(arg1 + 0x50)
        
        if (*(arg1 + 0x58) != x9_5)
            int64_t i = 0
            
            do
                int64_t* result_6 = result_1
                char* x9_6 = x9_5 + i
                *result_6 ^= *x9_6
                *(result_6 + 1) ^= x9_6[1]
                *(result_6 + 2) ^= x9_6[2]
                *(result_6 + 3) ^= x9_6[3]
                *(result_6 + 4) ^= x9_6[4]
                *(result_6 + 5) ^= x9_6[5]
                *(result_6 + 6) ^= x9_6[6]
                *(result_6 + 7) ^= x9_6[7]
                result_6[1].b ^= x9_6[8]
                *(result_6 + 9) ^= x9_6[9]
                *(result_6 + 0xa) ^= x9_6[0xa]
                *(result_6 + 0xb) ^= x9_6[0xb]
                *(result_6 + 0xc) ^= x9_6[0xc]
                *(result_6 + 0xd) ^= x9_6[0xd]
                *(result_6 + 0xe) ^= x9_6[0xe]
                *(result_6 + 0xf) ^= x9_6[0xf]
                int64_t* result_8 = result_1
                (*(*x21 + 0x48))(x21, result_8, result_8, 
                    (&result_4[2] - result_8) u/ (*(*x21 + 0x30))(x21))
                x9_5 = *(arg1 + 0x50)
                i += 0x10
            while (i != *(arg1 + 0x58) - x9_5)
        
        Botan::CCM_Mode::format_c0()
        int64_t* x0_10 = Botan::allocate_memory(0x10, 1)
        *x0_10 = 0
        x0_10[1] = 0
        void* x28 = var_88 - var_90
        (*(*x21 + 0x48))(x21, var_90, x0_10, x28 u/ (*(*x21 + 0x30))(x21))
        
        if (x28 != 0)
            int64_t x8_21 = not.q(var_90) + var_88
            char x9_11
            
            do
                x9_11 = *(var_90 + x8_21) + 1
                *(var_90 + x8_21) = x9_11
                
                if (x8_21 == 0)
                    break
                
                x8_21 -= 1
            while (zx.d(x9_11) == 0)
        
        int64_t* x0_14
        int128_t v0
        int128_t v1
        x0_14, v0, v1 = Botan::allocate_memory(0x10, 1)
        void* x27_2 = x20 + entry_x2
        *x0_14 = 0
        x0_14[1] = 0
        
        if (x27_2 != x26)
            if (x28 == 0)
                do
                    int64_t* result_10 = result_1
                    void* x22_3 = x26 - x27_2
                    void* x28_1
                    
                    x28_1 = x22_3 u< 0x10 ? x22_3 : 0x10
                    
                    if (x28_1 != 0)
                        void* i_27
                        
                        if (x28_1 u< 8
                                || (result_10 u< x27_2 + x28_1 && x27_2 u< result_10 + x28_1))
                            i_27 = nullptr
                        label_cf348c:
                            void* i_17 = x28_1 - i_27
                            char* x10_37 = result_10 + i_27
                            void* x8_41 = x27_2 + i_27
                            void* i_1
                            
                            do
                                char x11_24 = *x8_41
                                x8_41 += 1
                                i_1 = i_17
                                i_17 -= 1
                                *x10_37 ^= x11_24
                                x10_37 = &x10_37[1]
                            while (i_1 != 1)
                        else if (x22_3 u>= 0x10)
                            i_27 = x28_1 & 0x10
                            void* i_19 = i_27
                            int64_t* result_13 = result_10
                            void* x11_30 = x27_2
                            void* i_2
                            
                            do
                                v0 = *x11_30
                                x11_30 += 0x10
                                i_2 = i_19
                                i_19 -= 0x10
                                *result_13 ^= v0
                                result_13 = &result_13[2]
                            while (i_2 != 0x10)
                            
                            if (x28_1 != i_27)
                                if ((x28_1.d & 8) != 0)
                                    goto label_cf3574
                                
                                goto label_cf348c
                        else
                            i_27 = nullptr
                        label_cf3574:
                            void* x9_18
                            
                            x9_18 = x22_3 u< 0x10 ? x22_3 : 0x10
                            
                            void* i_31 = i_27
                            void* x10_39 = x27_2 + i_27
                            i_27 = x9_18 & 0x18
                            void* x11_28 = result_10 + i_31
                            void* i_23 = i_31 - i_27
                            void* i_3
                            
                            do
                                v0.q = *x10_39
                                x10_39 += 8
                                v1.q = *x11_28
                                i_3 = i_23
                                i_23 += 8
                                *x11_28 = (v1 ^ v0).q
                                x11_28 += 8
                            while (i_3 != -8)
                            
                            if (x9_18 != i_27)
                                goto label_cf348c
                        result_10 = result_1
                    
                    (*(*x21 + 0x48))(x21, result_10, result_10, 
                        (&result_4[2] - result_10) u/ (*(*x21 + 0x30))(x21))
                    (*(*x21 + 0x30))(x21)
                    v0, v1 = (*(*x21 + 0x48))(x21, var_90, x0_14, 0)
                    
                    if (x28_1 != 0)
                        void* i_28
                        
                        if (x28_1 u< 8 || (x27_2 u< x0_14 + x28_1 && x0_14 u< x27_2 + x28_1))
                            i_28 = nullptr
                        label_cf353c:
                            void* i_18 = x28_1 - i_28
                            void* x10_38 = x27_2 + i_28
                            void* x8_52 = x0_14 + i_28
                            void* i_4
                            
                            do
                                char x11_26 = *x8_52
                                x8_52 += 1
                                i_4 = i_18
                                i_18 -= 1
                                *x10_38 ^= x11_26
                                x10_38 += 1
                            while (i_4 != 1)
                        else if (x22_3 u>= 0x10)
                            i_28 = x28_1 & 0x10
                            void* i_20 = i_28
                            void* x10_41 = x27_2
                            int64_t* x11_31 = x0_14
                            void* i_5
                            
                            do
                                v0 = *x11_31
                                x11_31 = &x11_31[2]
                                i_5 = i_20
                                i_20 -= 0x10
                                *x10_41 ^= v0
                                x10_41 += 0x10
                            while (i_5 != 0x10)
                            
                            if (x28_1 != i_28)
                                if ((x28_1.d & 8) != 0)
                                    goto label_cf35c0
                                
                                goto label_cf353c
                        else
                            i_28 = nullptr
                        label_cf35c0:
                            void* x9_19
                            
                            x9_19 = x22_3 u< 0x10 ? x22_3 : 0x10
                            
                            void* i_32 = i_28
                            void* x10_40 = x0_14 + i_28
                            i_28 = x9_19 & 0x18
                            void* x11_29 = x27_2 + i_32
                            void* i_24 = i_32 - i_28
                            void* i_6
                            
                            do
                                v0.q = *x10_40
                                x10_40 += 8
                                v1.q = *x11_29
                                i_6 = i_24
                                i_24 += 8
                                *x11_29 = (v1 ^ v0).q
                                x11_29 += 8
                            while (i_6 != -8)
                            
                            if (x9_19 != i_28)
                                goto label_cf353c
                    
                    x27_2 += x28_1
                while (x27_2 != x26)
            else
                do
                    int64_t* result_9 = result_1
                    void* x22_2 = x26 - x27_2
                    void* x20_1
                    
                    x20_1 = x22_2 u< 0x10 ? x22_2 : 0x10
                    
                    if (x20_1 != 0)
                        void* i_25
                        
                        if (x20_1 u< 8 || (result_9 u< x27_2 + x20_1 && x27_2 u< result_9 + x20_1))
                            i_25 = nullptr
                        label_cf3238:
                            void* i_13 = x20_1 - i_25
                            void* x10_32 = result_9 + i_25
                            char* x8_26 = x27_2 + i_25
                            void* i_7
                            
                            do
                                char x11_16 = *x8_26
                                x8_26 = &x8_26[1]
                                i_7 = i_13
                                i_13 -= 1
                                *x10_32 ^= x11_16
                                x10_32 += 1
                            while (i_7 != 1)
                        else if (x22_2 u>= 0x10)
                            i_25 = x20_1 & 0x10
                            void* i_15 = i_25
                            int64_t* result_12 = result_9
                            void* x11_21 = x27_2
                            void* i_8
                            
                            do
                                v0 = *x11_21
                                x11_21 += 0x10
                                i_8 = i_15
                                i_15 -= 0x10
                                *result_12 ^= v0
                                result_12 = &result_12[2]
                            while (i_8 != 0x10)
                            
                            if (x20_1 != i_25)
                                if ((x20_1.d & 8) == 0)
                                    goto label_cf3238
                                
                                goto label_cf33c4
                        else
                            i_25 = nullptr
                        label_cf33c4:
                            void* i_30 = i_25
                            void* x10_35 = x27_2 + i_25
                            void* x9_16
                            
                            x9_16 = x22_2 u< 0x10 ? x22_2 : 0x10
                            
                            i_25 = x9_16 & 0x18
                            void* x11_22 = result_9 + i_30
                            void* i_22 = i_30 - i_25
                            void* i_9
                            
                            do
                                v0.q = *x10_35
                                x10_35 += 8
                                v1.q = *x11_22
                                i_9 = i_22
                                i_22 += 8
                                *x11_22 = (v1 ^ v0).q
                                x11_22 += 8
                            while (i_9 != -8)
                            
                            if (x9_16 != i_25)
                                goto label_cf3238
                        result_9 = result_1
                    
                    (*(*x21 + 0x48))(x21, result_9, result_9, 
                        (&result_4[2] - result_9) u/ (*(*x21 + 0x30))(x21))
                    v0, v1 = (*(*x21 + 0x48))(x21, var_90, x0_14, x28 u/ (*(*x21 + 0x30))(x21))
                    
                    if (x20_1 != 0)
                        void* i_26
                        
                        if (x20_1 u< 8 || (x27_2 u< x0_14 + x20_1 && x0_14 u< x27_2 + x20_1))
                            i_26 = nullptr
                        label_cf32e8:
                            void* i_14 = x20_1 - i_26
                            void* x10_33 = x27_2 + i_26
                            void* x8_37 = x0_14 + i_26
                            void* i_10
                            
                            do
                                char x11_18 = *x8_37
                                x8_37 += 1
                                i_10 = i_14
                                i_14 -= 1
                                *x10_33 ^= x11_18
                                x10_33 += 1
                            while (i_10 != 1)
                        else if (x22_2 u>= 0x10)
                            i_26 = x20_1 & 0x10
                            void* i_16 = i_26
                            void* x10_36 = x27_2
                            int64_t* x11_23 = x0_14
                            void* i_11
                            
                            do
                                v0 = *x11_23
                                x11_23 = &x11_23[2]
                                i_11 = i_16
                                i_16 -= 0x10
                                *x10_36 ^= v0
                                x10_36 += 0x10
                            while (i_11 != 0x10)
                            
                            if (x20_1 != i_26)
                                if ((x20_1.d & 8) != 0)
                                    goto label_cf334c
                                
                                goto label_cf32e8
                        else
                            i_26 = nullptr
                        label_cf334c:
                            void* i_29 = i_26
                            void* x10_34 = x0_14 + i_26
                            void* x9_15
                            
                            x9_15 = x22_2 u< 0x10 ? x22_2 : 0x10
                            
                            i_26 = x9_15 & 0x18
                            void* x11_20 = x27_2 + i_29
                            void* i_21 = i_29 - i_26
                            void* i_12
                            
                            do
                                v0.q = *x10_34
                                x10_34 += 8
                                v1.q = *x11_20
                                i_12 = i_21
                                i_21 += 8
                                *x11_20 = (v1 ^ v0).q
                                x11_20 += 8
                            while (i_12 != -8)
                            
                            if (x9_15 != i_26)
                                goto label_cf32e8
                    
                    int64_t x8_38 = not.q(var_90) + var_88
                    char x9_14
                    
                    do
                        x9_14 = *(var_90 + x8_38) + 1
                        *(var_90 + x8_38) = x9_14
                        
                        if (x8_38 == 0)
                            break
                        
                        x8_38 -= 1
                    while (zx.d(x9_14) == 0)
                    x27_2 += x20_1
                while (x27_2 != x26)
        
        int64_t* result_7 = result_1
        
        if (&result_4[2] - result_7 u<= 0xf)
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&result_1)
            result_7 = result_1
        
        *result_7 ^= *x0_10
        *(result_7 + 1) ^= *(x0_10 + 1)
        *(result_7 + 2) ^= *(x0_10 + 2)
        *(result_7 + 3) ^= *(x0_10 + 3)
        *(result_7 + 4) ^= *(x0_10 + 4)
        *(result_7 + 5) ^= *(x0_10 + 5)
        *(result_7 + 6) ^= *(x0_10 + 6)
        *(result_7 + 7) ^= *(x0_10 + 7)
        result_7[1].b ^= x0_10[1].b
        *(result_7 + 9) ^= *(x0_10 + 9)
        *(result_7 + 0xa) ^= *(x0_10 + 0xa)
        *(result_7 + 0xb) ^= *(x0_10 + 0xb)
        *(result_7 + 0xc) ^= *(x0_10 + 0xc)
        *(result_7 + 0xd) ^= *(x0_10 + 0xd)
        *(result_7 + 0xe) ^= *(x0_10 + 0xe)
        *(result_7 + 0xf) ^= *(x0_10 + 0xf)
        int64_t x9_54 = *(arg1 + 8)
        int64_t* result_3 = result_1
        int64_t var_98 = x9_54
        Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, uint64_t>(arg2, &result_3)
        int64_t x9_55 = *(arg1 + 0x38)
        int64_t x10_58 = *(arg1 + 0x50)
        *(arg1 + 0x28) = *(arg1 + 0x20)
        *(arg1 + 0x40) = x9_55
        *(arg1 + 0x58) = x10_58
        
        if (x0_14 != 0)
            Botan::deallocate_memory(x0_14, 0x10, 1)
        
        Botan::deallocate_memory(x0_10, 0x10, 1)
        
        if (var_90 != 0)
            Botan::deallocate_memory(var_90, var_80 - var_90, 1)
        
        int64_t* result = result_1
        
        if (result == 0)
            return result
        
        int64_t* result_2 = result
        return Botan::deallocate_memory(result, &result_4[2] - result, 1)
    
    x0_31 = "AD is block size multiple"

int64_t* x0_32 = Botan::throw_invalid_argument(x0_31, "finish", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")

if (entry_x24 != 0)
    Botan::deallocate_memory(entry_x24, 0x10, 1)

void* var_b0

if (var_b0 != 0)
    Botan::deallocate_memory(var_b0, 0x10, 1)

if (var_90 != 0)
    Botan::deallocate_memory(var_90, var_80 - var_90, 1)

int64_t* result_5 = result_1

if (result_5 != 0)
    int64_t* result_11 = result_5
    int64_t var_68
    Botan::deallocate_memory(result_5, var_68 - result_5, 1)

sub_1101e04(x0_32)
noreturn

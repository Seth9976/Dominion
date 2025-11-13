// 函数: _ZN5Botan14OCB_Decryption7decryptEPhm
// 地址: 0xddf8cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = *(arg1 + 0x10)

if (result == 0)
    Botan::SymmetricAlgorithm::throw_key_not_set_error()
else if (*(result + 0x40) != *(result + 0x48))
    int64_t entry_x2
    int64_t x20 = entry_x2
    
    if (entry_x2 != 0)
        uint64_t x21_1 = arg2
        int64_t x23_1 = *(arg1 + 0x58)
        uint64_t x1 = *(arg1 + 0x18)
        
        while (true)
            int64_t x25_1 = *(arg1 + 0x60)
            int64_t x22_1
            
            x22_1 = x25_1 u< x20 ? x25_1 : x20
            
            int64_t x24_1 = x22_1 * x23_1
            int64_t x0 = Botan::L_computer::compute_offsets(result, x1)
            int64_t* x8_2 = *(arg1 + 8)
            int128_t v0_1
            int128_t v1_1
            int128_t v2_1
            int128_t v3_1
            int128_t v4_1
            int128_t v5_1
            int128_t v6_1
            int128_t v7_1
            result, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
                (*(*x8_2 + 0x60))(x8_2, x21_1, x0, x22_1)
            void* x9_4 = *(arg1 + 0x20)
            int64_t x8_3 = x24_1 & 0xffffffffffffffe0
            
            if (x8_3 != 0)
                int64_t x10_1 = 0
                
                if (x8_3 == 0x20 || x9_4 + 0x18 + x8_3 - 0x20 u< x9_4 + 0x18
                        || x9_4 + 0x10 + x8_3 - 0x20 u< x9_4 + 0x10
                        || x9_4 + 8 + x8_3 - 0x20 u< x9_4 + 8 || x9_4 + x8_3 - 0x20 u< x9_4)
                    goto label_ddfa04
                
                if (x9_4 u>= x21_1 + x8_3 || x21_1 u>= x9_4 + x8_3)
                    int64_t i_8 = (((x8_3 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                    x10_1 = i_8 << 5
                    int64_t i_6 = i_8
                    uint64_t x14_2 = x21_1
                    void* x15_2 = x9_4
                    int64_t i
                    
                    do
                        v0_1.q = *x15_2
                        v1_1.q = *(x15_2 + 8)
                        v2_1.q = *(x15_2 + 0x10)
                        v3_1.q = *(x15_2 + 0x18)
                        v0_1:8.q = *(x15_2 + 0x20)
                        v1_1:8.q = *(x15_2 + 0x28)
                        v2_1:8.q = *(x15_2 + 0x30)
                        v3_1:8.q = *(x15_2 + 0x38)
                        v4_1.q = *x14_2
                        v5_1.q = *(x14_2 + 8)
                        v6_1.q = *(x14_2 + 0x10)
                        v7_1.q = *(x14_2 + 0x18)
                        v4_1:8.q = *(x14_2 + 0x20)
                        v5_1:8.q = *(x14_2 + 0x28)
                        v6_1:8.q = *(x14_2 + 0x30)
                        v7_1:8.q = *(x14_2 + 0x38)
                        x14_2 += 0x40
                        i = i_6
                        i_6 -= 2
                        int128_t v16_1 = v4_1 ^ v0_1
                        int128_t v17_1 = v5_1 ^ v1_1
                        int128_t v18_1 = v6_1 ^ v2_1
                        int128_t v19_1 = v7_1 ^ v3_1
                        *x15_2 = v16_1.q
                        *(x15_2 + 8) = v17_1.q
                        *(x15_2 + 0x10) = v18_1.q
                        *(x15_2 + 0x18) = v19_1.q
                        *(x15_2 + 0x20) = v16_1:8.q
                        *(x15_2 + 0x28) = v17_1:8.q
                        *(x15_2 + 0x30) = v18_1:8.q
                        *(x15_2 + 0x38) = v19_1:8.q
                        x15_2 += 0x40
                    while (i != 2)
                    
                    if (((x8_3 - 0x20) u>> 5) + 1 != i_8)
                        goto label_ddfa04
                else
                    x10_1 = 0
                label_ddfa04:
                    int64_t i_5 = x10_1 - x8_3
                    void* x10_5 = x21_1 + x10_1 + 0x10
                    void* x12_4 = x9_4 + x10_1 + 0x10
                    int64_t i_1
                    
                    do
                        v2_1 = *(x10_5 - 0x10)
                        v3_1 = *x10_5
                        i_1 = i_5
                        i_5 += 0x20
                        x10_5 += 0x20
                        v1_1 = v3_1 ^ *x12_4
                        *(x12_4 - 0x10) ^= v2_1
                        *x12_4 = v1_1
                        x12_4 += 0x20
                    while (i_1 != -0x20)
            
            if (x24_1 != x8_3)
                if ((x24_1 & 0x18) == 0)
                label_ddfa9c:
                    int64_t i_4 = x24_1 - x8_3
                    void* x9_5 = x9_4 + x8_3
                    char* x8_4 = x21_1 + x8_3
                    int64_t i_2
                    
                    do
                        char x11_5 = *x8_4
                        x8_4 = &x8_4[1]
                        i_2 = i_4
                        i_4 -= 1
                        *x9_5 ^= x11_5
                        x9_5 += 1
                    while (i_2 != 1)
                else
                    void* x10_6 = x9_4 + x8_3
                    int64_t* x11_4 = x21_1 + x8_3
                    
                    if (x10_6 u< x21_1 + x24_1 && x11_4 u< x9_4 + x24_1)
                        goto label_ddfa9c
                    
                    int64_t x12_6
                    
                    x12_6 = x20 u< x25_1 ? x20 : x25_1
                    
                    int64_t x12_7 = x23_1 * x12_6
                    int64_t x12_8 = x12_7 & 7
                    int64_t i_7 = (x12_7 & 0x1f) - x12_8
                    x8_3 += i_7
                    int64_t i_3
                    
                    do
                        v0_1.q = *x11_4
                        x11_4 = &x11_4[1]
                        v1_1.q = *x10_6
                        i_3 = i_7
                        i_7 -= 8
                        *x10_6 = (v1_1 ^ v0_1).q
                        x10_6 += 8
                    while (i_3 != 8)
                    
                    if (x12_8 != 0)
                        goto label_ddfa9c
            
            int64_t temp0_1 = x20
            x20 -= x22_1
            x1 = *(arg1 + 0x18) + x22_1
            *(arg1 + 0x18) = x1
            
            if (temp0_1 == x22_1)
                break
            
            result = *(arg1 + 0x10)
            x21_1 += x24_1
    
    return result

uint8_t* x0_3
uint64_t x1_2
x0_3, x1_2 = Botan::throw_invalid_state("m_L->initialized()", "decrypt", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
return Botan::OCB_Decryption::process(x0_3, x1_2) __tailcall

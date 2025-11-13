// 函数: _ZN5Botan4CMAC12final_resultEPh
// 地址: 0xd045bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x11 = *(arg1 + 0x80)
void* x9 = *(arg1 + 0x30)
void* x8 = *(arg1 + 0x18)
int64_t x10 = x11 & 0xffffffffffffffe0
int128_t entry_v0
int128_t entry_v1
int128_t entry_v2
int128_t entry_v3
int128_t entry_v4
int128_t entry_v5
int128_t entry_v6
int128_t entry_v7

if (x10 != 0)
    int64_t x12_1 = 0
    
    if (x10 == 0x20 || x9 + 0x18 + x10 - 0x20 u< x9 + 0x18 || x9 + 0x10 + x10 - 0x20 u< x9 + 0x10
            || x9 + 8 + x10 - 0x20 u< x9 + 8 || x9 + x10 - 0x20 u< x9)
        goto label_d04698
    
    if (x9 u>= x8 + x10 || x8 u>= x9 + x10)
        int64_t i_24 = (((x10 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
        x12_1 = i_24 << 5
        int64_t i_18 = i_24
        void* x16_2 = x8
        void* x17_2 = x9
        int64_t i
        
        do
            entry_v0.q = *x17_2
            entry_v1.q = *(x17_2 + 8)
            entry_v2.q = *(x17_2 + 0x10)
            entry_v3.q = *(x17_2 + 0x18)
            entry_v0:8.q = *(x17_2 + 0x20)
            entry_v1:8.q = *(x17_2 + 0x28)
            entry_v2:8.q = *(x17_2 + 0x30)
            entry_v3:8.q = *(x17_2 + 0x38)
            entry_v4.q = *x16_2
            entry_v5.q = *(x16_2 + 8)
            entry_v6.q = *(x16_2 + 0x10)
            entry_v7.q = *(x16_2 + 0x18)
            entry_v4:8.q = *(x16_2 + 0x20)
            entry_v5:8.q = *(x16_2 + 0x28)
            entry_v6:8.q = *(x16_2 + 0x30)
            entry_v7:8.q = *(x16_2 + 0x38)
            x16_2 += 0x40
            i = i_18
            i_18 -= 2
            int128_t v16_1 = entry_v4 ^ entry_v0
            int128_t v17_1 = entry_v5 ^ entry_v1
            int128_t v18_1 = entry_v6 ^ entry_v2
            int128_t v19_1 = entry_v7 ^ entry_v3
            *x17_2 = v16_1.q
            *(x17_2 + 8) = v17_1.q
            *(x17_2 + 0x10) = v18_1.q
            *(x17_2 + 0x18) = v19_1.q
            *(x17_2 + 0x20) = v16_1:8.q
            *(x17_2 + 0x28) = v17_1:8.q
            *(x17_2 + 0x30) = v18_1:8.q
            *(x17_2 + 0x38) = v19_1:8.q
            x17_2 += 0x40
        while (i != 2)
        
        if (((x10 - 0x20) u>> 5) + 1 != i_24)
            goto label_d04698
    else
        x12_1 = 0
    label_d04698:
        int64_t i_15 = x12_1 - x10
        void* x12_5 = x8 + x12_1 + 0x10
        void* x14_4 = x9 + x12_1 + 0x10
        int64_t i_1
        
        do
            entry_v2 = *(x12_5 - 0x10)
            entry_v3 = *x12_5
            i_1 = i_15
            i_15 += 0x20
            x12_5 += 0x20
            entry_v0 = entry_v2 ^ *(x14_4 - 0x10)
            entry_v1 = entry_v3 ^ *x14_4
            *(x14_4 - 0x10) = entry_v0
            *x14_4 = entry_v1
            x14_4 += 0x20
        while (i_1 != -0x20)

if (x11 != x10)
    if ((x11 & 0x18) == 0)
    label_d04724:
        int64_t i_13 = x11 - x10
        void* x9_1 = x9 + x10
        void* x8_1 = x8 + x10
        int64_t i_2
        
        do
            char x10_1 = *x8_1
            x8_1 += 1
            i_2 = i_13
            i_13 -= 1
            *x9_1 ^= x10_1
            x9_1 += 1
        while (i_2 != 1)
    else
        int64_t* x12_6 = x9 + x10
        void* x13_4 = x8 + x10
        
        if (x12_6 u< x8 + x11 && x13_4 u< x9 + x11)
            goto label_d04724
        
        int64_t x14_6 = x11 & 7
        int64_t i_19 = (x11 & 0x1f) - x14_6
        x10 += i_19
        int64_t i_3
        
        do
            entry_v0.q = *x13_4
            x13_4 += 8
            entry_v1.q = *x12_6
            i_3 = i_19
            i_19 -= 8
            entry_v0 ^= entry_v1
            *x12_6 = entry_v0.q
            x12_6 = &x12_6[1]
        while (i_3 != 8)
        
        if (x14_6 != 0)
            goto label_d04724

int64_t x9_2 = *(arg1 + 0x80)
void* x8_2 = *(arg1 + 0x30)

if (x9_2 != *(arg1 + 0x78))
    *(x8_2 + x9_2) ^= 0x80
    int64_t x11_2 = *(arg1 + 0x78)
    void* x9_3 = *(arg1 + 0x30)
    void* x8_3 = *(arg1 + 0x60)
    int64_t x10_7 = x11_2 & 0xffffffffffffffe0
    
    if (x10_7 != 0)
        int64_t x12_11 = 0
        
        if (x10_7 == 0x20 || x9_3 + 0x18 + x10_7 - 0x20 u< x9_3 + 0x18
                || x9_3 + 0x10 + x10_7 - 0x20 u< x9_3 + 0x10 || x9_3 + 8 + x10_7 - 0x20 u< x9_3 + 8
                || x9_3 + x10_7 - 0x20 u< x9_3)
            goto label_d049a0
        
        if (x9_3 u>= x8_3 + x10_7 || x8_3 u>= x9_3 + x10_7)
            int64_t i_26 = (((x10_7 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
            x12_11 = i_26 << 5
            int64_t i_22 = i_26
            void* x16_6 = x8_3
            void* x17_6 = x9_3
            int64_t i_4
            
            do
                entry_v0.q = *x17_6
                entry_v1.q = *(x17_6 + 8)
                entry_v2.q = *(x17_6 + 0x10)
                entry_v3.q = *(x17_6 + 0x18)
                entry_v0:8.q = *(x17_6 + 0x20)
                entry_v1:8.q = *(x17_6 + 0x28)
                entry_v2:8.q = *(x17_6 + 0x30)
                entry_v3:8.q = *(x17_6 + 0x38)
                entry_v4.q = *x16_6
                entry_v5.q = *(x16_6 + 8)
                entry_v6.q = *(x16_6 + 0x10)
                entry_v7.q = *(x16_6 + 0x18)
                entry_v4:8.q = *(x16_6 + 0x20)
                entry_v5:8.q = *(x16_6 + 0x28)
                entry_v6:8.q = *(x16_6 + 0x30)
                entry_v7:8.q = *(x16_6 + 0x38)
                x16_6 += 0x40
                i_4 = i_22
                i_22 -= 2
                int128_t v16_3 = entry_v4 ^ entry_v0
                int128_t v17_3 = entry_v5 ^ entry_v1
                int128_t v18_3 = entry_v6 ^ entry_v2
                int128_t v19_3 = entry_v7 ^ entry_v3
                *x17_6 = v16_3.q
                *(x17_6 + 8) = v17_3.q
                *(x17_6 + 0x10) = v18_3.q
                *(x17_6 + 0x18) = v19_3.q
                *(x17_6 + 0x20) = v16_3:8.q
                *(x17_6 + 0x28) = v17_3:8.q
                *(x17_6 + 0x30) = v18_3:8.q
                *(x17_6 + 0x38) = v19_3:8.q
                x17_6 += 0x40
            while (i_4 != 2)
            
            if (((x10_7 - 0x20) u>> 5) + 1 != i_26)
                goto label_d049a0
        else
            x12_11 = 0
        label_d049a0:
            int64_t i_17 = x12_11 - x10_7
            void* x12_19 = x8_3 + x12_11 + 0x10
            void* x14_16 = x9_3 + x12_11 + 0x10
            int64_t i_5
            
            do
                entry_v2 = *(x12_19 - 0x10)
                entry_v3 = *x12_19
                i_5 = i_17
                i_17 += 0x20
                x12_19 += 0x20
                entry_v0 = entry_v2 ^ *(x14_16 - 0x10)
                entry_v1 = entry_v3 ^ *x14_16
                *(x14_16 - 0x10) = entry_v0
                *x14_16 = entry_v1
                x14_16 += 0x20
            while (i_5 != -0x20)
    
    if (x11_2 != x10_7)
        if ((x11_2 & 0x18) == 0)
        label_d04a2c:
            int64_t i_14 = x11_2 - x10_7
            void* x9_4 = x9_3 + x10_7
            void* x8_5 = x8_3 + x10_7
            int64_t i_6
            
            do
                char x10_9 = *x8_5
                x8_5 += 1
                i_6 = i_14
                i_14 -= 1
                *x9_4 ^= x10_9
                x9_4 += 1
            while (i_6 != 1)
        else
            int64_t* x12_20 = x9_3 + x10_7
            void* x13_12 = x8_3 + x10_7
            
            if (x12_20 u< x8_3 + x11_2 && x13_12 u< x9_3 + x11_2)
                goto label_d04a2c
            
            int64_t x14_18 = x11_2 & 7
            int64_t i_23 = (x11_2 & 0x1f) - x14_18
            x10_7 += i_23
            int64_t i_7
            
            do
                entry_v0.q = *x13_12
                x13_12 += 8
                entry_v1.q = *x12_20
                i_7 = i_23
                i_23 -= 8
                entry_v0 ^= entry_v1
                *x12_20 = entry_v0.q
                x12_20 = &x12_20[1]
            while (i_7 != 8)
            
            if (x14_18 != 0)
                goto label_d04a2c
else
    void* x10_4 = *(arg1 + 0x48)
    int64_t x11_1 = x9_2 & 0xffffffffffffffe0
    
    if (x11_1 != 0)
        int64_t x12_8 = 0
        
        if (x11_1 == 0x20 || x8_2 + 0x18 + x11_1 - 0x20 u< x8_2 + 0x18
                || x8_2 + 0x10 + x11_1 - 0x20 u< x8_2 + 0x10 || x8_2 + 8 + x11_1 - 0x20 u< x8_2 + 8
                || x8_2 + x11_1 - 0x20 u< x8_2)
            goto label_d048a0
        
        if (x8_2 u>= x10_4 + x11_1 || x10_4 u>= x8_2 + x11_1)
            int64_t i_25 = (((x11_1 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
            x12_8 = i_25 << 5
            int64_t i_20 = i_25
            void* x16_5 = x10_4
            void* x17_5 = x8_2
            int64_t i_8
            
            do
                entry_v0.q = *x17_5
                entry_v1.q = *(x17_5 + 8)
                entry_v2.q = *(x17_5 + 0x10)
                entry_v3.q = *(x17_5 + 0x18)
                entry_v0:8.q = *(x17_5 + 0x20)
                entry_v1:8.q = *(x17_5 + 0x28)
                entry_v2:8.q = *(x17_5 + 0x30)
                entry_v3:8.q = *(x17_5 + 0x38)
                entry_v4.q = *x16_5
                entry_v5.q = *(x16_5 + 8)
                entry_v6.q = *(x16_5 + 0x10)
                entry_v7.q = *(x16_5 + 0x18)
                entry_v4:8.q = *(x16_5 + 0x20)
                entry_v5:8.q = *(x16_5 + 0x28)
                entry_v6:8.q = *(x16_5 + 0x30)
                entry_v7:8.q = *(x16_5 + 0x38)
                x16_5 += 0x40
                i_8 = i_20
                i_20 -= 2
                int128_t v16_2 = entry_v4 ^ entry_v0
                int128_t v17_2 = entry_v5 ^ entry_v1
                int128_t v18_2 = entry_v6 ^ entry_v2
                int128_t v19_2 = entry_v7 ^ entry_v3
                *x17_5 = v16_2.q
                *(x17_5 + 8) = v17_2.q
                *(x17_5 + 0x10) = v18_2.q
                *(x17_5 + 0x18) = v19_2.q
                *(x17_5 + 0x20) = v16_2:8.q
                *(x17_5 + 0x28) = v17_2:8.q
                *(x17_5 + 0x30) = v18_2:8.q
                *(x17_5 + 0x38) = v19_2:8.q
                x17_5 += 0x40
            while (i_8 != 2)
            
            if (((x11_1 - 0x20) u>> 5) + 1 != i_25)
                goto label_d048a0
        else
            x12_8 = 0
        label_d048a0:
            int64_t i_16 = x12_8 - x11_1
            void* x12_15 = x10_4 + x12_8 + 0x10
            void* x14_12 = x8_2 + x12_8 + 0x10
            int64_t i_9
            
            do
                entry_v2 = *(x12_15 - 0x10)
                entry_v3 = *x12_15
                i_9 = i_16
                i_16 += 0x20
                x12_15 += 0x20
                entry_v0 = entry_v2 ^ *(x14_12 - 0x10)
                entry_v1 = entry_v3 ^ *x14_12
                *(x14_12 - 0x10) = entry_v0
                *x14_12 = entry_v1
                x14_12 += 0x20
            while (i_9 != -0x20)
    
    if (x9_2 != x11_1)
        if ((x9_2 & 0x18) == 0)
        label_d0492c:
            int64_t i_12 = x9_2 - x11_1
            void* x8_4 = x8_2 + x11_1
            void* x10_8 = x10_4 + x11_1
            int64_t i_10
            
            do
                char x11_3 = *x10_8
                x10_8 += 1
                i_10 = i_12
                i_12 -= 1
                *x8_4 ^= x11_3
                x8_4 += 1
            while (i_10 != 1)
        else
            int64_t* x12_16 = x8_2 + x11_1
            void* x13_9 = x10_4 + x11_1
            
            if (x12_16 u< x10_4 + x9_2 && x13_9 u< x8_2 + x9_2)
                goto label_d0492c
            
            int64_t x14_14 = x9_2 & 7
            int64_t i_21 = (x9_2 & 0x1f) - x14_14
            x11_1 += i_21
            int64_t i_11
            
            do
                entry_v0.q = *x13_9
                x13_9 += 8
                entry_v1.q = *x12_16
                i_11 = i_21
                i_21 -= 8
                entry_v0 ^= entry_v1
                *x12_16 = entry_v0.q
                x12_16 = &x12_16[1]
            while (i_11 != 8)
            
            if (x14_14 != 0)
                goto label_d0492c

int64_t* x21 = *(arg1 + 0x10)
int64_t x22 = *(arg1 + 0x30)
int64_t lr
(*(*x21 + 0x48))(x21, x22, x22, 
    (*(arg1 + 0x38) - x22) u/ (*(*x21 + 0x30))(x21, entry_v0, entry_v1, entry_v2, entry_v3, 
        entry_v4, entry_v5, entry_v6, entry_v7, lr))
size_t x2_1 = *(arg1 + 0x78)
int64_t x1_1 = *(arg1 + 0x30)

if (x2_1 != 0)
    int64_t entry_x1
    
    if (entry_x1 == 0 || x1_1 == 0)
        uint8_t* x0_8
        uint64_t x1_2
        x0_8, x1_2 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        return Botan::CMAC::key_schedule(x0_8, x1_2) __tailcall
    
    memmove(entry_x1, x1_1, x2_1)
    x1_1 = *(arg1 + 0x30)

int64_t x8_10 = *(arg1 + 0x38)

if (x8_10 != x1_1)
    memset(x1_1, 0, x8_10 - x1_1)

int64_t result = *(arg1 + 0x18)
int64_t x8_11 = *(arg1 + 0x20)

if (x8_11 != result)
    result = memset(result, 0, x8_11 - result)

*(arg1 + 0x80) = 0
return result

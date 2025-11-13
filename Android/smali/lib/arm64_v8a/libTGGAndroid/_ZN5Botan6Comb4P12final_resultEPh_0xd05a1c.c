// 函数: _ZN5Botan6Comb4P12final_resultEPh
// 地址: 0xd05a1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 8)
Botan::Buffered_Computation::final()
*(arg1 + 0x10)
int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t v4
int128_t v5
int128_t v6
int128_t v7
v0, v1, v2, v3, v4, v5, v6, v7 = Botan::Buffered_Computation::final()
void* result_1
void* result_4 = result_1
void* var_58
void* x9 = var_58
int64_t var_38
void* x10_1 = var_38 - result_4
int64_t var_50
void* x11_1 = var_50 - x9
void* x11_2

x11_2 = x11_1 u< x10_1 ? x11_1 : x10_1

void* x10_2 = x11_2 & 0xffffffffffffffe0

if (x10_2 != 0)
    int64_t x12_1 = 0
    
    if (x10_2 == 0x20 || result_4 + 0x18 + x10_2 - 0x20 u< result_4 + 0x18
            || result_4 + 0x10 + x10_2 - 0x20 u< result_4 + 0x10
            || result_4 + 8 + x10_2 - 0x20 u< result_4 + 8 || result_4 + x10_2 - 0x20 u< result_4)
        goto label_d05b1c
    
    if (result_4 u>= x9 + x10_2 || x9 u>= result_4 + x10_2)
        int64_t i_8 = (((x10_2 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
        x12_1 = i_8 << 5
        int64_t i_6 = i_8
        void* x16_2 = x9
        void* result_5 = result_4
        int64_t i
        
        do
            v0.q = *result_5
            v1.q = *(result_5 + 8)
            v2.q = *(result_5 + 0x10)
            v3.q = *(result_5 + 0x18)
            v0:8.q = *(result_5 + 0x20)
            v1:8.q = *(result_5 + 0x28)
            v2:8.q = *(result_5 + 0x30)
            v3:8.q = *(result_5 + 0x38)
            v4.q = *x16_2
            v5.q = *(x16_2 + 8)
            v6.q = *(x16_2 + 0x10)
            v7.q = *(x16_2 + 0x18)
            v4:8.q = *(x16_2 + 0x20)
            v5:8.q = *(x16_2 + 0x28)
            v6:8.q = *(x16_2 + 0x30)
            v7:8.q = *(x16_2 + 0x38)
            x16_2 += 0x40
            i = i_6
            i_6 -= 2
            int128_t v16_1 = v4 ^ v0
            int128_t v17_1 = v5 ^ v1
            int128_t v18_1 = v6 ^ v2
            int128_t v19_1 = v7 ^ v3
            *result_5 = v16_1.q
            *(result_5 + 8) = v17_1.q
            *(result_5 + 0x10) = v18_1.q
            *(result_5 + 0x18) = v19_1.q
            *(result_5 + 0x20) = v16_1:8.q
            *(result_5 + 0x28) = v17_1:8.q
            *(result_5 + 0x30) = v18_1:8.q
            *(result_5 + 0x38) = v19_1:8.q
            result_5 += 0x40
        while (i != 2)
        
        if (((x10_2 - 0x20) u>> 5) + 1 != i_8)
            goto label_d05b1c
    else
        x12_1 = 0
    label_d05b1c:
        void* i_5 = x12_1 - x10_2
        void* x12_5 = x9 + x12_1 + 0x10
        void* x14_4 = result_4 + x12_1 + 0x10
        void* i_1
        
        do
            v2 = *(x12_5 - 0x10)
            v3 = *x12_5
            i_1 = i_5
            i_5 += 0x20
            x12_5 += 0x20
            v1 = v3 ^ *x14_4
            *(x14_4 - 0x10) ^= v2
            *x14_4 = v1
            x14_4 += 0x20
        while (i_1 != -0x20)

if (x11_2 != x10_2)
    if ((x11_2 & 0x18) == 0)
    label_d05ba8:
        void* i_4 = x11_2 - x10_2
        void* x8 = result_4 + x10_2
        void* x9_1 = x9 + x10_2
        void* i_2
        
        do
            char x10_3 = *x9_1
            x9_1 += 1
            i_2 = i_4
            i_4 -= 1
            *x8 ^= x10_3
            x8 += 1
        while (i_2 != 1)
    else
        int64_t* x12_6 = result_4 + x10_2
        void* x13_4 = x9 + x10_2
        
        if (x12_6 u< x9 + x11_2 && x13_4 u< result_4 + x11_2)
            goto label_d05ba8
        
        void* x14_6 = x11_2 & 7
        void* i_7 = (x11_2 & 0x1f) - x14_6
        x10_2 += i_7
        void* i_3
        
        do
            v0.q = *x13_4
            x13_4 += 8
            v1.q = *x12_6
            i_3 = i_7
            i_7 -= 8
            *x12_6 = (v1 ^ v0).q
            x12_6 = &x12_6[1]
        while (i_3 != 8)
        
        if (x14_6 != 0)
            goto label_d05ba8

sub_d05d60(&var_58, &result_1, 1, *(arg1 + 8), *(arg1 + 0x10))
sub_d05d60(&result_1, &var_58, 2, *(arg1 + 8), *(arg1 + 0x10))
void* result_3 = result_1
size_t x21 = var_38 - result_3

if (var_38 == result_3)
    goto label_d05c14

int64_t entry_x1

if (entry_x1 == 0 || result_3 == 0)
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
else
    memmove(entry_x1, result_3, x21)
label_d05c14:
    void* x1_2 = var_58
    
    if (var_50 == x1_2)
        goto label_d05c30
    
    if (entry_x1 != 0 && x1_2 != 0)
        memmove(entry_x1 + x21, x1_2, var_50 - x1_2)
    label_d05c30:
        int64_t* x0_7 = *(arg1 + 8)
        char var_24 = 0
        (*(*x0_7 + 0x18))(x0_7, &var_24, 1)
        int64_t* x0_8 = *(arg1 + 0x10)
        var_24 = 0
        (*(*x0_8 + 0x18))(x0_8, &var_24, 1)
        void* x0_9 = var_58
        
        if (x0_9 != 0)
            void* var_50_1 = x0_9
            int64_t var_48
            Botan::deallocate_memory(x0_9, var_48 - x0_9, 1)
        
        void* result = result_1
        
        if (result == 0)
            return result
        
        void* result_2 = result
        int64_t var_30
        return Botan::deallocate_memory(result, var_30 - result, 1)

sub_c776cc(Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401))
noreturn

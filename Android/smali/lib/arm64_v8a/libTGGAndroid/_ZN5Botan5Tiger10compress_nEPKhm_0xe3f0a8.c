// 函数: _ZN5Botan5Tiger10compress_nEPKhm
// 地址: 0xe3f0a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *(arg1 + 0x50)
uint64_t var_48 = *x8
uint64_t x9_1 = x8[1]
uint64_t var_60 = x8[2]
uint64_t var_58 = x9_1
int64_t entry_x2

if (entry_x2 == 0)
    return 

uint64_t x20_1 = arg2
int64_t x23_1 = 0
void* x22_1 = &arg1[0x38]

do
    int64_t x0 = *(arg1 + 0x38)
    int64_t x8_8 = *(arg1 + 0x40)
    
    if (x8_8 != x0)
        memcpy(x0, x20_1, x8_8 - x0)
    
    Botan::Tiger::pass(&var_48, &var_58, &var_60, x22_1, 5)
    int64_t* x8_9 = *(arg1 + 0x38)
    *x8_9 = (x8_9[7] ^ 0x5a5a5a5a5a5a5a5a) + *x8_9 + 1
    int64_t* x8_10 = *(arg1 + 0x38)
    x8_10[1] ^= *x8_10
    void* x8_11 = *(arg1 + 0x38)
    *(x8_11 + 0x10) += *(x8_11 + 8)
    void* x8_12 = *(arg1 + 0x38)
    *(x8_12 + 0x18) -= *(x8_12 + 0x10) ^ not.q(*(x8_12 + 8)) << 0x13
    void* x8_13 = *(arg1 + 0x38)
    *(x8_13 + 0x20) ^= *(x8_13 + 0x18)
    void* x8_14 = *(arg1 + 0x38)
    *(x8_14 + 0x28) += *(x8_14 + 0x20)
    void* x8_15 = *(arg1 + 0x38)
    *(x8_15 + 0x30) -= *(x8_15 + 0x28) ^ not.q(*(x8_15 + 0x20)) u>> 0x17
    void* x8_16 = *(arg1 + 0x38)
    *(x8_16 + 0x38) ^= *(x8_16 + 0x30)
    int64_t* x8_17 = *(arg1 + 0x38)
    *x8_17 += x8_17[7]
    int64_t* x8_18 = *(arg1 + 0x38)
    x8_18[1] -= *x8_18 ^ not.q(x8_18[7]) << 0x13
    void* x8_19 = *(arg1 + 0x38)
    *(x8_19 + 0x10) ^= *(x8_19 + 8)
    void* x8_20 = *(arg1 + 0x38)
    *(x8_20 + 0x18) += *(x8_20 + 0x10)
    void* x8_21 = *(arg1 + 0x38)
    *(x8_21 + 0x20) -= *(x8_21 + 0x18) ^ not.q(*(x8_21 + 0x10)) u>> 0x17
    void* x8_22 = *(arg1 + 0x38)
    *(x8_22 + 0x28) ^= *(x8_22 + 0x20)
    void* x8_23 = *(arg1 + 0x38)
    *(x8_23 + 0x30) += *(x8_23 + 0x28)
    void* x8_24 = *(arg1 + 0x38)
    *(x8_24 + 0x38) = (*(x8_24 + 0x30) ^ 0xfedcba9876543210) + *(x8_24 + 0x38) + 1
    Botan::Tiger::pass(&var_60, &var_48, &var_58, x22_1, 7)
    int64_t* x8_25 = *(arg1 + 0x38)
    *x8_25 = (x8_25[7] ^ 0x5a5a5a5a5a5a5a5a) + *x8_25 + 1
    int64_t* x8_26 = *(arg1 + 0x38)
    x8_26[1] ^= *x8_26
    void* x8_27 = *(arg1 + 0x38)
    *(x8_27 + 0x10) += *(x8_27 + 8)
    void* x8_28 = *(arg1 + 0x38)
    *(x8_28 + 0x18) -= *(x8_28 + 0x10) ^ not.q(*(x8_28 + 8)) << 0x13
    void* x8_29 = *(arg1 + 0x38)
    *(x8_29 + 0x20) ^= *(x8_29 + 0x18)
    void* x8_30 = *(arg1 + 0x38)
    *(x8_30 + 0x28) += *(x8_30 + 0x20)
    void* x8_31 = *(arg1 + 0x38)
    *(x8_31 + 0x30) -= *(x8_31 + 0x28) ^ not.q(*(x8_31 + 0x20)) u>> 0x17
    void* x8_32 = *(arg1 + 0x38)
    *(x8_32 + 0x38) ^= *(x8_32 + 0x30)
    int64_t* x8_33 = *(arg1 + 0x38)
    *x8_33 += x8_33[7]
    int64_t* x8_34 = *(arg1 + 0x38)
    x8_34[1] -= *x8_34 ^ not.q(x8_34[7]) << 0x13
    void* x8_35 = *(arg1 + 0x38)
    *(x8_35 + 0x10) ^= *(x8_35 + 8)
    void* x8_36 = *(arg1 + 0x38)
    *(x8_36 + 0x18) += *(x8_36 + 0x10)
    void* x8_37 = *(arg1 + 0x38)
    *(x8_37 + 0x20) -= *(x8_37 + 0x18) ^ not.q(*(x8_37 + 0x10)) u>> 0x17
    void* x8_38 = *(arg1 + 0x38)
    *(x8_38 + 0x28) ^= *(x8_38 + 0x20)
    void* x8_39 = *(arg1 + 0x38)
    *(x8_39 + 0x30) += *(x8_39 + 0x28)
    void* x8_40 = *(arg1 + 0x38)
    *(x8_40 + 0x38) = (*(x8_40 + 0x30) ^ 0xfedcba9876543210) + *(x8_40 + 0x38) + 1
    Botan::Tiger::pass(&var_58, &var_60, &var_48, x22_1, 9)
    uint64_t x8_2
    
    if (*(arg1 + 0x70) == 3)
        x8_2 = var_48
    else
        int64_t i = 3
        
        do
            int64_t* x8_42 = *(arg1 + 0x38)
            *x8_42 = (x8_42[7] ^ 0x5a5a5a5a5a5a5a5a) + *x8_42 + 1
            int64_t* x8_43 = *(arg1 + 0x38)
            x8_43[1] ^= *x8_43
            void* x8_44 = *(arg1 + 0x38)
            *(x8_44 + 0x10) += *(x8_44 + 8)
            void* x8_45 = *(arg1 + 0x38)
            *(x8_45 + 0x18) -= *(x8_45 + 0x10) ^ not.q(*(x8_45 + 8)) << 0x13
            void* x8_46 = *(arg1 + 0x38)
            *(x8_46 + 0x20) ^= *(x8_46 + 0x18)
            void* x8_47 = *(arg1 + 0x38)
            *(x8_47 + 0x28) += *(x8_47 + 0x20)
            void* x8_48 = *(arg1 + 0x38)
            *(x8_48 + 0x30) -= *(x8_48 + 0x28) ^ not.q(*(x8_48 + 0x20)) u>> 0x17
            void* x8_49 = *(arg1 + 0x38)
            *(x8_49 + 0x38) ^= *(x8_49 + 0x30)
            int64_t* x8_50 = *(arg1 + 0x38)
            *x8_50 += x8_50[7]
            int64_t* x8_51 = *(arg1 + 0x38)
            x8_51[1] -= *x8_51 ^ not.q(x8_51[7]) << 0x13
            void* x8_52 = *(arg1 + 0x38)
            *(x8_52 + 0x10) ^= *(x8_52 + 8)
            void* x8_53 = *(arg1 + 0x38)
            *(x8_53 + 0x18) += *(x8_53 + 0x10)
            void* x8_54 = *(arg1 + 0x38)
            *(x8_54 + 0x20) -= *(x8_54 + 0x18) ^ not.q(*(x8_54 + 0x10)) u>> 0x17
            void* x8_55 = *(arg1 + 0x38)
            *(x8_55 + 0x28) ^= *(x8_55 + 0x20)
            void* x8_56 = *(arg1 + 0x38)
            *(x8_56 + 0x30) += *(x8_56 + 0x28)
            void* x8_57 = *(arg1 + 0x38)
            *(x8_57 + 0x38) = (*(x8_57 + 0x30) ^ 0xfedcba9876543210) + *(x8_57 + 0x38) + 1
            Botan::Tiger::pass(&var_48, &var_58, &var_60, x22_1, 9)
            x8_2 = var_60
            uint64_t x9_140 = var_58
            uint64_t x10_52 = var_48
            i += 1
            var_48 = x8_2
            var_60 = x9_140
            var_58 = x10_52
        while (i != *(arg1 + 0x70))
    
    int64_t* x9_2 = *(arg1 + 0x50)
    x23_1 += 1
    uint64_t x8_3 = *x9_2 ^ x8_2
    *x9_2 = x8_3
    var_48 = x8_3
    void* x8_4 = *(arg1 + 0x50)
    uint64_t x9_4 = var_58 - *(x8_4 + 8)
    *(x8_4 + 8) = x9_4
    var_58 = x9_4
    void* x8_5 = *(arg1 + 0x50)
    uint64_t x9_6 = *(x8_5 + 0x10) + var_60
    *(x8_5 + 0x10) = x9_6
    var_60 = x9_6
    x20_1 += *(arg1 + 0x20) - *(arg1 + 0x18)
while (x23_1 != entry_x2)

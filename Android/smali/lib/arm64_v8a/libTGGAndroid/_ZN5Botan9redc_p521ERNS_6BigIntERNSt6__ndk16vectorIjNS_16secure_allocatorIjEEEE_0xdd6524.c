// 函数: _ZN5Botan9redc_p521ERNS_6BigIntERNSt6__ndk16vectorIjNS_16secure_allocatorIjEEEE
// 地址: 0xdd6524
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21 = *arg2
size_t x2 = *(arg2 + 8) - x21

if (x2 s>> 2 u<= 0x11)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg2)
    x21 = *arg2
    x2 = *(arg2 + 8) - x21

if (x2 != 0)
    memset(x21, 0, x2)
    x21 = *arg2

void* x8_4 = *arg1
int64_t x9_2 = (*(arg1 + 8) - x8_4) s>> 2
int64_t x10

x10 = x9_2 u< 0x22 ? x9_2 : 0x22

int64_t i_1

if (x10 u< 0x10)
    i_1 = 0
else
    i_1 = x10 - 0x10

if (x10 u< 0x11)
label_dd65ec:
    int64_t x9_9
    
    if (x9_2 u>= 0x11)
        if (x9_2 != 0x11)
            int64_t x2_2 = (x9_2 - 0x11) << 2
            
            if (x2_2 != 0)
                memset(x8_4 + 0x44, 0, x2_2)
                x8_4 = *arg1
        
        *(x8_4 + 0x40) &= 0x1ff
        x8_4 = *arg1
        x9_9 = *(arg1 + 8)
        *(arg1 + 0x18) = -1
    
    if (x9_2 u< 0x11 || (x9_9 - x8_4) s>> 2 u<= 0x10)
        *(arg1 + 0x10)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg1)
    
    *(arg1 + 0x18) = -1
    int32_t* x9_11 = *arg2
    int32_t* x8_8 = *arg1
    int32_t x10_4 = *x9_11
    int32_t x11_2 = *x8_8
    int32_t x12_1 = x8_8[1]
    *x8_8 = x10_4 + x11_2
    int32_t x10_6 = x9_11[1]
    int32_t x11_3 = x10_4 + x11_2 u< x10_4 ? 1 : 0
    int32_t x10_7 = x10_6 + x12_1
    x8_8[1] = x10_7 + x11_3
    int32_t x10_9 = x9_11[2]
    int32_t x12_3 = (x10_6 + x12_1 u< x10_6 ? 1 : 0) | (x10_7 + x11_3 u< x10_7 ? 1 : 0)
    int32_t x11_4 = x8_8[2]
    int32_t x13_2 = x8_8[3]
    int32_t x10_10 = x10_9 + x11_4
    x8_8[2] = x10_10 + x12_3
    int32_t x10_12 = x9_11[3]
    int32_t x11_6 = (x10_9 + x11_4 u< x10_9 ? 1 : 0) | (x10_10 + x12_3 u< x10_10 ? 1 : 0)
    int32_t x10_13 = x10_12 + x13_2
    x8_8[3] = x10_13 + x11_6
    int32_t x10_15 = x9_11[4]
    int32_t x12_6 = (x10_12 + x13_2 u< x10_12 ? 1 : 0) | (x10_13 + x11_6 u< x10_13 ? 1 : 0)
    int32_t x11_7 = x8_8[4]
    int32_t x13_4 = x8_8[5]
    int32_t x10_16 = x10_15 + x11_7
    x8_8[4] = x10_16 + x12_6
    int32_t x10_18 = x9_11[5]
    int32_t x11_9 = (x10_15 + x11_7 u< x10_15 ? 1 : 0) | (x10_16 + x12_6 u< x10_16 ? 1 : 0)
    int32_t x10_19 = x10_18 + x13_4
    x8_8[5] = x10_19 + x11_9
    int32_t x10_21 = x9_11[6]
    int32_t x12_9 = (x10_18 + x13_4 u< x10_18 ? 1 : 0) | (x10_19 + x11_9 u< x10_19 ? 1 : 0)
    int32_t x11_10 = x8_8[6]
    int32_t x13_6 = x8_8[7]
    int32_t x10_22 = x10_21 + x11_10
    x8_8[6] = x10_22 + x12_9
    int32_t x10_24 = x9_11[7]
    int32_t x11_12 = (x10_21 + x11_10 u< x10_21 ? 1 : 0) | (x10_22 + x12_9 u< x10_22 ? 1 : 0)
    int32_t x10_25 = x10_24 + x13_6
    x8_8[7] = x10_25 + x11_12
    int32_t x10_27 = x9_11[8]
    int32_t x12_12 = (x10_24 + x13_6 u< x10_24 ? 1 : 0) | (x10_25 + x11_12 u< x10_25 ? 1 : 0)
    int32_t x11_13 = x8_8[8]
    int32_t x13_8 = x8_8[9]
    int32_t x10_28 = x10_27 + x11_13
    x8_8[8] = x10_28 + x12_12
    int32_t x10_30 = x9_11[9]
    int32_t x11_15 = (x10_27 + x11_13 u< x10_27 ? 1 : 0) | (x10_28 + x12_12 u< x10_28 ? 1 : 0)
    int32_t x10_31 = x10_30 + x13_8
    x8_8[9] = x10_31 + x11_15
    int32_t x10_33 = x9_11[0xa]
    int32_t x12_15 = (x10_30 + x13_8 u< x10_30 ? 1 : 0) | (x10_31 + x11_15 u< x10_31 ? 1 : 0)
    int32_t x11_16 = x8_8[0xa]
    int32_t x13_10 = x8_8[0xb]
    int32_t x10_34 = x10_33 + x11_16
    x8_8[0xa] = x10_34 + x12_15
    int32_t x10_36 = x9_11[0xb]
    int32_t x11_18 = (x10_33 + x11_16 u< x10_33 ? 1 : 0) | (x10_34 + x12_15 u< x10_34 ? 1 : 0)
    int32_t x10_37 = x10_36 + x13_10
    x8_8[0xb] = x10_37 + x11_18
    int32_t x10_39 = x9_11[0xc]
    int32_t x12_18 = (x10_36 + x13_10 u< x10_36 ? 1 : 0) | (x10_37 + x11_18 u< x10_37 ? 1 : 0)
    int32_t x11_19 = x8_8[0xc]
    int32_t x13_12 = x8_8[0xd]
    int32_t x10_40 = x10_39 + x11_19
    x8_8[0xc] = x10_40 + x12_18
    int32_t x10_42 = x9_11[0xd]
    int32_t x11_21 = (x10_39 + x11_19 u< x10_39 ? 1 : 0) | (x10_40 + x12_18 u< x10_40 ? 1 : 0)
    int32_t x10_43 = x10_42 + x13_12
    x8_8[0xd] = x10_43 + x11_21
    int32_t x10_45 = x9_11[0xe]
    int32_t x12_21 = (x10_42 + x13_12 u< x10_42 ? 1 : 0) | (x10_43 + x11_21 u< x10_43 ? 1 : 0)
    int32_t x11_22 = x8_8[0xe]
    int32_t x13_14 = x8_8[0xf]
    int32_t x10_46 = x10_45 + x11_22
    x8_8[0xe] = x10_46 + x12_21
    int32_t x10_48 = x9_11[0xf]
    int32_t x11_24 = (x10_45 + x11_22 u< x10_45 ? 1 : 0) | (x10_46 + x12_21 u< x10_46 ? 1 : 0)
    int32_t x10_49 = x10_48 + x13_14
    x8_8[0xf] = x10_49 + x11_24
    int32_t x11_25 = x8_8[0x10]
    int32_t x9_12 = x9_11[0x10]
    int32_t x10_52 = (x10_48 + x13_14 u< x10_48 ? 1 : 0) | (x10_49 + x11_24 u< x10_49 ? 1 : 0)
    int32_t x9_13 = x9_12 + x11_25
    x8_8[0x10] = x9_13 + x10_52
    
    if (x9_12 + x11_25 u>= x9_12 && x9_13 + x10_52 u>= x9_13)
        int32_t* x1_3 = *arg1
        uint64_t x2_3 = *(arg1 + 8) - x1_3
        int64_t x3 = x2_3 s>> 2
        int32_t x8_10
        
        if (x3 u>= 0x11)
            x8_10 = x1_3[0x10]
            
            if (x2_3 == 0)
                goto label_dd68c0
            
            goto label_dd6880
        
        x8_10 = 0
        int32_t x0_5
        int32_t x4
        int32_t x5
        int32_t x6
        int32_t x7
        int32_t x9_15
        int32_t x10_54
        int32_t x11_27
        int32_t x12_24
        int32_t x13_15
        int32_t x14
        int32_t x15
        int32_t x16
        int32_t x17
        int32_t x20_1
        
        if (x2_3 != 0)
        label_dd6880:
            x9_15 = *x1_3
            
            if (x3 u< 2)
                x2_3 = 0
                x0_5 = 0
                x17 = 0
                x15 = 0
                x14 = 0
                x12_24 = 0
                x10_54 = 0
                goto label_dd68fc
            
            x11_27 = x1_3[1]
            
            if (x2_3 == 8)
                x2_3 = 0
                x0_5 = 0
                x17 = 0
                x15 = 0
                x14 = 0
                x12_24 = 0
                x10_54 = 0
                goto label_dd6900
            
            x10_54 = x1_3[2]
            
            if (x3 u< 4)
                x2_3 = 0
                x0_5 = 0
                x17 = 0
                x15 = 0
                x14 = 0
                x12_24 = 0
                goto label_dd6900
            
            x13_15 = x1_3[3]
            
            if (x2_3 == 0x10)
                x2_3 = 0
                x0_5 = 0
                x17 = 0
                x15 = 0
                x14 = 0
                x12_24 = 0
                goto label_dd6904
            
            x12_24 = x1_3[4]
            
            if (x3 u< 6)
                x2_3 = 0
                x0_5 = 0
                x17 = 0
                x15 = 0
                x14 = 0
                goto label_dd6904
            
            x16 = x1_3[5]
            
            if (x2_3 == 0x18)
                x2_3 = 0
                x0_5 = 0
                x17 = 0
                x15 = 0
                x14 = 0
                goto label_dd6908
            
            x14 = x1_3[6]
            
            if (x3 u< 8)
                x2_3 = 0
                x0_5 = 0
                x17 = 0
                x15 = 0
                goto label_dd6908
            
            x4 = x1_3[7]
            
            if (x2_3 == 0x20)
                x2_3 = 0
                x0_5 = 0
                x17 = 0
                x15 = 0
                goto label_dd690c
            
            x15 = x1_3[8]
            
            if (x3 u< 0xa)
                x2_3 = 0
                x0_5 = 0
                x17 = 0
                goto label_dd690c
            
            x5 = x1_3[9]
            
            if (x2_3 == 0x28)
                x2_3 = 0
                x0_5 = 0
                x17 = 0
                goto label_dd6910
            
            x17 = x1_3[0xa]
            
            if (x3 u< 0xc)
                x2_3 = 0
                x0_5 = 0
                goto label_dd6910
            
            x6 = x1_3[0xb]
            
            if (x2_3 != 0x30)
                x0_5 = x1_3[0xc]
                
                if (x3 u< 0xe)
                    x2_3 = 0
                    x7 = 0
                    x20_1 = 0
                else
                    x7 = x1_3[0xd]
                    
                    if (x2_3 != 0x38)
                        x2_3 = zx.q(x1_3[0xe])
                        
                        if (x3 u< 0x10)
                            x20_1 = 0
                        else
                            x20_1 = x1_3[0xf]
                    else
                        x2_3 = 0
                        x20_1 = 0
            else
                x2_3 = 0
                x0_5 = 0
                x7 = 0
                x20_1 = 0
        else
        label_dd68c0:
            x0_5 = 0
            x17 = 0
            x15 = 0
            x14 = 0
            x12_24 = 0
            x10_54 = 0
            x9_15 = 0
        label_dd68fc:
            x11_27 = 0
        label_dd6900:
            x13_15 = 0
        label_dd6904:
            x16 = 0
        label_dd6908:
            x4 = 0
        label_dd690c:
            x5 = 0
        label_dd6910:
            x6 = 0
            x7 = 0
            x20_1 = 0
        
        int32_t x9_30 = x20_1 & x2_3.d & x7 & x0_5 & x6 & x17 & x5 & x15 & x4 & x14 & x16 & x12_24
            & x13_15 & x10_54 & x11_27 & x9_15
        *(arg1 + 0x18) = -1
        return Botan::bigint_cnd_sub(
            (((x8_10 ^ 0x1ff) - 1) & not.d(x8_10) & x9_30 & (0xfffffffe - x9_30)) s>> 0x1f
                | not.d(((x8_10 u>> 9) - 1) s>> 0x1f), 
            x1_3, 0x11, 0x836f04, 0x11) __tailcall
    
    Botan::assertion_failure("carry == 0", "Final carry in P-521 reduction", "redc_p521", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xe848)
else if (x21 != 0 && x8_4 != 0)
    memmove(x21, x8_4 + 0x40, i_1 << 2)
    int32_t x9_3 = 0
    int64_t i
    
    do
        int32_t x11_1 = (x21 - 4)[i_1]
        i = i_1
        i_1 -= 1
        (x21 - 4)[i_1] = x9_3 | x11_1 u>> 9
        x9_3 = x11_1 << 0x17
    while (i != 1)
    x8_4 = *arg1
    x9_2 = (*(arg1 + 8) - x8_4) s>> 2
    goto label_dd65ec

Botan::BigInt* x0_8
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >* x1_5
x0_8, x1_5 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
return Botan::redc_p192(x0_8, x1_5) __tailcall

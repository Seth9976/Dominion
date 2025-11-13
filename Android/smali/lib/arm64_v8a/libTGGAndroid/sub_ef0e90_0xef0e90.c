// 函数: sub_ef0e90
// 地址: 0xef0e90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *arg2

if (arg2[1] - x8 != 0x400)
    Botan::assertion_failure("B.size() == 128", &data_793a18, "gen_2i_addresses", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x27ab)
else if (arg1[1] - *arg1 == 0x400)
    memset(x8, 0, 0x400)
    int64_t x27_1 = 0
    **arg2 = arg3
    *(*arg2 + 8) = arg4
    *(*arg2 + 0x10) = arg5
    *(*arg2 + 0x18) = arg6
    *(*arg2 + 0x20) = arg7
    *(*arg2 + 0x28) = arg8
    *(*arg2 + 0x30) = arg9
    
    while (true)
        int64_t x1 = *arg2
        int64_t x8_8 = arg2[1]
        
        if (x8_8 != x1)
            int64_t x0_1 = *arg1
            
            if (x0_1 == 0 || x1 == 0)
                Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                    "If n > 0 then args are not null", "copy_mem", 
                    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
                break
            
            memmove(x0_1, x1, x8_8 - x1)
        
        for (int64_t i = 0x78; i != 0x478; )
            int64_t* x9_5 = *arg1 + i
            int64_t x10_2 = x9_5[-0xb]
            int64_t x13_1 = x9_5[-0xa]
            int64_t x17_1 = x9_5[-0xf]
            int64_t x16_1 = x9_5[-0xe]
            int64_t x15_1 = x9_5[-7]
            int64_t x14_1 = x9_5[-6]
            int64_t x3 = x9_5[-9]
            int64_t x4 = x9_5[-8]
            int64_t x1_1 = x9_5[-0xd]
            int64_t x2_1 = x9_5[-0xc]
            int64_t x17_3 = x17_1 + x10_2 + ((x17_1 & 0xffffffff) << 1) * (x10_2 & 0xffffffff)
            int64_t x24_3 = x16_1 + x13_1 + ((x16_1 & 0xffffffff) << 1) * (x13_1 & 0xffffffff)
            int64_t x28_2 = ror.q(x17_3 ^ x9_5[-3], 0x20)
            int64_t x6 = x9_5[-5]
            int64_t x7 = x9_5[-4]
            int64_t x11_4 = x28_2 + x15_1 + (x28_2 & 0xffffffff) * ((x15_1 & 0xffffffff) << 1)
            int64_t x23_3 = ror.q(x24_3 ^ x9_5[-2], 0x20)
            int64_t x22_4 = x1_1 + x3 + ((x1_1 & 0xffffffff) << 1) * (x3 & 0xffffffff)
            int64_t x26_2 = x2_1 + x4 + ((x2_1 & 0xffffffff) << 1) * (x4 & 0xffffffff)
            int64_t x12_4 = x23_3 + x14_1 + (x23_3 & 0xffffffff) * ((x14_1 & 0xffffffff) << 1)
            int64_t x21_4 = ror.q(x22_4 ^ x9_5[-1], 0x20)
            int64_t x6_1 = ror.q(x26_2 ^ *x9_5, 0x20)
            int64_t x10_4 = ror.q(x11_4 ^ x10_2, 0x18)
            int64_t x16_6 = x6_1 + x7 + (x6_1 & 0xffffffff) * ((x7 & 0xffffffff) << 1)
            int64_t x13_3 = ror.q(x12_4 ^ x13_1, 0x18)
            int64_t x14_5 = x21_4 + x6 + (x21_4 & 0xffffffff) * ((x6 & 0xffffffff) << 1)
            int64_t x15_4 = x10_4 + x17_3 + (x10_4 & 0xffffffff) * ((x17_3 & 0xffffffff) << 1)
            int64_t x7_2 = x13_3 + x24_3 + (x13_3 & 0xffffffff) * ((x24_3 & 0xffffffff) << 1)
            int64_t x17_7 = ror.q(x14_5 ^ x3, 0x18)
            int64_t x22_6 = x17_7 + x22_4 + (x17_7 & 0xffffffff) * ((x22_4 & 0xffffffff) << 1)
            int64_t x0_6 = ror.q(x16_6 ^ x4, 0x18)
            int64_t x4_2 = x0_6 + x26_2 + (x0_6 & 0xffffffff) * ((x26_2 & 0xffffffff) << 1)
            x9_5[-0xf] = x15_4
            x9_5[-0xe] = x7_2
            x9_5[-0xd] = x22_6
            x9_5[-0xc] = x4_2
            int64_t x22_7 = ror.q(x15_4 ^ x28_2, 0x10)
            int64_t x7_3 = ror.q(x7_2 ^ x23_3, 0x10)
            int64_t x6_2 = ror.q(x22_6 ^ x21_4, 0x10)
            int64_t x15_6 = ror.q(x4_2 ^ x6_1, 0x10)
            int64_t x4_4 = x9_5[-0xf]
            int64_t x21_6 = x9_5[-0xe]
            x9_5[-3] = x22_7
            x9_5[-2] = x7_3
            int64_t x11_6 = x22_7 + x11_4 + (x22_7 & 0xffffffff) * ((x11_4 & 0xffffffff) << 1)
            int64_t x12_6 = x7_3 + x12_4 + (x7_3 & 0xffffffff) * ((x12_4 & 0xffffffff) << 1)
            int64_t x23_4 = x9_5[-0xd]
            int64_t x24_6 = x9_5[-0xc]
            x9_5[-1] = x6_2
            int64_t x14_7 = x6_2 + x14_5 + (x6_2 & 0xffffffff) * ((x14_5 & 0xffffffff) << 1)
            x9_5[-7] = x11_6
            x9_5[-6] = x12_6
            int64_t x16_8 = x15_6 + x16_6 + (x15_6 & 0xffffffff) * ((x16_6 & 0xffffffff) << 1)
            int64_t x11_8 = ror.q(x12_6 ^ x13_3, 0x3f)
            int64_t x12_8 = ror.q(x14_7 ^ x17_7, 0x3f)
            int64_t x13_5 = ror.q(x16_8 ^ x0_6, 0x3f)
            int64_t x4_6 = x4_4 + x11_8 + ((x4_4 & 0xffffffff) << 1) * (x11_8 & 0xffffffff)
            int64_t x5_6 = x21_6 + x12_8 + ((x21_6 & 0xffffffff) << 1) * (x12_8 & 0xffffffff)
            int64_t x6_5 = x9_5[-7]
            int64_t x21_8 = x9_5[-6]
            int64_t x7_6 = x23_4 + x13_5 + ((x23_4 & 0xffffffff) << 1) * (x13_5 & 0xffffffff)
            int64_t x15_8 = ror.q(x4_6 ^ x15_6, 0x20)
            int64_t x1_10 = ror.q(x5_6 ^ x9_5[-3], 0x20)
            int64_t x14_9 = x15_8 + x14_7 + (x15_8 & 0xffffffff) * ((x14_7 & 0xffffffff) << 1)
            int64_t x2_7 = ror.q(x7_6 ^ x9_5[-2], 0x20)
            int64_t x10_6 = ror.q(x11_6 ^ x10_4, 0x3f)
            int64_t x16_10 = x1_10 + x16_8 + (x1_10 & 0xffffffff) * ((x16_8 & 0xffffffff) << 1)
            int64_t x0_9 = x2_7 + x6_5 + (x2_7 & 0xffffffff) * ((x6_5 & 0xffffffff) << 1)
            int64_t x22_10 = x24_6 + x10_6 + ((x24_6 & 0xffffffff) << 1) * (x10_6 & 0xffffffff)
            int64_t x24_9 = ror.q(x14_9 ^ x11_8, 0x18)
            int64_t x4_8 = x24_9 + x4_6 + (x24_9 & 0xffffffff) * ((x4_6 & 0xffffffff) << 1)
            int64_t x23_8 = ror.q(x16_10 ^ x12_8, 0x18)
            int64_t x17_10 = x23_8 + x5_6 + (x23_8 & 0xffffffff) * ((x5_6 & 0xffffffff) << 1)
            int64_t x5_9 = ror.q(x0_9 ^ x13_5, 0x18)
            int64_t x3_5 = ror.q(x22_10 ^ x9_5[-1], 0x20)
            int64_t x6_8 = x5_9 + x7_6 + (x5_9 & 0xffffffff) * ((x7_6 & 0xffffffff) << 1)
            int64_t x15_10 = ror.q(x4_8 ^ x15_8, 0x10)
            int64_t x7_9 = x3_5 + x21_8 + (x3_5 & 0xffffffff) * ((x21_8 & 0xffffffff) << 1)
            int64_t x1_12 = ror.q(x17_10 ^ x1_10, 0x10)
            x9_5[-0xb] = x10_6
            int64_t x14_11 = x15_10 + x14_9 + (x15_10 & 0xffffffff) * ((x14_9 & 0xffffffff) << 1)
            int64_t x2_9 = ror.q(x6_8 ^ x2_7, 0x10)
            int64_t x16_12 = x1_12 + x16_10 + (x1_12 & 0xffffffff) * ((x16_10 & 0xffffffff) << 1)
            int64_t x10_8 = ror.q(x7_9 ^ x10_6, 0x18)
            int64_t x0_11 = x2_9 + x0_9 + (x2_9 & 0xffffffff) * ((x0_9 & 0xffffffff) << 1)
            int64_t x21_14 = x10_8 + x22_10 + (x10_8 & 0xffffffff) * ((x22_10 & 0xffffffff) << 1)
            x9_5[-0xa] = x11_8
            x9_5[-9] = x12_8
            x9_5[-5] = x14_11
            x9_5[-4] = x16_12
            *x9_5 = x15_10
            x9_5[-8] = x13_5
            x9_5[-9] = ror.q(x16_12 ^ x23_8, 0x3f)
            x9_5[-8] = ror.q(x0_11 ^ x5_9, 0x3f)
            int64_t x12_11 = ror.q(x21_14 ^ x3_5, 0x10)
            x9_5[-1] = x12_11
            int64_t x12_13 = x12_11 + x7_9 + (x12_11 & 0xffffffff) * ((x7_9 & 0xffffffff) << 1)
            i += 0x80
            x9_5[-0xf] = x4_8
            x9_5[-0xe] = x17_10
            x9_5[-3] = x1_12
            x9_5[-2] = x2_9
            x9_5[-0xd] = x6_8
            x9_5[-0xc] = x21_14
            x9_5[-7] = x0_11
            x9_5[-6] = x12_13
            x9_5[-0xb] = ror.q(x12_13 ^ x10_8, 0x3f)
            x9_5[-0xa] = ror.q(x14_11 ^ x24_9, 0x3f)
        
        uint64_t result
        
        for (int64_t i_1 = 0x188; i_1 != 0x208; )
            int64_t* x9_7 = *arg1 + i_1
            int64_t x13_7 = x9_7[-0x11]
            int64_t x15_12 = *(x9_7 - 0x188)
            int64_t x14_15 = x9_7[0xf]
            int64_t x15_14 = x15_12 + x13_7 + ((x15_12 & 0xffffffff) << 1) * (x13_7 & 0xffffffff)
            int64_t x16_15 = ror.q(x15_14 ^ x9_7[0x2f], 0x20)
            int64_t x14_17 = x16_15 + x14_15 + (x16_15 & 0xffffffff) * ((x14_15 & 0xffffffff) << 1)
            int64_t x13_9 = ror.q(x14_17 ^ x13_7, 0x18)
            int64_t x15_16 = x13_9 + x15_14 + (x13_9 & 0xffffffff) * ((x15_14 & 0xffffffff) << 1)
            *(x9_7 - 0x188) = x15_16
            int64_t x15_18 = ror.q(x15_16 ^ x16_15, 0x10)
            int64_t x14_19 = x15_18 + x14_17 + (x15_18 & 0xffffffff) * ((x14_17 & 0xffffffff) << 1)
            x9_7[0x2f] = x15_18
            x9_7[0xf] = x14_19
            x9_7[-0x11] = ror.q(x14_19 ^ x13_9, 0x3f)
            int64_t x16_16 = x9_7[-0x10]
            int64_t x13_12 = *(x9_7 - 0x180)
            int64_t x17_13 = x9_7[0x10]
            int64_t x13_14 = x13_12 + x16_16 + ((x13_12 & 0xffffffff) << 1) * (x16_16 & 0xffffffff)
            int64_t x14_22 = ror.q(x13_14 ^ x9_7[0x30], 0x20)
            int64_t x17_15 = x14_22 + x17_13 + (x14_22 & 0xffffffff) * ((x17_13 & 0xffffffff) << 1)
            int64_t x16_18 = ror.q(x17_15 ^ x16_16, 0x18)
            int64_t x13_16 = x16_18 + x13_14 + (x16_18 & 0xffffffff) * ((x13_14 & 0xffffffff) << 1)
            *(x9_7 - 0x180) = x13_16
            int64_t x13_18 = ror.q(x13_16 ^ x14_22, 0x10)
            x9_7[0x30] = x13_18
            int64_t x13_20 = x13_18 + x17_15 + (x13_18 & 0xffffffff) * ((x17_15 & 0xffffffff) << 1)
            x9_7[0x10] = x13_20
            int64_t x13_22 = ror.q(x13_20 ^ x16_18, 0x3f)
            x9_7[-0x10] = x13_22
            int64_t x14_23 = x9_7[-1]
            int64_t x16_19 = *(x9_7 - 0x108)
            int64_t x15_21 = x9_7[0x1f]
            int64_t x16_21 = x16_19 + x14_23 + ((x16_19 & 0xffffffff) << 1) * (x14_23 & 0xffffffff)
            int64_t x17_18 = ror.q(x16_21 ^ x9_7[0x3f], 0x20)
            int64_t x15_23 = x17_18 + x15_21 + (x17_18 & 0xffffffff) * ((x15_21 & 0xffffffff) << 1)
            int64_t x14_25 = ror.q(x15_23 ^ x14_23, 0x18)
            int64_t x16_23 = x14_25 + x16_21 + (x14_25 & 0xffffffff) * ((x16_21 & 0xffffffff) << 1)
            *(x9_7 - 0x108) = x16_23
            int64_t x17_19 = *x9_7
            int64_t x0_18 = x9_7[-0x20]
            int64_t x16_25 = ror.q(x16_23 ^ x17_18, 0x10)
            int64_t x2_13 = x9_7[0x40]
            x9_7[0x3f] = x16_25
            int64_t x3_6 = x9_7[0x20]
            int64_t x16_27 = x16_25 + x15_23 + (x16_25 & 0xffffffff) * ((x15_23 & 0xffffffff) << 1)
            int64_t x15_26 = x0_18 + x17_19 + ((x0_18 & 0xffffffff) << 1) * (x17_19 & 0xffffffff)
            int64_t x1_25 = ror.q(x15_26 ^ x2_13, 0x20)
            int64_t x2_15 = x1_25 + x3_6 + (x1_25 & 0xffffffff) * ((x3_6 & 0xffffffff) << 1)
            int64_t x3_8 = ror.q(x2_15 ^ x17_19, 0x18)
            int64_t x15_28 = x3_8 + x15_26 + (x3_8 & 0xffffffff) * ((x15_26 & 0xffffffff) << 1)
            x9_7[-0x20] = x15_28
            int64_t x0_22 = ror.q(x15_28 ^ x1_25, 0x10)
            int64_t x17_23 = x0_22 + x2_15 + (x0_22 & 0xffffffff) * ((x2_15 & 0xffffffff) << 1)
            int64_t x14_27 = ror.q(x16_27 ^ x14_25, 0x3f)
            int64_t x15_32 = ror.q(x17_23 ^ x3_8, 0x3f)
            x9_7[-1] = x14_27
            *x9_7 = x15_32
            int64_t x1_27 = *(x9_7 - 0x188)
            i_1 += 0x10
            int64_t x1_29 = x1_27 + x13_22 + ((x1_27 & 0xffffffff) << 1) * (x13_22 & 0xffffffff)
            int64_t x0_24 = ror.q(x1_29 ^ x0_22, 0x20)
            int64_t x16_29 = x0_24 + x16_27 + (x0_24 & 0xffffffff) * ((x16_27 & 0xffffffff) << 1)
            int64_t x13_24 = ror.q(x16_29 ^ x13_22, 0x18)
            int64_t x1_31 = x13_24 + x1_29 + (x13_24 & 0xffffffff) * ((x1_29 & 0xffffffff) << 1)
            *(x9_7 - 0x188) = x1_31
            int64_t x12_16 = ror.q(x1_31 ^ x0_24, 0x10)
            x9_7[0x40] = x12_16
            int64_t x12_18 = x12_16 + x16_29 + (x12_16 & 0xffffffff) * ((x16_29 & 0xffffffff) << 1)
            x9_7[0x1f] = x12_18
            x9_7[-0x10] = ror.q(x12_18 ^ x13_24, 0x3f)
            int64_t x12_21 = *(x9_7 - 0x180)
            int64_t x12_23 = x12_21 + x14_27 + ((x12_21 & 0xffffffff) << 1) * (x14_27 & 0xffffffff)
            int64_t x13_27 = ror.q(x12_23 ^ x9_7[0x2f], 0x20)
            int64_t x16_31 = x13_27 + x17_23 + (x13_27 & 0xffffffff) * ((x17_23 & 0xffffffff) << 1)
            int64_t x14_29 = ror.q(x16_31 ^ x14_27, 0x18)
            int64_t x12_25 = x14_29 + x12_23 + (x14_29 & 0xffffffff) * ((x12_23 & 0xffffffff) << 1)
            *(x9_7 - 0x180) = x12_25
            int64_t x11_13 = ror.q(x12_25 ^ x13_27, 0x10)
            x9_7[0x2f] = x11_13
            int64_t x11_15 = x11_13 + x16_31 + (x11_13 & 0xffffffff) * ((x16_31 & 0xffffffff) << 1)
            x9_7[0x20] = x11_15
            x9_7[-1] = ror.q(x11_15 ^ x14_29, 0x3f)
            int64_t x11_18 = *(x9_7 - 0x108)
            int64_t x12_26 = x9_7[0xf]
            int64_t x11_20 = x11_18 + x15_32 + ((x11_18 & 0xffffffff) << 1) * (x15_32 & 0xffffffff)
            int64_t x13_31 = ror.q(x11_20 ^ x9_7[0x30], 0x20)
            int64_t x12_28 = x13_31 + x12_26 + (x13_31 & 0xffffffff) * ((x12_26 & 0xffffffff) << 1)
            int64_t x15_34 = ror.q(x12_28 ^ x15_32, 0x18)
            int64_t x11_22 = x15_34 + x11_20 + (x15_34 & 0xffffffff) * ((x11_20 & 0xffffffff) << 1)
            *(x9_7 - 0x108) = x11_22
            int64_t x10_13 = ror.q(x11_22 ^ x13_31, 0x10)
            int64_t x11_23 = x9_7[-0x11]
            int64_t x13_32 = x9_7[-0x20]
            x9_7[0x30] = x10_13
            int64_t x14_32 = x9_7[0x3f]
            int64_t x10_15 = x10_13 + x12_28 + (x10_13 & 0xffffffff) * ((x12_28 & 0xffffffff) << 1)
            int64_t x17_29 = x9_7[0x10]
            *x9_7 = ror.q(x10_15 ^ x15_34, 0x3f)
            int64_t x12_31 = x13_32 + x11_23 + ((x13_32 & 0xffffffff) << 1) * (x11_23 & 0xffffffff)
            int64_t x13_35 = ror.q(x12_31 ^ x14_32, 0x20)
            result = (x17_29 & 0xffffffff) << 1
            int64_t x15_37 = x13_35 + x17_29 + (x13_35 & 0xffffffff) * result
            int64_t x11_25 = ror.q(x15_37 ^ x11_23, 0x18)
            int64_t x12_33 = x11_25 + x12_31 + (x11_25 & 0xffffffff) * ((x12_31 & 0xffffffff) << 1)
            x9_7[-0x20] = x12_33
            int64_t x12_35 = ror.q(x12_33 ^ x13_35, 0x10)
            x9_7[0x3f] = x12_35
            int64_t x12_37 = x12_35 + x15_37 + (x12_35 & 0xffffffff) * ((x15_37 & 0xffffffff) << 1)
            x9_7[0xf] = x10_15
            x9_7[0x10] = x12_37
            x9_7[-0x11] = ror.q(x12_37 ^ x11_25, 0x3f)
        
        for (int64_t i_2 = 0; i_2 != 0x400; i_2 += 8)
            int64_t* x10_18 = *arg2
            *(x10_18 + i_2) ^= *(*arg1 + i_2)
        
        x27_1 += 1
        
        if (x27_1 == 2)
            return result
    
    Botan::assertion_failure("B.size() == 128", &data_793a18, "gen_2i_addresses", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x27ab)

int64_t* x0_29
int64_t* x1_35
int64_t x2_20
int64_t x3_12
int64_t x4_9
x0_29, x1_35, x2_20, x3_12, x4_9 = Botan::assertion_failure("T.size() == 128", &data_793a18, 
    "gen_2i_addresses", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x27ac)
return sub_ef17c0(x0_29, x1_35, x2_20, x3_12, x4_9) __tailcall

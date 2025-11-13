// 函数: sub_639c00
// 地址: 0x639c00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_28 = arg3
int32_t var_24 = arg2 & 0x1f
int32_t var_8 = *arg4
int32_t ebx_1 = 0xdeadbeef
int32_t var_c = arg4[1]
int32_t var_1c = *arg5
int32_t esi_1 = 0xdeadbeef
int32_t var_14 = arg5[1]
int32_t edx_5 = 0xdeadbeef
int32_t edi = 0xdeadbeef

if (arg2 u> 0xf)
    void* eax_2 = (arg2 & 0xffffffe0) + arg3
    
    while (arg3 u< eax_2)
        int32_t ebx_2 = ebx_1 + *arg3
        int32_t esi_2 = adc.d(esi_1, arg3[1], ebx_1 + *arg3 u< ebx_1)
        int32_t edx_6 = edx_5 + arg3[2]
        int32_t edi_1 = adc.d(edi, arg3[3], edx_5 + arg3[2] u< edx_5)
        int32_t eax_3 = ebx_2 u>> 0xe | esi_2 << 0x12
        int32_t eax_4 = eax_3 + edx_6
        int32_t edi_5 = adc.d(ebx_2 << 0x12 | esi_2 u>> 0xe, edi_1, eax_3 + edx_6 u< eax_3)
        int32_t var_8_1 = var_8 ^ eax_4
        int32_t var_c_1 = var_c ^ edi_5
        int32_t edx_7 = edx_6 u>> 0xc | edi_1 << 0x14
        int32_t edx_8 = edx_7 + var_8_1
        int32_t ecx_3 = adc.d(edx_6 << 0x14 | edi_1 u>> 0xc, var_c_1, edx_7 + var_8_1 u< edx_7)
        int32_t var_14_1 = var_14 ^ ecx_3
        int32_t var_1c_1 = var_1c ^ edx_8
        int32_t ebx_8 = var_c_1 u>> 2 | var_8_1 << 0x1e
        int32_t ebx_9 = ebx_8 + var_1c_1
        int32_t esi_7 =
            adc.d(var_c_1 << 0x1e | var_8_1 u>> 0xfffffffe, var_14_1, ebx_8 + var_1c_1 u< ebx_8)
        int32_t eax_5 = eax_4 ^ ebx_9
        int32_t var_10_3 = edi_5 ^ esi_7
        int32_t edi_8 = var_1c_1 u>> 0x17 | var_14_1 << 9
        int32_t edi_9 = edi_8 + eax_5
        int32_t ebx_13 = adc.d(var_1c_1 << 9 | var_14_1 u>> 0x17, var_10_3, edi_8 + eax_5 u< edi_8)
        int32_t edx_9 = edx_8 ^ edi_9
        int32_t ecx_4 = ecx_3 ^ ebx_13
        int32_t ebx_14 = eax_5 u>> 0xa | var_10_3 << 0x16
        uint32_t ecx_8 = var_10_3 u>> 0xa
        uint32_t var_10_4 = ecx_8
        int32_t ebx_15 = ebx_14 + edx_9
        int32_t eax_12 = adc.d(eax_5 << 0x16 | ecx_8, ecx_4, ebx_14 + edx_9 u< ebx_14)
        int32_t var_c_4 = ebx_9 ^ ebx_15
        int32_t esi_8 = esi_7 ^ eax_12
        int32_t eax_13 = edx_9 u>> 0x10 | ecx_4 << 0x10
        int32_t eax_14 = eax_13 + var_c_4
        int32_t var_8_7 = adc.d(edx_9 << 0x10 | ecx_4 u>> 0x10, esi_8, eax_13 + var_c_4 u< eax_13)
        int32_t edi_10 = edi_9 ^ eax_14
        int32_t ecx_12 = ebx_13 ^ var_8_7
        int32_t edx_12 = var_c_4 u>> 0x1a | esi_8 << 6
        int32_t edx_13 = edx_12 + edi_10
        int32_t esi_11 = adc.d(var_c_4 << 6 | esi_8 u>> 0x1a, ecx_12, edx_12 + edi_10 u< edx_12)
        int32_t var_14_4 = eax_12 ^ esi_11
        int32_t ebx_16 = ebx_15 ^ edx_13
        int32_t esi_12 = edi_10 u>> 0x1b | ecx_12 << 5
        int32_t edi_13 = esi_12 + ebx_16
        int32_t esi_15 = adc.d(edi_10 << 5 | ecx_12 u>> 0x1b, var_14_4, esi_12 + ebx_16 u< esi_12)
        int32_t var_8_8 = var_8_7 ^ esi_15
        int32_t eax_15 = eax_14 ^ edi_13
        int32_t var_14_5 = ebx_16 u>> 2 | var_14_4 << 0x1e
        int32_t ebx_19 = var_14_5 + eax_15
        int32_t esi_19 =
            adc.d(ebx_16 << 0x1e | var_14_4 u>> 2, var_8_8, var_14_5 + eax_15 u< var_14_5)
        int32_t edx_14 = edx_13 ^ ebx_19
        int32_t ebx_21 = esi_11 ^ esi_19
        int32_t var_18_2 = eax_15 u>> 0x1e | var_8_8 << 2
        int32_t ecx_19 = var_18_2 + edx_14
        int32_t eax_19 =
            adc.d(eax_15 << 2 | var_8_8 u>> 0x1e, ebx_21, var_18_2 + edx_14 u< var_18_2)
        int32_t edi_14 = edi_13 ^ ecx_19
        int32_t eax_21 = esi_15 ^ eax_19
        int32_t ecx_22 = ebx_21 u>> 0x1b | edx_14 << 5
        int32_t ecx_23 = ecx_22 + edi_14
        int32_t edx_17 =
            adc.d(ebx_21 << 5 | edx_14 u>> 0xffffffe5, eax_21, ecx_22 + edi_14 u< ecx_22)
        esi_1 = esi_19 ^ edx_17
        ebx_1 = ebx_19 ^ ecx_23
        int32_t edx_18 = edi_14 u>> 0x1c | eax_21 << 4
        int32_t edx_19 = edx_18 + ebx_1
        int32_t ecx_27 = adc.d(edi_14 << 4 | eax_21 u>> 0x1c, esi_1, edx_18 + ebx_1 u< edx_18)
        edx_5 = ecx_19 ^ edx_19
        edi = eax_19 ^ ecx_27
        var_8 = ecx_23 + var_28[4]
        var_c = adc.d(edx_17, var_28[5], ecx_23 + var_28[4] u< ecx_23)
        var_1c = edx_19 + var_28[6]
        arg3 = &var_28[8]
        var_14 = adc.d(ecx_27, var_28[7], edx_19 + var_28[6] u< edx_19)
        var_28 = arg3
    
    if (var_24 u>= 0x10)
        int32_t ebx_24 = ebx_1 + *arg3
        int32_t esi_20 = adc.d(esi_1, arg3[1], ebx_1 + *arg3 u< ebx_1)
        int32_t edx_21 = edx_5 + arg3[2]
        int32_t edi_17 = adc.d(edi, arg3[3], edx_5 + arg3[2] u< edx_5)
        int32_t eax_31 = ebx_24 u>> 0xe | esi_20 << 0x12
        int32_t eax_32 = eax_31 + edx_21
        int32_t edi_21 = adc.d(ebx_24 << 0x12 | esi_20 u>> 0xe, edi_17, eax_31 + edx_21 u< eax_31)
        int32_t var_8_10 = var_8 ^ eax_32
        int32_t eax_34 = var_c ^ edi_21
        int32_t edx_22 = edx_21 u>> 0xc | edi_17 << 0x14
        int32_t edx_23 = edx_22 + var_8_10
        int32_t ecx_32 = adc.d(edx_21 << 0x14 | edi_17 u>> 0xc, eax_34, edx_22 + var_8_10 u< edx_22)
        int32_t var_1c_6 = var_1c ^ edx_23
        int32_t var_14_8 = var_14 ^ ecx_32
        int32_t ebx_30 = eax_34 u>> 2 | var_8_10 << 0x1e
        int32_t ebx_31 = ebx_30 + var_1c_6
        int32_t esi_25 =
            adc.d(eax_34 << 0x1e | var_8_10 u>> 0xfffffffe, var_14_8, ebx_30 + var_1c_6 u< ebx_30)
        int32_t eax_38 = eax_32 ^ ebx_31
        int32_t edi_22 = edi_21 ^ esi_25
        int32_t edi_23 = var_1c_6 u>> 0x17 | var_14_8 << 9
        int32_t edi_24 = edi_23 + eax_38
        int32_t ebx_35 = adc.d(var_1c_6 << 9 | var_14_8 u>> 0x17, edi_22, edi_23 + eax_38 u< edi_23)
        int32_t edx_29 = edx_23 ^ edi_24
        int32_t ecx_33 = ecx_32 ^ ebx_35
        int32_t ebx_36 = eax_38 u>> 0xa | edi_22 << 0x16
        uint32_t ecx_37 = edi_22 u>> 0xa
        uint32_t var_8_12 = ecx_37
        int32_t ebx_37 = ebx_36 + edx_29
        int32_t eax_42 = adc.d(eax_38 << 0x16 | ecx_37, ecx_33, ebx_36 + edx_29 u< ebx_36)
        int32_t var_c_12 = ebx_31 ^ ebx_37
        int32_t esi_26 = esi_25 ^ eax_42
        int32_t eax_43 = edx_29 u>> 0x10 | ecx_33 << 0x10
        int32_t eax_44 = eax_43 + var_c_12
        int32_t var_8_16 =
            adc.d(edx_29 << 0x10 | ecx_33 u>> 0x10, esi_26, eax_43 + var_c_12 u< eax_43)
        int32_t edi_25 = edi_24 ^ eax_44
        int32_t ecx_41 = ebx_35 ^ var_8_16
        int32_t edx_32 = var_c_12 u>> 0x1a | esi_26 << 6
        int32_t edx_33 = edx_32 + edi_25
        int32_t esi_29 = adc.d(var_c_12 << 6 | esi_26 u>> 0x1a, ecx_41, edx_32 + edi_25 u< edx_32)
        int32_t var_14_11 = eax_42 ^ esi_29
        int32_t ebx_38 = ebx_37 ^ edx_33
        int32_t esi_30 = edi_25 u>> 0x1b | ecx_41 << 5
        int32_t edi_28 = esi_30 + ebx_38
        int32_t esi_33 = adc.d(edi_25 << 5 | ecx_41 u>> 0x1b, var_14_11, esi_30 + ebx_38 u< esi_30)
        int32_t eax_45 = eax_44 ^ edi_28
        int32_t var_8_17 = var_8_16 ^ esi_33
        int32_t var_14_12 = ebx_38 u>> 2 | var_14_11 << 0x1e
        int32_t ebx_41 = var_14_12 + eax_45
        int32_t esi_37 =
            adc.d(ebx_38 << 0x1e | var_14_11 u>> 2, var_8_17, var_14_12 + eax_45 u< var_14_12)
        int32_t edx_34 = edx_33 ^ ebx_41
        int32_t ebx_43 = esi_29 ^ esi_37
        int32_t var_18_5 = eax_45 u>> 0x1e | var_8_17 << 2
        int32_t ecx_48 = var_18_5 + edx_34
        int32_t eax_49 =
            adc.d(eax_45 << 2 | var_8_17 u>> 0x1e, ebx_43, var_18_5 + edx_34 u< var_18_5)
        int32_t edi_29 = edi_28 ^ ecx_48
        int32_t eax_51 = esi_33 ^ eax_49
        int32_t ecx_51 = ebx_43 u>> 0x1b | edx_34 << 5
        int32_t ecx_52 = ecx_51 + edi_29
        var_8 = ecx_52
        int32_t edx_37 =
            adc.d(ebx_43 << 5 | edx_34 u>> 0xffffffe5, eax_51, ecx_51 + edi_29 u< ecx_51)
        ebx_1 = ebx_41 ^ ecx_52
        esi_1 = esi_37 ^ edx_37
        var_c = edx_37
        int32_t edx_38 = edi_29 u>> 0x1c | eax_51 << 4
        var_1c = edx_38 + ebx_1
        int32_t ecx_56 = adc.d(edi_29 << 4 | eax_51 u>> 0x1c, esi_1, edx_38 + ebx_1 u< edx_38)
        edx_5 = ecx_48 ^ var_1c
        edi = eax_49 ^ ecx_56
        var_14 = ecx_56
        arg3 = &var_28[4]
        var_24 -= 0x10

int32_t edx_41 = edx_5
int32_t var_18_7 = edx_41
int32_t edi_32 = adc.d(edi, arg2 << 0x18, edx_5 u>= 0)

switch (var_24)
    case 0
        int32_t temp32_1 = ebx_1
        ebx_1 -= 0x21524111
        esi_1 = adc.d(esi_1, 0xdeadbeef, temp32_1 u>= 0x21524111)
        edi_32 = adc.d(edi_32, 0xdeadbeef, edx_41 u>= 0x21524111)
        var_18_7 = edx_41 - 0x21524111
    case 1
        goto label_63a183
    case 2
        goto label_63a174
    case 3
        int32_t eax_80
        int32_t edx_54
        edx_54:eax_80 = sx.q(zx.d(*(arg3 + 2)))
        int32_t eax_81 = eax_80 << 0x10
        int32_t temp29_1 = ebx_1
        ebx_1 += eax_81
        esi_1 = adc.d(esi_1, edx_54 << 0x10 | eax_80 u>> 0xfffffff0, temp29_1 + eax_81 u< temp29_1)
    label_63a174:
        int32_t eax_83
        int32_t edx_56
        edx_56:eax_83 = sx.q(zx.d(*(arg3 + 1)))
        int32_t eax_84 = eax_83 << 8
        int32_t temp30_1 = ebx_1
        ebx_1 += eax_84
        esi_1 = adc.d(esi_1, edx_56 << 8 | eax_83 u>> 0xffffffe8, temp30_1 + eax_84 u< temp30_1)
    label_63a183:
        int32_t eax_86
        int32_t edx_58
        edx_58:eax_86 = sx.q(zx.d(*arg3))
        int32_t temp31_1 = ebx_1
        ebx_1 += eax_86
        esi_1 = adc.d(esi_1, edx_58, temp31_1 + eax_86 u< temp31_1)
    case 4
        goto label_63a159
    case 5
        goto label_63a153
    case 6
        goto label_63a146
    case 7
        int32_t eax_72
        int32_t edx_51
        edx_51:eax_72 = sx.q(zx.d(*(arg3 + 6)))
        esi_1 = adc.d(esi_1, eax_72 << 0x10, ebx_1 u>= 0)
    label_63a146:
        int32_t eax_75
        int32_t edx_52
        edx_52:eax_75 = sx.q(zx.d(*(arg3 + 5)))
        esi_1 = adc.d(esi_1, eax_75 << 8, ebx_1 u>= 0)
    label_63a153:
        int32_t eax_78
        int32_t edx_53
        edx_53:eax_78 = sx.q(zx.d(arg3[1].b))
        esi_1 = adc.d(esi_1, eax_78, ebx_1 u>= 0)
    label_63a159:
        int32_t temp27_1 = ebx_1
        ebx_1 += *arg3
        esi_1 = adc.d(esi_1, 0, temp27_1 + *arg3 u< temp27_1)
    case 8
        goto label_63a12e
    case 9
        goto label_63a128
    case 0xa
        goto label_63a117
    case 0xb
        int32_t eax_64
        int32_t edx_46
        edx_46:eax_64 = sx.q(zx.d(*(arg3 + 0xa)))
        int32_t eax_65 = eax_64 << 0x10
        int32_t temp19_1 = var_18_7
        var_18_7 += eax_65
        edi_32 =
            adc.d(edi_32, edx_46 << 0x10 | eax_64 u>> 0xfffffff0, temp19_1 + eax_65 u< temp19_1)
    label_63a117:
        int32_t eax_67
        int32_t edx_48
        edx_48:eax_67 = sx.q(zx.d(*(arg3 + 9)))
        int32_t eax_68 = eax_67 << 8
        int32_t temp20_1 = var_18_7
        var_18_7 += eax_68
        edi_32 = adc.d(edi_32, edx_48 << 8 | eax_67 u>> 0xffffffe8, temp20_1 + eax_68 u< temp20_1)
    label_63a128:
        int32_t eax_70
        int32_t edx_50
        edx_50:eax_70 = sx.q(zx.d(arg3[2].b))
        int32_t temp21_1 = var_18_7
        var_18_7 += eax_70
        edi_32 = adc.d(edi_32, edx_50, temp21_1 + eax_70 u< temp21_1)
    label_63a12e:
        int32_t temp22_1 = ebx_1
        ebx_1 += *arg3
        esi_1 = adc.d(esi_1, arg3[1], temp22_1 + *arg3 u< temp22_1)
    case 0xc
        goto label_63a0f2
    case 0xd
        goto label_63a0e9
    case 0xe
        goto label_63a0db
    case 0xf
        int32_t eax_56
        int32_t edx_42
        edx_42:eax_56 = sx.q(zx.d(*(arg3 + 0xe)))
        edi_32 = adc.d(edi_32, eax_56 << 0x10, var_18_7 u>= 0)
    label_63a0db:
        int32_t eax_59
        int32_t edx_43
        edx_43:eax_59 = sx.q(zx.d(*(arg3 + 0xd)))
        edi_32 = adc.d(edi_32, eax_59 << 8, var_18_7 u>= 0)
    label_63a0e9:
        int32_t eax_62
        int32_t edx_44
        edx_44:eax_62 = sx.q(zx.d(arg3[3].b))
        edx_41 = var_18_7
        edi_32 = adc.d(edi_32, eax_62, var_18_7 u>= 0)
    label_63a0f2:
        edi_32 = adc.d(edi_32, 0, edx_41 + arg3[2] u< edx_41)
        int32_t temp17_1 = ebx_1
        ebx_1 += *arg3
        esi_1 = adc.d(esi_1, arg3[1], temp17_1 + *arg3 u< temp17_1)
        var_18_7 = edx_41 + arg3[2]

int32_t var_18_8 = var_18_7 ^ ebx_1
int32_t eax_87 = esi_1 << 0xf | ebx_1 u>> 0xffffffef
int32_t edi_36 = esi_1 u>> 0x11 | ebx_1 << 0xf
int32_t ebx_48 = var_18_8 + edi_36
int32_t edx_61 = adc.d(edi_32 ^ esi_1, eax_87, var_18_8 + edi_36 u< var_18_8)
int32_t var_8_18 = var_8 ^ ebx_48
int32_t ecx_58 = ebx_48 u>> 0xc | edx_61 << 0x14
int32_t esi_41 = ebx_48 << 0x14 | edx_61 u>> 0xc
int32_t var_8_19 = var_8_18 + ecx_58
int32_t var_c_18 = adc.d(var_c ^ edx_61, esi_41, var_8_18 + ecx_58 u< var_8_18)
int32_t var_1c_9 = var_1c ^ var_8_19
int32_t ebx_50 = var_c_18 << 0x1a | var_8_19 u>> 0xfffffffa
int32_t edx_65 = var_c_18 u>> 6 | var_8_19 << 0x1a
int32_t esi_45 = var_1c_9 + edx_65
int32_t var_8_20 = esi_45
int32_t ecx_62 = adc.d(var_14 ^ var_c_18, ebx_50, var_1c_9 + edx_65 u< var_1c_9)
int32_t edi_37 = edi_36 ^ esi_45
int32_t edx_66 = esi_45 u>> 0xd | ecx_62 << 0x13
int32_t ecx_65 = esi_45 << 0x13 | ecx_62 u>> 0xd
int32_t edi_38 = edi_37 + edx_66
int32_t eax_89 = adc.d(eax_87 ^ ecx_62, ecx_65, edi_37 + edx_66 u< edi_37)
int32_t ecx_67 = ecx_58 ^ edi_38
int32_t esi_48 = eax_89 << 0x1c | edi_38 u>> 0xfffffffc
int32_t edx_69 = eax_89 u>> 4 | edi_38 << 0x1c
int32_t ecx_68 = ecx_67 + edx_69
int32_t edi_41 = adc.d(esi_41 ^ eax_89, esi_48, ecx_67 + edx_69 u< ecx_67)
int32_t eax_92 = edx_65 ^ ecx_68
int32_t edi_42 = edi_41 << 9 | ecx_68 u>> 0xffffffe9
int32_t ebx_54 = edi_41 u>> 0x17 | ecx_68 << 9
int32_t eax_93 = eax_92 + ebx_54
int32_t eax_95 = adc.d(ebx_50 ^ edi_41, edi_42, eax_92 + ebx_54 u< eax_92)
int32_t var_24_2 = edx_66 ^ eax_93
int32_t eax_96 = eax_93 u>> 0x11 | eax_95 << 0xf
int32_t ecx_72 = eax_93 << 0xf | eax_95 u>> 0x11
int32_t ebx_58 = var_24_2 + eax_96
int32_t eax_98 = adc.d(ecx_65 ^ eax_95, ecx_72, var_24_2 + eax_96 u< var_24_2)
int32_t edx_70 = edx_69 ^ ebx_58
int32_t eax_99 = ebx_58 u>> 0xa | eax_98 << 0x16
uint32_t edi_44 = eax_98 u>> 0xa
int32_t ecx_75 = ebx_58 << 0x16 | edi_44
int32_t edx_71 = edx_70 + eax_99
uint32_t var_8_24 = edi_44
int32_t esi_50 = adc.d(esi_48 ^ eax_98, ecx_75, edx_70 + eax_99 u< edx_70)
int32_t ebx_61 = ebx_54 ^ edx_71
int32_t var_28_3 = esi_50
int32_t edx_73 = esi_50 + ebx_61
int32_t esi_52 = adc.d(edx_71, edi_42 ^ esi_50, esi_50 + ebx_61 u< esi_50)
int32_t edx_74 = edx_73 ^ eax_96
int32_t ebx_64 = esi_52 u>> 7 | edx_73 << 0x19
int32_t ebx_65 = ebx_64 + edx_74
int32_t edi_48 =
    adc.d(esi_52 << 0x19 | edx_73 u>> 0xfffffff9, esi_52 ^ ecx_72, ebx_64 + edx_74 u< ebx_64)
int32_t edx_76 = eax_99 ^ ebx_65
int32_t eax_102 = ebx_65 u>> 1 | edi_48 << 0x1f
int32_t ecx_80 = ebx_65 << 0x1f | edi_48 u>> 1
*arg4 = eax_102
arg4[1] = ecx_80
arg5[1] = adc.d(ecx_75 ^ edi_48, ecx_80, edx_76 + eax_102 u< edx_76)
*arg5 = edx_76 + eax_102
return arg5

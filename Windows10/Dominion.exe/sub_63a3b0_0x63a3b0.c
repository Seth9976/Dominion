// 函数: sub_63a3b0
// 地址: 0x63a3b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie

if (arg2 u< 0xc0)
    int32_t* eax_3 = sub_639c00(arg4, arg2, arg3, arg4, arg5)
    CookieCheckFunction(eax_3)
    return eax_3

int32_t ecx_2 = *arg4
int32_t edi = ecx_2
int32_t eax_4 = arg4[1]
int32_t ebx = *arg5
int32_t var_84 = eax_4
int32_t var_80 = eax_4
int32_t var_70 = eax_4
int32_t var_cc = eax_4
int32_t eax_5 = arg5[1]
int32_t esi_1 = eax_5
int32_t var_8c = eax_5
int32_t var_98 = eax_5
int32_t var_b4 = eax_5
int32_t* eax_7 = arg3
int32_t var_ac = ecx_2
int32_t var_b8 = ecx_2
int32_t var_c4 = ecx_2
int32_t var_d0 = ebx
int32_t var_94 = ebx
int32_t var_a0 = ebx
int32_t var_b0 = ebx
void* ecx_3 = &eax_7[arg2 u/ 0x60 * 0x18]
int32_t var_78 = esi_1
int32_t var_c0 = 0xdeadbeef
int32_t var_9c = 0xdeadbeef
int32_t var_bc = 0xdeadbeef
int32_t var_a4 = 0xdeadbeef
int32_t var_7c = 0xdeadbeef
int32_t var_74 = 0xdeadbeef
int32_t var_88 = 0xdeadbeef
int32_t var_90 = 0xdeadbeef

if (eax_7 u< ecx_3)
    void* ecx_4 = &eax_7[4]
    void* var_c8_1 = ecx_4
    int32_t edx_6 = var_cc
    int32_t i_1 = (arg2 u/ 0x60 * 0x60 - 1) u/ 0x60 + 1
    int32_t eax_12 = esi_1
    int32_t i
    
    do
        int32_t edi_1 = edi + *(ecx_4 - 0x10)
        int32_t edx_7 = adc.d(edx_6, *(ecx_4 - 0xc), edi + *(ecx_4 - 0x10) u< edi)
        int32_t esi_3 = var_c0 ^ edi_1
        int32_t var_90_1 = var_90 ^ eax_12
        int32_t var_88_1 = var_88 ^ ebx
        int32_t esi_4 = esi_3 + var_b0
        int32_t edi_4 = adc.d(var_9c ^ edx_7, var_78, esi_3 + var_b0 u< esi_3)
        int32_t ebx_2 = var_b0 + *(ecx_4 - 8)
        int32_t eax_14 = adc.d(var_78, *(ecx_4 - 4), var_b0 + *(ecx_4 - 8) u< var_b0)
        int32_t var_c4_1 = var_c4 ^ esi_4
        int32_t var_70_1 = var_70 ^ edi_4
        int32_t edx_10 = (edx_7 u>> 0x15 | edi_1 << 0xb) ^ ebx_2
        int32_t edx_11 = edx_10 + var_88_1
        int32_t eax_17 = adc.d((edx_7 << 0xb | edi_1 u>> 0xffffffeb) ^ eax_14, var_90_1, 
            edx_10 + var_88_1 u< edx_10)
        int32_t edi_6 = var_88_1 + *var_c8_1
        int32_t esi_8 = adc.d(var_90_1, *(var_c8_1 + 4), var_88_1 + *var_c8_1 u< var_88_1)
        int32_t var_a0_1 = var_a0 ^ edx_11
        int32_t var_b4_1 = var_b4 ^ eax_17
        int32_t edi_7 = edi_6 ^ eax_14
        int32_t edi_8 = edi_7 + var_c4_1
        int32_t var_b0_1 = ebx_2
        int32_t edx_14 = adc.d(ebx_2 ^ esi_8, var_70_1, edi_7 + var_c4_1 u< edi_7)
        int32_t esi_10 = var_c4_1 + *(var_c8_1 + 8)
        int32_t eax_19 = adc.d(var_70_1, *(var_c8_1 + 0xc), var_c4_1 + *(var_c8_1 + 8) u< var_c4_1)
        int32_t var_7c_1 = var_7c ^ edi_8
        int32_t var_74_1 = var_74 ^ edx_14
        int32_t eax_21 = (edi_6 u>> 0x15 | esi_8 << 0xb) ^ esi_10
        int32_t edx_19 =
            adc.d((edi_6 << 0xb | esi_8 u>> 0x15) ^ eax_19, var_b4_1, eax_21 + var_a0_1 u< eax_21)
        var_88 = eax_21 + var_a0_1
        int32_t eax_24 = var_a0_1 + *(var_c8_1 + 0x10)
        int32_t eax_26 =
            adc.d(var_b4_1, *(var_c8_1 + 0x14), var_a0_1 + *(var_c8_1 + 0x10) u< var_a0_1)
        var_90 = edx_19
        int32_t var_80_1 = var_80 ^ edx_19
        int32_t var_b8_1 = var_b8 ^ var_88
        int32_t edx_23 = (eax_19 u>> 1 | esi_10 << 0x1f) ^ eax_24
        int32_t edx_24 = edx_23 + var_7c_1
        var_c4 = edx_24
        var_70 = adc.d((eax_19 << 0x1f | esi_10 u>> 0xffffffff) ^ eax_26, var_74_1, 
            edx_23 + var_7c_1 u< edx_23)
        int32_t eax_32 = var_7c_1 + *(var_c8_1 + 0x18)
        int32_t eax_34 =
            adc.d(var_74_1, *(var_c8_1 + 0x1c), var_7c_1 + *(var_c8_1 + 0x18) u< var_7c_1)
        int32_t var_94_1 = var_94 ^ edx_24
        int32_t var_98_1 = var_98 ^ var_70
        int32_t edx_28 = (eax_26 u>> 0xf | eax_24 << 0x11) ^ eax_32
        int32_t edx_29 = edx_28 + var_b8_1
        var_a0 = edx_29
        var_b4 = adc.d((eax_26 << 0x11 | eax_24 u>> 0xfffffff1) ^ eax_34, var_80_1, 
            edx_28 + var_b8_1 u< edx_28)
        int32_t eax_40 = var_b8_1 + *(var_c8_1 + 0x20)
        int32_t eax_42 =
            adc.d(var_80_1, *(var_c8_1 + 0x24), var_b8_1 + *(var_c8_1 + 0x20) u< var_b8_1)
        int32_t var_bc_1 = var_bc ^ edx_29
        int32_t var_a4_1 = var_a4 ^ var_b4
        int32_t edx_33 = (eax_34 u>> 4 | eax_32 << 0x1c) ^ eax_40
        int32_t edx_34 = edx_33 + var_94_1
        var_7c = edx_34
        var_74 = adc.d((eax_34 << 0x1c | eax_32 u>> 0xfffffffc) ^ eax_42, var_98_1, 
            edx_33 + var_94_1 u< edx_33)
        int32_t eax_48 = var_94_1 + *(var_c8_1 + 0x28)
        int32_t eax_50 =
            adc.d(var_98_1, *(var_c8_1 + 0x2c), var_94_1 + *(var_c8_1 + 0x28) u< var_94_1)
        int32_t var_ac_1 = var_ac ^ edx_34
        int32_t var_84_1 = var_84 ^ var_74
        int32_t eax_53 = (eax_40 u>> 0x19 | eax_42 << 7) ^ eax_48
        var_b8 = eax_53 + var_bc_1
        int32_t edx_39 =
            adc.d((eax_40 << 7 | eax_42 u>> 0x19) ^ eax_50, var_a4_1, eax_53 + var_bc_1 u< eax_53)
        int32_t edx_41 = var_bc_1 + *(var_c8_1 + 0x30)
        int32_t edx_43 =
            adc.d(var_a4_1, *(var_c8_1 + 0x34), var_bc_1 + *(var_c8_1 + 0x30) u< var_bc_1)
        int32_t var_8c_1 = var_8c ^ edx_39
        int32_t ebx_4 = var_d0 ^ var_b8
        var_80 = edx_39
        int32_t eax_57 = (eax_48 u>> 7 | eax_50 << 0x19) ^ edx_41
        int32_t edx_48 =
            adc.d((eax_48 << 0x19 | eax_50 u>> 7) ^ edx_43, var_84_1, eax_57 + var_ac_1 u< eax_57)
        var_94 = eax_57 + var_ac_1
        int32_t eax_60 = var_ac_1 + *(var_c8_1 + 0x38)
        int32_t eax_62 =
            adc.d(var_84_1, *(var_c8_1 + 0x3c), var_ac_1 + *(var_c8_1 + 0x38) u< var_ac_1)
        int32_t edi_12 = edi_4 ^ edx_48
        int32_t esi_21 = esi_4 ^ var_94
        var_98 = edx_48
        int32_t eax_64 = (edx_41 u>> 9 | edx_43 << 0x17) ^ eax_60
        var_bc = eax_64 + ebx_4
        int32_t edx_53 =
            adc.d((edx_41 << 0x17 | edx_43 u>> 9) ^ eax_62, var_8c_1, eax_64 + ebx_4 u< eax_64)
        int32_t ebx_5 = ebx_4 + *(var_c8_1 + 0x40)
        int32_t eax_67 = adc.d(var_8c_1, *(var_c8_1 + 0x44), ebx_4 + *(var_c8_1 + 0x40) u< ebx_4)
        var_cc = eax_17 ^ edx_53
        var_a4 = edx_53
        int32_t eax_70 = (eax_60 u>> 0xa | eax_62 << 0x16) ^ ebx_5
        var_ac = eax_70 + esi_21
        int32_t edx_58 =
            adc.d((eax_60 << 0x16 | eax_62 u>> 0xa) ^ eax_67, edi_12, eax_70 + esi_21 u< eax_70)
        int32_t esi_27 = esi_21 + *(var_c8_1 + 0x48)
        int32_t edi_13 = adc.d(edi_12, *(var_c8_1 + 0x4c), esi_21 + *(var_c8_1 + 0x48) u< esi_21)
        var_84 = edx_58
        var_78 = edx_14 ^ edx_58
        var_b0 = edi_8 ^ var_ac
        int32_t ebx_8 = (ebx_5 << 0x16 | eax_67 u>> 0xa) ^ esi_27
        var_c0 = esi_27 u>> 0x12 | edi_13 << 0xe
        edi = edx_11 ^ var_bc
        ebx = ebx_8 + edi
        var_9c = esi_27 << 0xe | edi_13 u>> 0x12
        edx_6 = var_cc
        eax_12 =
            adc.d((eax_67 << 0x16 | ebx_5 u>> 0xfffffff6) ^ edi_13, edx_6, ebx_8 + edi u< ebx_8)
        var_d0 = ebx
        ecx_4 = var_c8_1 + 0x60
        var_8c = eax_12
        i = i_1
        i_1 -= 1
        var_c8_1 = ecx_4
    while (i != 1)
    esi_1 = var_78
    eax_7 = arg3

void* count = arg2 - ecx_3 + eax_7
int32_t var_6c
memcpy(&var_6c, ecx_3, count)
memset(&var_6c + count, 0, 0x60 - count)
char var_d = count.b
int32_t var_64
int32_t ebx_12 = var_b0 + var_64
int32_t var_60
int32_t esi_29 = adc.d(esi_1, var_60, var_b0 + var_64 u< var_b0)
int32_t var_14
int32_t ecx_15 = var_14 + ebx_12
int32_t var_c0_2 = var_c0 + ecx_15
int32_t var_10
int32_t ecx_17 =
    adc.d(var_9c, adc.d(var_10, esi_29, var_14 + ebx_12 u< var_14), var_c0 + ecx_15 u< var_c0)
int32_t var_5c
int32_t esi_32 = (var_5c + var_88) ^ var_c0_2
int32_t var_58
int32_t edx_68 = adc.d(var_58, var_90, var_5c + var_88 u< var_5c) ^ ecx_17
int32_t ecx_18 = var_6c
int32_t ecx_19 = ecx_18 + esi_32
int32_t edi_15 = edi + ecx_19
int32_t var_68
int32_t ecx_21 =
    adc.d(var_cc, adc.d(var_68, edx_68, ecx_18 + esi_32 u< ecx_18), edi + ecx_19 u< edi)
int32_t var_54
int32_t edi_18 = (var_54 + var_c4) ^ edi_15
int32_t var_50
int32_t eax_83 = adc.d(var_50, var_70, var_54 + var_c4 u< var_54) ^ ecx_21
int32_t ecx_22 = ebx_12 u>> 0x14 | esi_29 << 0xc
int32_t ecx_23 = ecx_22 + edi_18
int32_t ebx_15 = adc.d(ebx_12 << 0xc | esi_29 u>> 0x14, eax_83, ecx_22 + edi_18 u< ecx_22)
int32_t var_4c
int32_t ebx_18 = (var_4c + var_a0) ^ ecx_23
int32_t var_48
int32_t ecx_26 = adc.d(var_48, var_b4, var_4c + var_a0 u< var_4c) ^ ebx_15
int32_t ebx_21 = edx_68 u>> 0x11 | esi_32 << 0xf
int32_t var_90_4 = ebx_21 + ebx_18
int32_t esi_38 = adc.d(edx_68 << 0xf | esi_32 u>> 0xffffffef, ecx_26, ebx_21 + ebx_18 u< ebx_21)
int32_t var_44
int32_t esi_41 = (var_44 + var_7c) ^ var_90_4
int32_t var_40
int32_t edx_72 = adc.d(var_40, var_74, var_44 + var_7c u< var_44) ^ esi_38
int32_t var_74_4 = edi_18 u>> 0x1e | eax_83 << 2
int32_t edi_21 = var_74_4 + esi_41
int32_t var_7c_5 = adc.d(edi_18 << 2 | eax_83 u>> 0x1e, edx_72, var_74_4 + esi_41 u< var_74_4)
int32_t var_3c
int32_t eax_87 = (var_3c + var_b8) ^ edi_21
int32_t var_38
int32_t ebx_27 = adc.d(var_38, var_80, var_3c + var_b8 u< var_3c) ^ var_7c_5
int32_t var_80_4 = ecx_26 u>> 0xb | ebx_18 << 0x15
int32_t ebx_31 = var_80_4 + eax_87
int32_t edi_25 =
    adc.d(ecx_26 << 0x15 | ebx_18 u>> 0xfffffff5, ebx_27, var_80_4 + eax_87 u< var_80_4)
int32_t var_34
int32_t ecx_30 = (var_34 + var_94) ^ ebx_31
int32_t var_30
int32_t eax_90 = adc.d(var_30, var_98, var_34 + var_94 u< var_34) ^ edi_25
int32_t ebx_32 = esi_41 u>> 0x1a | edx_72 << 6
int32_t ebx_33 = ebx_32 + ecx_30
int32_t edi_29 = adc.d(esi_41 << 6 | edx_72 u>> 0x1a, eax_90, ebx_32 + ecx_30 u< ebx_32)
int32_t var_2c
int32_t ebx_36 = (var_2c + var_bc) ^ ebx_33
int32_t var_28
int32_t edi_32 = adc.d(var_28, var_a4, var_2c + var_bc u< var_2c) ^ edi_29
int32_t esi_44 = eax_87 u>> 0x1f | ebx_27 << 1
int32_t ebx_39 = ebx_27 u>> 0x1f | (eax_87 * 2)
int32_t esi_45 = esi_44 + ebx_36
int32_t var_70_5 = ebx_39
int32_t ebx_40 = adc.d(ebx_39, edi_32, esi_44 + ebx_36 u< esi_44)
int32_t var_24
int32_t esi_48 = (var_24 + var_ac) ^ esi_45
int32_t var_20
int32_t edx_78 = adc.d(var_20, var_84, var_24 + var_ac u< var_24) ^ ebx_40
int32_t var_84_4 = eax_90 u>> 0x16 | ecx_30 << 0xa
int32_t var_84_5 = var_84_4 + esi_48
int32_t ebx_44 = adc.d(eax_90 << 0xa | ecx_30 u>> 0xffffffea, edx_78, var_84_4 + esi_48 u< var_84_4)
int32_t var_1c
int32_t ecx_34 = (var_1c + var_d0) ^ var_84_5
int32_t var_18
int32_t eax_94 = adc.d(var_18, var_8c, var_1c + var_d0 u< var_1c) ^ ebx_44
int32_t var_98_4 = edi_32 u>> 0x13 | ebx_36 << 0xd
int32_t edi_35 = var_98_4 + ecx_34
int32_t ebx_50 = adc.d(edi_32 << 0xd | ebx_36 u>> 0xffffffed, eax_94, var_98_4 + ecx_34 u< var_98_4)
int32_t var_c0_3 = var_c0_2 ^ edi_35
int32_t var_9c_4 = ecx_17 ^ ebx_50
int32_t edi_36 = esi_48 u>> 0x1a | edx_78 << 6
int32_t edi_37 = edi_36 + var_c0_3
int32_t esi_52 = adc.d(esi_48 << 6 | edx_78 u>> 0x1a, var_9c_4, edi_36 + var_c0_3 u< edi_36)
int32_t var_cc_4 = ecx_21 ^ esi_52
int32_t var_a8_5 = edi_15 ^ edi_37
int32_t edx_83 = ecx_34 u>> 0xb | eax_94 << 0x15
int32_t edx_84 = edx_83 + var_a8_5
int32_t esi_56 = adc.d(ecx_34 << 0x15 | eax_94 u>> 0xb, var_cc_4, edx_83 + var_a8_5 u< edx_83)
int32_t var_88_4 = ecx_23 ^ edx_84
int32_t edx_86 = ebx_15 ^ esi_56
int32_t esi_57 = var_c0_3 u>> 0x16 | var_9c_4 << 0xa
int32_t esi_58 = esi_57 + var_88_4
int32_t eax_99 = adc.d(var_c0_3 << 0xa | var_9c_4 u>> 0x16, edx_86, esi_57 + var_88_4 u< esi_57)
int32_t var_90_5 = var_90_4 ^ esi_58
int32_t var_78_5 = esi_38 ^ eax_99
uint32_t edx_88 = var_cc_4 u>> 0xa
uint32_t var_cc_5 = edx_88
int32_t eax_100 = var_a8_5 u>> 0xa | var_cc_4 << 0x16
int32_t eax_101 = eax_100 + var_90_5
int32_t ecx_41 = adc.d(var_a8_5 << 0x16 | edx_88, var_78_5, eax_100 + var_90_5 u< eax_100)
int32_t var_74_6 = edi_21 ^ eax_101
int32_t esi_62 = var_7c_5 ^ ecx_41
int32_t eax_102 = var_88_4 u>> 0x14 | edx_86 << 0xc
int32_t eax_103 = eax_102 + var_74_6
int32_t ecx_45 = adc.d(var_88_4 << 0xc | edx_86 u>> 0x14, esi_62, eax_102 + var_74_6 u< eax_102)
int32_t var_80_6 = ebx_31 ^ eax_103
int32_t edx_92 = edi_25 ^ ecx_45
int32_t ecx_48 = var_78_5 u>> 0x11 | var_90_5 << 0xf
int32_t ecx_49 = ecx_48 + var_80_6
int32_t eax_105 =
    adc.d(var_78_5 << 0xf | var_90_5 u>> 0xffffffef, edx_92, ecx_48 + var_80_6 u< ecx_48)
int32_t var_c4_3 = ebx_33 ^ ecx_49
int32_t esi_66 = edi_29 ^ eax_105
int32_t eax_106 = var_74_6 u>> 0x1e | esi_62 << 2
int32_t eax_107 = eax_106 + var_c4_3
int32_t ecx_53 = adc.d(var_74_6 << 2 | esi_62 u>> 0x1e, esi_66, eax_106 + var_c4_3 u< eax_106)
int32_t var_70_7 = ebx_40 ^ ecx_53
int32_t var_a4_4 = esi_45 ^ eax_107
int32_t ecx_56 = edx_92 u>> 0xb | var_80_6 << 0x15
int32_t ecx_57 = ecx_56 + var_a4_4
int32_t eax_109 =
    adc.d(edx_92 << 0x15 | var_80_6 u>> 0xfffffff5, var_70_7, ecx_56 + var_a4_4 u< ecx_56)
int32_t var_84_6 = var_84_5 ^ ecx_57
int32_t var_a0_4 = ebx_44 ^ eax_109
int32_t eax_110 = var_c4_3 u>> 0x1a | esi_66 << 6
uint32_t esi_70 = esi_66 u>> 0x1a
int32_t eax_111 = eax_110 + var_84_6
uint32_t var_94_5 = esi_70
int32_t ecx_61 = adc.d(var_c4_3 << 6 | esi_70, var_a0_4, eax_110 + var_84_6 u< eax_110)
int32_t var_98_6 = edi_35 ^ eax_111
int32_t ebx_51 = ebx_50 ^ ecx_61
int32_t eax_113 = var_a4_4 u>> 0x1f | var_70_7 << 1
int32_t eax_114 = eax_113 + var_98_6
int32_t esi_74 = adc.d(var_70_7 u>> 0x1f | (var_a4_4 * 2), ebx_51, eax_113 + var_98_6 u< eax_113)
int32_t edi_38 = edi_37 ^ eax_114
int32_t ecx_66 = var_a0_4 u>> 0x16 | var_84_6 << 0xa
int32_t esi_76 = esi_52 ^ esi_74
int32_t ecx_67 = ecx_66 + edi_38
int32_t eax_116 =
    adc.d(var_a0_4 << 0xa | var_84_6 u>> 0xffffffea, esi_76, ecx_66 + edi_38 u< ecx_66)
int32_t var_d0_2 = esi_56 ^ eax_116
int32_t edx_102 = edx_84 ^ ecx_67
int32_t ecx_70 = ebx_51 u>> 0x13 | var_98_6 << 0xd
int32_t ecx_71 = ecx_70 + edx_102
int32_t eax_118 =
    adc.d(ebx_51 << 0xd | var_98_6 u>> 0xffffffed, var_d0_2, ecx_70 + edx_102 u< ecx_70)
int32_t var_ac_5 = esi_58 ^ ecx_71
int32_t ecx_73 = eax_99 ^ eax_118
int32_t edx_103 = edi_38 u>> 0x1a | esi_76 << 6
int32_t edx_104 = edx_103 + var_ac_5
int32_t esi_82 = adc.d(edi_38 << 6 | esi_76 u>> 0x1a, ecx_73, edx_103 + var_ac_5 u< edx_103)
int32_t var_b4_5 = eax_101 ^ edx_104
int32_t edi_41 = ecx_41 ^ esi_82
int32_t eax_121 = edx_102 u>> 0xb | var_d0_2 << 0x15
int32_t eax_122 = eax_121 + var_b4_5
int32_t ecx_77 = adc.d(edx_102 << 0x15 | var_d0_2 u>> 0xb, edi_41, eax_121 + var_b4_5 u< eax_121)
int32_t var_9c_6 = eax_103 ^ eax_122
int32_t var_c8_5 = ecx_45 ^ ecx_77
int32_t edi_42 = var_ac_5 u>> 0x16 | ecx_73 << 0xa
int32_t edi_43 = edi_42 + var_9c_6
int32_t ebx_58 = adc.d(var_ac_5 << 0xa | ecx_73 u>> 0x16, var_c8_5, edi_42 + var_9c_6 u< edi_42)
int32_t var_78_8 = ecx_49 ^ edi_43
int32_t var_90_7 = eax_105 ^ ebx_58
int32_t eax_125 = var_b4_5 u>> 0xa | edi_41 << 0x16
uint32_t edi_45 = edi_41 u>> 0xa
int32_t eax_126 = eax_125 + var_78_8
uint32_t var_a8_8 = edi_45
int32_t ecx_83 = adc.d(var_b4_5 << 0x16 | edi_45, var_90_7, eax_125 + var_78_8 u< eax_125)
int32_t var_7c_8 = eax_107 ^ eax_126
int32_t edi_47 = ecx_53 ^ ecx_83
int32_t eax_127 = var_9c_6 u>> 0x14 | var_c8_5 << 0xc
int32_t eax_128 = eax_127 + var_7c_8
int32_t ecx_87 = adc.d(var_9c_6 << 0xc | var_c8_5 u>> 0x14, edi_47, eax_127 + var_7c_8 u< eax_127)
int32_t edx_112 = eax_109 ^ ecx_87
int32_t var_88_7 = ecx_57 ^ eax_128
int32_t ecx_90 = var_90_7 u>> 0x11 | var_78_8 << 0xf
int32_t var_84_8 = eax_111 ^ (ecx_90 + var_88_7)
int32_t var_c4_5 =
    ecx_61 ^ adc.d(var_90_7 << 0xf | var_78_8 u>> 0xffffffef, edx_112, ecx_90 + var_88_7 u< ecx_90)
int32_t eax_131 = var_7c_8 u>> 0x1e | edi_47 << 2
int32_t var_70_9 =
    esi_74 ^ adc.d(var_7c_8 << 2 | edi_47 u>> 0x1e, var_c4_5, eax_131 + var_84_8 u< eax_131)
int32_t var_a4_6 = eax_114 ^ (eax_131 + var_84_8)
int32_t ecx_98 = edx_112 u>> 0xb | var_88_7 << 0x15
int32_t edi_55 = ecx_67 ^ (ecx_98 + var_a4_6)
int32_t var_80_8 = eax_116
    ^ adc.d(edx_112 << 0x15 | var_88_7 u>> 0xfffffff5, var_70_9, ecx_98 + var_a4_6 u< ecx_98)
int32_t eax_135 = var_84_8 u>> 0x1a | var_c4_5 << 6
int32_t var_98_8 =
    eax_118 ^ adc.d(var_84_8 << 6 | var_c4_5 u>> 0x1a, var_80_8, eax_135 + edi_55 u< eax_135)
int32_t var_a0_7 = ecx_71 ^ (eax_135 + edi_55)
int32_t eax_138 = var_a4_6 u>> 0x1f | var_70_9 << 1
int32_t esi_83 =
    esi_82 ^ adc.d(var_70_9 u>> 0x1f | (var_a4_6 * 2), var_98_8, eax_138 + var_a0_7 u< eax_138)
int32_t edx_121 = edx_104 ^ (eax_138 + var_a0_7)
int32_t ecx_108 = var_80_8 u>> 0x16 | edi_55 << 0xa
int32_t var_94_7 = eax_122 ^ (ecx_108 + edx_121)
int32_t edi_58 =
    ecx_77 ^ adc.d(var_80_8 << 0xa | edi_55 u>> 0xffffffea, esi_83, ecx_108 + edx_121 u< ecx_108)
int32_t esi_86 = var_98_8 u>> 0x13 | var_a0_7 << 0xd
int32_t esi_88 = (esi_86 + var_94_7) ^ edi_43
int32_t eax_144 = edx_121 u>> 0x1a | esi_83 << 6
int32_t edi_62 = eax_126 ^ (esi_88 + eax_144)
int32_t ebx_62 = ecx_83 ^ adc.d(
    adc.d(var_98_8 << 0xd | var_a0_7 u>> 0xffffffed, edi_58, esi_86 + var_94_7 u< esi_86) ^ ebx_58, 
    edx_121 << 6 | esi_83 u>> 0x1a, esi_88 + eax_144 u< esi_88)
arg4[1] = edi_62 << 0x16 | ebx_62 u>> 0xa
*arg4 = edi_62 u>> 0xa | ebx_62 << 0x16
int32_t eax_148 = var_94_7 u>> 0xb | edi_58 << 0x15
uint32_t eax_150 = (eax_148 + edi_62) ^ eax_128
arg5[1] = adc.d(var_94_7 << 0x15 | edi_58 u>> 0xb, ebx_62, eax_148 + edi_62 u< eax_148) ^ ecx_87
*arg5 = eax_150
CookieCheckFunction(eax_150)
return eax_150

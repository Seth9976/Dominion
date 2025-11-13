// 函数: sub_6afd50
// 地址: 0x6afd50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t* ebx = arg2
int32_t* var_18c = ebx
int32_t* eax_3 = sub_6b2e00(arg1 + 0x38)
int32_t i = 0x1e
void* var_184 = nullptr
*eax_3 = 5
void* edi = &eax_3[0x15]
int32_t var_1a0_2
int32_t* eax_4

do
    eax_4 = *ebx
    int32_t ecx_1 = 0
    int32_t* var_188_1 = eax_4
    
    if (eax_4 s> 0)
        eax_4 = ebx[2]
        int32_t ebx_1 = i - 2
        
        do
            int32_t edx_1 = *eax_4
            
            if (edx_1 u>= ebx_1)
                if (edx_1 u<= i + 3)
                    memset(edi, 0, 0x34)
                    int32_t eax_10 = sub_6dcf50(i - 2, var_18c, &data_8ce7bc, i - 2)
                    int32_t* edx_7 = var_18c
                    *(edi + 4) = eax_10
                    int32_t eax_12 = sub_6dcf50(i - 1, edx_7, &data_8ce7bc, i - 1)
                    int32_t* edx_8 = var_18c
                    *(edi + 8) = eax_12
                    int32_t eax_13 = sub_6dcf50(eax_12, edx_8, &data_8ce7bc, i)
                    int32_t* edx_9 = var_18c
                    *(edi + 0xc) = eax_13
                    int32_t eax_15 = sub_6dcf50(i + 1, edx_9, &data_8ce7bc, i + 1)
                    int32_t eax_17 = sub_6dcf50(i + 2, var_18c, &data_8ce7bc, i + 2)
                    int32_t eax_18 = sub_6dcf50(eax_17, var_18c, &data_8ce7bc, i + 3)
                    int32_t edx_12 = eax_15
                    
                    if (eax_18 == 0)
                        eax_18 = 1
                    
                    int32_t eax_19
                    
                    if (edx_12 != 1)
                        if (edx_12 != 2)
                            if (edx_12 != 3)
                            label_6affbb:
                                sub_63b5f0("unknown dx11 filter type")
                                edx_12 = eax_15
                                eax_19 = 0
                            else
                                eax_19 = edx_12 + 0x52
                        else if (eax_17 != 1)
                            if (eax_17 != 2)
                                goto label_6affbb
                            
                            if (eax_18 != 1)
                                if (eax_18 != 2)
                                    goto label_6affbb
                                
                                eax_19 = 0x15
                            else
                                eax_19 = eax_17 + 0x12
                        else if (eax_18 != eax_17)
                            if (eax_18 != 2)
                                goto label_6affbb
                            
                            eax_19 = 0x11
                        else
                            eax_19 = edx_12 + 0xe
                    else if (eax_17 != 1)
                        if (eax_17 != 2)
                            goto label_6affbb
                        
                        if (eax_18 != 1)
                            if (eax_18 != 2)
                                goto label_6affbb
                            
                            eax_19 = 5
                        else
                            eax_19 = eax_17 + 2
                    else if (eax_18 == eax_17)
                        eax_19 = 0
                    else
                        if (eax_18 != 2)
                            goto label_6affbb
                        
                        eax_19 = eax_17
                    
                    *edi = eax_19
                    int32_t eax_20 = 0
                    *(edi + 0x2c) = 0
                    *(edi + 0x30) = 0x41700000
                    
                    if (edx_12 == 3)
                        eax_20 = 4
                    
                    *(edi + 0x18) = 1
                    *(edi + 0x14) = eax_20
                    *(edi + 0x10) = 0xbf000000
                    int32_t* ecx_5 = *(arg1 + 4)
                    eax_4 = (*(*ecx_5 + 0x5c))(ecx_5, edi, var_184 + &eax_3[0xd])
                    ebx = var_18c
                    
                    if (eax_4 s>= 0)
                        goto label_6afdd4
                    
                    char const* const var_19c_10 = "Dx11GraphicsInterface::CreateMaterialBuffer"
                    var_1a0_2 = 0x496
                    goto label_6b0351
                
                ebx_1 = i - 2
            
            ecx_1 += 1
            eax_4 = &eax_4[4]
        while (ecx_1 s< var_188_1)
        
        ebx = var_18c
    
label_6afdd4:
    var_184 += 4
    i += 6
    edi += 0x34
while (i s< 0x4e)

int32_t var_150_1 = 1
int32_t var_15c_1 = 1
int32_t eax_5 = sub_6dcf50(eax_4, ebx, &data_8ce7bc, 5)
int32_t var_170_1 = eax_5
int32_t eax_6 = sub_6dcf50(eax_5, ebx, &data_8ce7bc, 0x19)
int32_t var_174 = eax_6
int32_t var_16c_1 = 0
int32_t var_168_1 = 0
int32_t var_164_1 = 0
int32_t var_160_1 = sub_6dd090(eax_6, ebx, &data_8ce7bc, 0x18)
int32_t var_158_1 = 0
int32_t* ecx_2 = *(arg1 + 4)
int32_t eax_7
eax_7.b = *(arg1 + 0x60) != 0
int32_t var_154_1 = eax_7
eax_4 = (*(*ecx_2 + 0x58))(ecx_2, &var_174, &eax_3[0x7d])

if (eax_4 s>= 0)
    int32_t* ecx_6 = *(arg1 + 4)
    int32_t var_16c_2 = 1
    eax_4 = (*(*ecx_6 + 0x58))(ecx_6, &var_174, &eax_3[0x7e])
    
    if (eax_4 s>= 0)
        int16_t var_13a_1 = 0
        uint32_t eax_26 = zx.d(sub_6dcff0(0, ebx, &data_8ce7bc, 0))
        uint32_t var_14c = eax_26
        int32_t eax_27 = sub_6dcf50(eax_26, ebx, &data_8ce7bc, 6)
        int32_t var_144_1 = eax_27
        uint32_t eax_29 = zx.d(sub_6dcff0(eax_27, ebx, &data_8ce7bc, 1))
        uint32_t var_148_1 = eax_29
        uint32_t eax_31 = zx.d(sub_6dcff0(eax_29, ebx, &data_8ce7bc, 0xa))
        uint32_t var_140_1 = eax_31
        int32_t eax_32 = sub_6dcf50(eax_31, ebx, &data_8ce7bc, 0x10)
        char var_13c_1 = eax_32.b
        int32_t eax_33 = sub_6dcf50(eax_32, ebx, &data_8ce7bc, 0x11)
        char var_13b_1 = eax_33.b
        int32_t eax_34 = sub_6dcf50(eax_33, ebx, &data_8ce7bc, 0xb)
        int32_t var_138_1 = eax_34
        int32_t eax_35 = sub_6dcf50(eax_34, ebx, &data_8ce7bc, 0xc)
        int32_t var_134_1 = eax_35
        int32_t eax_36 = sub_6dcf50(eax_35, ebx, &data_8ce7bc, 0xd)
        int32_t var_130_1 = eax_36
        int32_t eax_37 = sub_6dcf50(eax_36, ebx, &data_8ce7bc, 0xe)
        int32_t var_12c_1 = eax_37
        int32_t eax_38 = sub_6dcf50(eax_37, ebx, &data_8ce7bc, 0x12)
        int32_t var_128_1 = eax_38
        int32_t eax_39 = sub_6dcf50(eax_38, ebx, &data_8ce7bc, 0x13)
        int32_t var_124_1 = eax_39
        int32_t eax_40 = sub_6dcf50(eax_39, ebx, &data_8ce7bc, 0x14)
        int32_t var_120_1 = eax_40
        int32_t eax_41 = sub_6dcf50(eax_40, ebx, &data_8ce7bc, 0x15)
        int32_t* ecx_7 = *(arg1 + 4)
        int32_t var_11c_1 = eax_41
        eax_4 = (*(*ecx_7 + 0x54))(ecx_7, &var_14c, &eax_3[0x7f])
        
        if (eax_4 s>= 0)
            void var_f3
            uint32_t eax_45 = zx.d(sub_6dcff0(memset(&var_f3, 0, 0xe3), ebx, &data_8ce7bc, 2))
            uint32_t var_118 = eax_45
            int32_t var_114_1 = 0
            uint32_t eax_47 = zx.d(sub_6dcff0(eax_45, ebx, &data_8ce7bc, 9))
            uint32_t var_110_1 = eax_47
            int32_t eax_48 = sub_6dcf50(eax_47, ebx, &data_8ce7bc, 0x17)
            int32_t eax_49 = sub_6dcf50(eax_48, ebx, &data_8ce7bc, 3)
            int32_t eax_50 = sub_6dcf50(eax_49, ebx, &data_8ce7bc, 4)
            int32_t eax_51 = sub_6dcf50(eax_50, ebx, &data_8ce7bc, 0x16)
            char var_f4_1 = eax_51.b
            int32_t eax_52 = sub_6dcff0(eax_51, ebx, &data_8ce7bc, 0x4d)
            int32_t eax_55
            
            if (eax_52.b == 0)
                int32_t var_100_2 = sub_6afd00(eax_49)
                int32_t var_fc_2 = sub_6afd00(eax_50)
                eax_55 = eax_48
            else
                int32_t eax_53 = sub_6dcf50(eax_52, ebx, &data_8ce7bc, 0x4e)
                int32_t var_100_1 = eax_53
                int32_t eax_54 = sub_6dcf50(eax_53, ebx, &data_8ce7bc, 0x4f)
                int32_t var_fc_1 = eax_54
                eax_55 = sub_6dcf50(eax_54, ebx, &data_8ce7bc, 0x50)
            
            int32_t* ecx_10 = *(arg1 + 4)
            int32_t var_f8_1 = eax_55
            eax_4 = (*(*ecx_10 + 0x50))(ecx_10, &var_118, &eax_3[0x80])
            
            if (eax_4 s>= 0)
                uint32_t result = eax_3[0x92]
                CookieCheckFunction(result)
                return result
            
            char const* const var_19c_16 = "Dx11GraphicsInterface::CreateMaterialBuffer"
            var_1a0_2 = 0x4db
        else
            char const* const var_19c_14 = "Dx11GraphicsInterface::CreateMaterialBuffer"
            var_1a0_2 = 0x4c1
    else
        char const* const var_19c_12 = "Dx11GraphicsInterface::CreateMaterialBuffer"
        var_1a0_2 = 0x4ad
else
    char const* const var_19c_2 = "Dx11GraphicsInterface::CreateMaterialBuffer"
    var_1a0_2 = 0x4a8

label_6b0351:
sub_63b870(eax_4, &data_801800, "SUCCEEDED(hr)", "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp", 
    var_1a0_2, "Dx11GraphicsInterface::CreateMaterialBuffer")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

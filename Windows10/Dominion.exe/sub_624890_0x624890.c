// 函数: sub_624890
// 地址: 0x624890
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax = sub_4b9370()
char const* const var_5c
int32_t var_58
char const* const var_54_1
char* ecx
void* edi_1

if (eax.b == 0 || *arg1 != 9)
label_624989:
    edi_1 = data_cc8dc0
else
    if (data_ccf768 != 0)
        eax.b = 1
        float xmm0_1 = _mm_cvtepi32_ps(zx.o(arg1[3]))
        data_ccf769 = 1
        data_ccf77c = 0x358637bd
        data_ccf774 = xmm0_1 * 4.19999981f * 0.5f
        return eax
    
    edi_1 = data_cc8dc0
    
    if (edi_1 == 0)
        var_54_1 = "GetLocalSettings"
        var_58 = 0x5fb
        var_5c = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
        ecx = "gGameSettings.localSettings"
    label_624f94:
        sub_63b870(eax, &data_801800, ecx, var_5c, var_58, var_54_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (*(edi_1 + 0x38) != 0)
        if (sub_5cb070() != 0)
            goto label_624989
        
        int32_t eax_2
        
        if (data_8db5c4 != 0x27)
            eax_2 = 0
            
            if (data_8db5d4 == 0x27)
                eax_2 = data_8db5d8
        else
            eax_2 = data_8db5c8
        
        sub_62a250(sub_4bb9f0(0x1a96638, eax_2, "tbl_logEntries"), 
            int.d(((_mm_cvtepi32_ps(zx.o(arg1[3])) * 3f) ^ (data_8937c0.o).d) / 120f))
        int32_t eax_4
        eax_4.b = 1
        return eax_4

uint32_t ecx_2

if (*arg1 != 0 || arg1[1] != 0x6c)
    ecx_2 = data_147abe8
else
    ecx_2 = data_147abe8
    
    if (*(ecx_2 + 0x20) != 0)
        sub_4c8ac0()
        edi_1 = data_cc8dc0
        ecx_2 = data_147abe8

int32_t* var_38

if (*arg1 == 0)
    eax = arg1[1]
    
    if (eax != 0x76)
        if (eax != 0x6a)
            if (eax == 0x70 && *(ecx_2 + 0x20) != 0)
                if ((arg1[2].b & 1) == 0)
                    data_ccf6d4 += 1
                else
                    int32_t eax_19 = data_ccf6d4
                    data_ccf6d4 = eax_19 - 1
                    
                    if (eax_19 - 1 s< 0)
                        data_ccf6d4 = 0
            
            goto label_624ace
        
        if (*(ecx_2 + 0x20) == 0)
            goto label_624ace
        
        if (edi_1 == 0)
            var_54_1 = "GetLocalSettings"
            var_58 = 0x5fb
            var_5c = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
            ecx = "gGameSettings.localSettings"
            goto label_624f94
        
        void* ecx_3 = data_147abfc
        
        if (ecx_3 != 0)
            int32_t esi_1 = 0
            var_38 = *(ecx_3 + 0x204)
            int32_t eax_11 = *(ecx_3 + 0x208)
            
            if (eax_11 s> 0)
                do
                    uint32_t eax_12 = sub_4c89a0()
                    
                    if (var_38[esi_1 * 2] == eax_12)
                        int32_t ecx_5 = 0
                        
                        if (esi_1 != eax_11 - 1)
                            ecx_5 = esi_1 + 1
                        
                        *(edi_1 + 0x10) = var_38[ecx_5 * 2]
                        break
                    
                    esi_1 += 1
                while (esi_1 s< eax_11)
                
                ecx_3 = data_147abfc
        
        *(ecx_3 + 0x1f8) = *(edi_1 + 0x10)
        sub_4d6a20()
        sub_6378e0(&data_be3598)
        int32_t eax_18
        eax_18.b = 1
        return eax_18
    
    if (*(ecx_2 + 0x20) != 0)
        int32_t eax_7 = (data_19e2724 + 1) & 0x80000003
        
        if (eax_7 s< 0)
            eax_7 = ((eax_7 - 1) | 0xfffffffc) + 1
        
        data_19e2724 = eax_7
    
    goto label_624ace

label_624ace:
uint32_t eax_22

if (*arg1 == 1)
    if (arg1[1] == 0x52 && *(ecx_2 + 0x20) != 0 && data_8db664 == 0x7e3)
        sub_61e5e0()
        ecx_2 = data_147abe8
    
    if (*arg1 == 1)
        int32_t edx_3 = arg1[1]
        
        if (edx_3 == 0x42 && *(ecx_2 + 0x20) != 0)
            char ecx_6 = (arg1[2]).b
            int32_t eax_21
            
            if ((ecx_6 & 2) == 0)
                eax_21 = data_ccf6a0
            else
                eax_21.b = data_ccf6a0 == 0
            
            if ((ecx_6 & 1) == 0)
                if (eax_21 == 0)
                    data_ccf6a0 = 1
                    eax_21.b = 1
                    return eax_21
                
                data_ccf6a0 = eax_21 + 6
                
                if (eax_21 + 6 u>= 0xe3)
                    data_ccf6a0 = 0
                    eax_22.b = 1
                    return eax_22
            else
                if (eax_21 == 0)
                    data_ccf6a0 = 0xdd
                    eax_21.b = 1
                    return eax_21
                
                data_ccf6a0 = eax_21 - 6
                
                if (eax_21 - 6 s<= 0)
                    data_ccf6a0 = 0
            
            eax_22.b = 1
            return eax_22
        
        void* edi_2 = &arg1[1]
        
        if (edx_3 == 0x41)
            edi_2 = &arg1[1]
            
            if (arg1[2] == 2)
                edi_2 = &arg1[1]
                
                if (*(ecx_2 + 0x20) != 0)
                    int32_t* ecx_7 = data_171e6b4
                    data_1724034 = 1
                    data_1724038 = 0
                    sub_6a2bc0(ecx_7)
                    ecx_2 = data_147abe8
                    edi_2 = &arg1[1]
        
        if (*arg1 == 1)
            if (*edi_2 == 0x4d && arg1[2] == 2 && *(ecx_2 + 0x20) != 0)
                sub_5ac6a0()
                ecx_2 = data_147abe8
            
            if (*arg1 == 1 && *edi_2 == 0x49 && arg1[2] == 2 && *(ecx_2 + 0x20) != 0)
                sub_5ed690()
                ecx_2 = data_147abe8

eax = data_cc8d5c

if (eax == 0)
label_624c2d:
    var_54_1 = "GetClient"
    var_58 = 0x7b
    var_5c = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx = "gClient"
    goto label_624f94

if (*(eax + 0x5068) == 0)
    eax.b = 0
    return eax

int32_t eax_23 = *arg1
int128_t var_30

if (eax_23 != 9)
    if (eax_23 == 1 && arg1[1] == 0x1b)
        if (sub_5cbf20().b != 0)
            eax_22.b = 1
            return eax_22
        
        ecx_2 = data_147abe8
else if (data_8db664 == 0x28)
    int32_t eax_24 = data_8db668
    
    if (eax_24 != 0)
        float xmm0_10 = _mm_cvtepi32_ps(zx.o(arg1[3]))
        int32_t eax_25 = sub_67bd70(eax_24, "tbl_logEntries")
        uint32_t eax_26
        
        if (eax_25 != 0)
            eax_26 = zx.d(eax_25.w)
        
        int128_t xmm0_12
        
        if (eax_25 == 0 || eax_26 u>= data_c23bac
                || *(eax_26 * 0x18d0 + data_c23ba8 + 0x18c8) != eax_25)
            var_30 = data_bf21e8
            xmm0_12 = data_bf21f8
        else
            uint32_t eax_29 = sub_64e7a0(eax_25)
            var_30 = *(eax_29 + 0x1620)
            xmm0_12 = *(eax_29 + 0x1630)
        
        int128_t var_20 = xmm0_12
        uint32_t eax_30 = sub_64e7a0(eax_25)
        float xmm2_4 = xmm0_10 f* var_30.d * 150f * 0.00833333377f f+ *(eax_30 + 0x1390)
        var_38 = xmm0_10 * 0f f* var_30.d * 150f * 0.00833333377f f+ *(eax_30 + 0x138c)
        int32_t* eax_31 = sub_64e7a0(eax_25)
        eax_31[0x4e3] = var_38
        eax_31[0x4e4] = xmm2_4
        sub_67a770(eax_31, nullptr)
        sub_65bf00(eax_31)
        void* eax_32
        eax_32.b = 1
        return eax_32

eax = *arg1
ecx_2.b = *(ecx_2 + 0x20)

if (eax == 1 && arg1[1] == 0x5a && arg1[2] == 2)
    if (sub_624730(ecx_2).b == 0)
        eax_22.b = 1
        return eax_22
    
    eax = sub_4b9510()
    
    if (eax.b == 0)
        void* ecx_15 = data_cc8d5c
        
        if (ecx_15 == 0)
            goto label_624c2d
        
        eax = sub_5a0c70(*(ecx_15 + 0x7590), &var_38)
        
        if (eax != 0xffffffff)
            sub_600830(eax, var_38)
            uint32_t eax_36
            eax_36.b = 1
            return eax_36
        
        var_54_1 = "GameSpecfic_HandleInput"
        var_58 = 0xec21
        var_5c = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        ecx = "idx != -1"
        goto label_624f94
    
    int32_t eax_33 = sub_5a0c70(0xffffffff, &var_38)
    sub_5cbf20()
    sub_4d46e0(2, 0)
    sub_4d46e0(5, data_8db664 != 0x29)
    int32_t* eax_34 = sub_4b9480()
    sub_4b4cc0(eax_34, eax_33, eax_34, &var_30)
    uint32_t eax_35
    eax_35.b = 1
    return eax_35

if (ecx_2.b == 0 || eax != 0)
    eax.b = 0
    return eax

eax = arg1[1]

if (eax != 0x72)
    if (eax == 0x75)
        eax.b = 1
        data_8c4155 = data_8c4155 == 0
        return eax
    
    if (eax == 0x67)
        eax.b = 1
        data_8c4156 = data_8c4156 == 0
        return eax
    
    if (eax != 0x73)
        eax.b = 0
        return eax
    
    sub_4c44f0()
    int32_t* eax_39
    eax_39.b = 1
    return eax_39

int32_t eax_37 = data_b809e4 * 0x1c30
int32_t esi_5 = 0
void* ecx_18 = data_b809e0
int32_t* edx_10 = &data_b809e0
var_38 = &data_b809e0
eax_22 = eax_37 + ecx_18

if (ecx_18 u>= eax_22)
label_624eb7:
    ecx_18 = 0xffffffff
else
    while ((*(ecx_18 + 0x1c28) & 0xffff0000) == 0)
        ecx_18 += 0x1c30
        
        if (ecx_18 u>= eax_22)
            goto label_624eb7

void* var_34 = ecx_18

if (ecx_18 != 0xffffffff)
    while (true)
        if (*(ecx_18 + 0xa4) == 0x3ea)
            *(ecx_18 + 0x128) = 1
            *(ecx_18 + 0x134) = 5
            *(ecx_18 + 0x130) = esi_5
            int32_t eax_38 = data_b604e0
            
            if (eax_38 == 0xffffffff)
                eax_38 = 0
            
            if (*(ecx_18 + 0xa0) != eax_38)
                esi_5 += 1
        
        sub_6376d0(edx_10, &var_34)
        ecx_18 = var_34
        
        if (ecx_18 == 0xffffffff)
            break
        
        edx_10 = var_38

eax_22.b = 1
return eax_22

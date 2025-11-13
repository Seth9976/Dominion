// 函数: sub_5f7120
// 地址: 0x5f7120
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76a490
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_e0 = ebx
int32_t var_e4 = arg1
int32_t __saved_ebp
int32_t var_ec = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_b8
sub_63d720(&var_b8, "btnBack")
char* const ecx_1 = &data_801800
char* eax_3 = var_b8

if (eax_3 != 0)
    ecx_1 = eax_3

char* edx = *(arg2 + 4)
int32_t ecx_3

while (true)
    ebx.b = *edx
    char temp0_1 = *ecx_1
    bool c_1 = ebx.b u< temp0_1
    
    if (ebx.b == temp0_1)
        if (ebx.b == 0)
            ecx_3 = 0
            break
        
        ebx.b = edx[1]
        char temp1_1 = ecx_1[1]
        c_1 = ebx.b u< temp1_1
        
        if (ebx.b == temp1_1)
            edx = &edx[2]
            ecx_1 = &ecx_1[2]
            
            if (ebx.b != 0)
                continue
            
            ecx_3 = 0
            break
    
    ecx_3 = sbb.d(ecx_1, ecx_1, c_1) | 1
    break

if (ecx_3 == 0 || *(arg2 + 0x18) == 2)
    ebx.b = 1
else
    ebx.b = 0

int32_t var_8_1 = 0

if (data_cf65bc != 0 && eax_3 != 0 && *eax_3 != 0)
    int32_t* eax_4 = sub_63d4e0(&var_b8)
    int32_t temp2_1 = eax_4[1]
    eax_4[1] -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_4, eax_4[3] + 0x10)
        var_b8 = &data_801800

int32_t var_8_2 = 0xffffffff

if (ebx.b != 0)
    edx.b = 0
    sub_4d46e0(7, edx.b)

char* var_d0
sub_63d720(&var_d0, "btn_taptip")
char* eax_5 = var_d0
char* const ecx_7 = &data_801800
char* edx_3 = *(arg2 + 4)

if (eax_5 != 0)
    ecx_7 = eax_5

int32_t esi

while (true)
    ebx.b = *edx_3
    char temp3_1 = *ecx_7
    bool c_2 = ebx.b u< temp3_1
    
    if (ebx.b == temp3_1)
        if (ebx.b == 0)
            esi = 0
            break
        
        ebx.b = edx_3[1]
        char temp4_1 = ecx_7[1]
        c_2 = ebx.b u< temp4_1
        
        if (ebx.b == temp4_1)
            edx_3 = &edx_3[2]
            ecx_7 = &ecx_7[2]
            
            if (ebx.b != 0)
                continue
            
            esi = 0
            break
    
    esi = sbb.d(arg1, arg1, c_2) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && eax_5 != 0 && *eax_5 != 0)
    int32_t* eax_6 = sub_63d4e0(&var_d0)
    int32_t temp5_1 = eax_6[1]
    eax_6[1] -= 1
    
    if (temp5_1 == 1)
        sub_64c080(eax_6, eax_6[3] + 0x10)
        var_d0 = &data_801800

int32_t var_8_4 = 0xffffffff

if (esi == 0)
    edx_3.b = 0
    sub_4d46e0(esi + 7, edx_3.b)
    bool cond:0_1 = data_ccf6e0 == 1
    data_cc8d80 = esi
    data_cc8d88 = 0x7f1
    data_8db660 = 0x15
    data_cc8d84 = 0x11
    
    if (not(cond:0_1))
        data_cc8d84 = 0x13

char* var_bc
sub_63d720(&var_bc, "btn_expansions")
char* eax_7 = var_bc
char* const ecx_12 = &data_801800
char* edx_6 = *(arg2 + 4)

if (eax_7 != 0)
    ecx_12 = eax_7

int32_t esi_2

while (true)
    ebx.b = *edx_6
    char temp6_1 = *ecx_12
    bool c_3 = ebx.b u< temp6_1
    
    if (ebx.b == temp6_1)
        if (ebx.b == 0)
            esi_2 = 0
            break
        
        ebx.b = edx_6[1]
        char temp7_1 = ecx_12[1]
        c_3 = ebx.b u< temp7_1
        
        if (ebx.b == temp7_1)
            edx_6 = &edx_6[2]
            ecx_12 = &ecx_12[2]
            
            if (ebx.b != 0)
                continue
            
            esi_2 = 0
            break
    
    esi_2 = sbb.d(esi, esi, c_3) | 1
    break

int32_t var_8_5 = 2

if (data_cf65bc != 0 && eax_7 != 0 && *eax_7 != 0)
    char* eax_8 = sub_63d4e0(&var_bc)
    int32_t temp8_1 = *(eax_8 + 4)
    *(eax_8 + 4) -= 1
    
    if (temp8_1 == 1)
        sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
        var_bc = &data_801800

int32_t var_8_6 = 0xffffffff

if (esi_2 == 0)
    bool cond:1_1 = data_ccf6e0 == 1
    data_8db6b0 = 0x7ee
    data_ccf6dc = 1
    
    if (not(cond:1_1))
        data_ccf6dc = 2

char* var_c0
sub_63d720(&var_c0, "btn_plusSets")
char* eax_9 = var_c0
char* const ecx_16 = &data_801800
char* edx_9 = *(arg2 + 4)

if (eax_9 != 0)
    ecx_16 = eax_9

int32_t esi_4

while (true)
    ebx.b = *edx_9
    char temp9_1 = *ecx_16
    bool c_4 = ebx.b u< temp9_1
    
    if (ebx.b == temp9_1)
        if (ebx.b == 0)
            esi_4 = 0
            break
        
        ebx.b = edx_9[1]
        char temp10_1 = ecx_16[1]
        c_4 = ebx.b u< temp10_1
        
        if (ebx.b == temp10_1)
            edx_9 = &edx_9[2]
            ecx_16 = &ecx_16[2]
            
            if (ebx.b != 0)
                continue
            
            esi_4 = 0
            break
    
    esi_4 = sbb.d(esi_2, esi_2, c_4) | 1
    break

int32_t var_8_7 = 3

if (data_cf65bc != 0 && eax_9 != 0 && *eax_9 != 0)
    char* eax_10 = sub_63d4e0(&var_c0)
    int32_t temp11_1 = *(eax_10 + 4)
    *(eax_10 + 4) -= 1
    
    if (temp11_1 == 1)
        sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
        var_c0 = &data_801800

int32_t var_8_8 = 0xffffffff

if (esi_4 == 0)
    void* eax_11 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    int32_t edx_12 = *(eax_11 + 0x71f0)
    int32_t eax_12 = 1
    
    if (*(eax_11 + 0x71e0) != esi_4)
        eax_12 = 4
    
    int32_t var_dc_1 = eax_12
    int32_t eax_13
    
    if (edx_12 == 0xffffffff)
        eax_13 = 0
    else if (edx_12 != 0x10)
        eax_13 = edx_12 + 1
    else
        eax_13 = 0xffffffff
    
    *(eax_11 + 0x71f0) = eax_13
    data_cc8dc8
    sub_4d8ad0(esi_4)

int32_t* var_c8
sub_63d720(&var_c8, "btn_minusSets")
int32_t* result = var_c8
char* const result_2 = &data_801800
char* edx_13 = *(arg2 + 4)

if (result != 0)
    result_2 = result

int32_t* i_1
char* esi_6

while (true)
    i_1.b = *edx_13
    char temp12_1 = *result_2
    bool c_5 = i_1.b u< temp12_1
    
    if (i_1.b == temp12_1)
        if (i_1.b == 0)
            esi_6 = nullptr
            break
        
        i_1.b = edx_13[1]
        char temp13_1 = result_2[1]
        c_5 = i_1.b u< temp13_1
        
        if (i_1.b == temp13_1)
            edx_13 = &edx_13[2]
            result_2 = &result_2[2]
            
            if (i_1.b != 0)
                continue
            
            esi_6 = nullptr
            break
    
    esi_6 = sbb.d(esi_4, esi_4, c_5) | 1
    break

int32_t var_8_9 = 4

if (data_cf65bc != 0 && result != 0 && *result != 0)
    result = sub_63d4e0(&var_c8)
    int32_t temp14_1 = result[1]
    result[1] -= 1
    
    if (temp14_1 == 1)
        result = sub_64c080(result, result[3] + 0x10)
        var_c8 = &data_801800

int32_t var_8_10 = 0xffffffff

if (esi_6 == 0)
    void* ecx_28 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x71e0
    int32_t eax_15 = *(ecx_28 + 0x10)
    void* eax_16
    
    if (eax_15 == 0)
        eax_16 = 0xffffffff
    else if (eax_15 != 0xffffffff)
        eax_16 = eax_15 - 1
    else
        eax_16 = &esi_6[0x10]
    
    *(ecx_28 + 0x10) = eax_16
    data_cc8dc8
    result = sub_4d8ad0(esi_6)

char* edi_1 = &data_be46f8
var_b8 = nullptr
var_bc = &data_be46f8
char const* const var_f8
int32_t var_f4
char const* const var_f0
char* ecx_52

while (true)
    char* edx_17 = *edi_1
    
    if (edx_17 == 0)
        var_f0 = "XString::XString"
        var_f4 = 0x94
        var_f8 = "C:\x\ax2017\Engine\xString.cpp"
        ecx_52 = &data_871e0c
        break
    
    int32_t* result_1
    sub_63d720(&result_1, edx_17)
    int32_t* result_3 = &data_801800
    void* edx_18 = *(arg2 + 4)
    result = result_1
    
    if (result != 0)
        result_3 = result
    
    while (true)
        i_1.b = *edx_18
        char temp15_1 = *result_3
        bool c_6 = i_1.b u< temp15_1
        
        if (i_1.b == temp15_1)
            if (i_1.b == 0)
                esi_6 = nullptr
                break
            
            i_1.b = *(edx_18 + 1)
            char temp16_1 = *(result_3 + 1)
            c_6 = i_1.b u< temp16_1
            
            if (i_1.b == temp16_1)
                edx_18 += 2
                result_3 += 2
                
                if (i_1.b != 0)
                    continue
                
                esi_6 = nullptr
                break
        
        esi_6 = sbb.d(esi_6, esi_6, c_6) | 1
        break
    
    int32_t var_8_11 = 5
    
    if (data_cf65bc != 0 && result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp17_1 = result[1]
        result[1] -= 1
        
        if (temp17_1 == 1)
            result = sub_64c080(result, result[3] + 0x10)
            result_1 = &data_801800
    
    int32_t var_8_12 = 0xffffffff
    
    if (esi_6 == 0)
        result = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x71e0
        
        switch (*(arg2 + 8))
            case 0
                char* ecx_37 = var_b8
                *result = ecx_37
                
                if (ecx_37 != 0)
                    int32_t edi_2 = result[2]
                    char* edx_21 = nullptr
                    int32_t esi_9 = 1
                    i_1.b = 0
                    int32_t var_b4[0x28]
                    
                    for (int128_t* const i = &data_77fea0; i != &data_77fee8; )
                        int32_t ecx_38 = *i
                        
                        if ((edi_2 & esi_9) != 0)
                            if (ecx_38 != 0x13)
                                var_b4[edx_21] = ecx_38
                                edx_21 = &edx_21[1]
                            else
                                i_1.b = 1
                        
                        i += 4
                        esi_9 *= 2
                    
                    if (i_1.b != 0)
                        var_b4[edx_21] = 0x13
                        edx_21 = &edx_21[1]
                    
                    esi_6 = &edx_21[0xffffffff]
                    i_1 = &data_77fea0
                    
                    if ((&var_b8)[edx_21] != 0x13)
                        esi_6 = edx_21
                    
                    var_c8 = &data_77fea0
                    var_c0 = esi_6
                    
                    do
                        int32_t edi_3 = *i_1
                        
                        if (esi_6 s>= 4)
                            break
                        
                        if (edi_3 != 0x13)
                            if (edi_3 == 2)
                                goto label_5f7748
                            
                            void* var_d8
                            void* var_c4
                            uint32_t ebx_1 = sub_4daf40(&var_c4, &var_d8)
                            int32_t esi_10 = 0
                            uint32_t eax_19
                            
                            if (ebx_1 s<= 0)
                            label_5f771d:
                                eax_19.b = 0
                            else
                                while (true)
                                    if (sub_4db700(*(var_c4 + (esi_10 << 2)), edi_3).b != 0)
                                        eax_19.b = 1
                                        break
                                    
                                    esi_10 += 1
                                    
                                    if (esi_10 s>= ebx_1)
                                        goto label_5f771d
                            
                            i_1 = var_c8
                            
                            if (eax_19.b != 0)
                                esi_6 = var_c0
                            label_5f7748:
                                
                                if (sub_5fb7d0(*(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x71e8), 
                                        edi_3) == 0)
                                    sub_5fb880(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x71e8, edi_3)
                                    var_c0 = &esi_6[1]
                        
                        esi_6 = var_c0
                        i_1 = &i_1[1]
                        var_c8 = i_1
                    while (i_1 != &data_77fee8)
                    
                    edi_1 = var_bc
                
                data_cc8dc8
                result = sub_4d8ad0(esi_6)
            case 1
                result[3] = var_b8
                data_cc8dc8
                result = sub_4d8ad0(esi_6)
            default
                var_f0 = "DomMatchmakingSettingsClick"
                var_f4 = 0x83fb
                var_f8 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                ecx_52 = "Halt"
                break
    
    var_b8 = &var_b8[1]
    edi_1 = &edi_1[4]
    var_bc = edi_1
    
    if (edi_1 == &data_be4708)
        result.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(result)
        return result

sub_63b870(result, &data_801800, ecx_52, var_f8, var_f4, var_f0)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

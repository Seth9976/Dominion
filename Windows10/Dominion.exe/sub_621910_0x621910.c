// 函数: sub_621910
// 地址: 0x621910
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?GetCoreCount@ResourceManager@details@Concurrency@@SAIXZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* const result_1 = arg3
int32_t ebx
int32_t var_18 = ebx
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_63d720(&result_1, "btnBack")
char* const result_2 = &data_801800
char* result_3 = result_1
char* const result_8 = &data_801800
char* edx = *(arg4 + 4)

if (result_3 != 0)
    result_8 = result_3

int32_t ecx_2

while (true)
    ebx.b = *edx
    char temp0_1 = *result_8
    bool c_1 = ebx.b u< temp0_1
    
    if (ebx.b == temp0_1)
        if (ebx.b == 0)
            ecx_2 = 0
            break
        
        ebx.b = edx[1]
        char temp1_1 = result_8[1]
        c_1 = ebx.b u< temp1_1
        
        if (ebx.b == temp1_1)
            edx = &edx[2]
            result_8 = &result_8[2]
            
            if (ebx.b != 0)
                continue
            
            ecx_2 = 0
            break
    
    ecx_2 = sbb.d(result_8, result_8, c_1) | 1
    break

if (ecx_2 == 0 || *(arg4 + 0x18) == 2)
    ebx.b = 1
else
    ebx.b = 0

int32_t var_8_1 = 0

if (data_cf65bc != 0 && result_3 != 0 && *result_3 != 0)
    char* eax_3 = sub_63d4e0(&result_1)
    int32_t temp2_1 = *(eax_3 + 4)
    *(eax_3 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_2 = 0xffffffff

if (ebx.b != 0)
    data_8db660 = 3

sub_63d720(&result_1, "btn_tabGrand")
char* const result_4 = result_1
char* const result_9 = &data_801800
char* edx_3 = *(arg4 + 4)

if (result_4 != 0)
    result_9 = result_4

int32_t edi_1

while (true)
    ebx.b = *edx_3
    char temp3_1 = *result_9
    bool c_2 = ebx.b u< temp3_1
    
    if (ebx.b == temp3_1)
        if (ebx.b == 0)
            edi_1 = 0
            break
        
        ebx.b = edx_3[1]
        char temp4_1 = result_9[1]
        c_2 = ebx.b u< temp4_1
        
        if (ebx.b == temp4_1)
            edx_3 = &edx_3[2]
            result_9 = &result_9[2]
            
            if (ebx.b != 0)
                continue
            
            edi_1 = 0
            break
    
    edi_1 = sbb.d(arg4, arg4, c_2) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && result_4 != 0 && *result_4 != 0)
    char* eax_4 = sub_63d4e0(&result_1)
    int32_t temp5_1 = *(eax_4 + 4)
    *(eax_4 + 4) -= 1
    
    if (temp5_1 == 1)
        sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_4 = 0xffffffff

if (edi_1 == 0)
    *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x3508) = 1
    data_cc8dc8
    sub_4d8ad0(&data_801800)

sub_63d720(&result_1, "btn_grand_campaign")
char* const result_10 = &data_801800
char* edx_6 = *(arg4 + 4)
char* const result_5 = result_1

if (result_5 != 0)
    result_10 = result_5

int32_t edi_3

while (true)
    ebx.b = *edx_6
    char temp6_1 = *result_10
    bool c_3 = ebx.b u< temp6_1
    
    if (ebx.b == temp6_1)
        if (ebx.b == 0)
            edi_3 = 0
            break
        
        ebx.b = edx_6[1]
        char temp7_1 = result_10[1]
        c_3 = ebx.b u< temp7_1
        
        if (ebx.b == temp7_1)
            edx_6 = &edx_6[2]
            result_10 = &result_10[2]
            
            if (ebx.b != 0)
                continue
            
            edi_3 = 0
            break
    
    edi_3 = sbb.d(edi_1, edi_1, c_3) | 1
    break

int32_t var_8_5 = 2

if (data_cf65bc != 0 && result_5 != 0 && *result_5 != 0)
    char* eax_7 = sub_63d4e0(&result_1)
    int32_t temp8_1 = *(eax_7 + 4)
    *(eax_7 + 4) -= 1
    
    if (temp8_1 == 1)
        sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_6 = 0xffffffff

if (edi_3 == 0)
    sub_61e070(0)
    data_8db660 = 0x7e3

sub_63d720(&result_1, "btnExp")
char* const result_11 = &data_801800
char* edx_9 = *(arg4 + 4)
char* const result_6 = result_1

if (result_6 != 0)
    result_11 = result_6

int32_t edi_5

while (true)
    ebx.b = *edx_9
    char temp9_1 = *result_11
    bool c_4 = ebx.b u< temp9_1
    
    if (ebx.b == temp9_1)
        if (ebx.b == 0)
            edi_5 = 0
            break
        
        ebx.b = edx_9[1]
        char temp10_1 = result_11[1]
        c_4 = ebx.b u< temp10_1
        
        if (ebx.b == temp10_1)
            edx_9 = &edx_9[2]
            result_11 = &result_11[2]
            
            if (ebx.b != 0)
                continue
            
            edi_5 = 0
            break
    
    edi_5 = sbb.d(edi_3, edi_3, c_4) | 1
    break

int32_t var_8_7 = 3

if (data_cf65bc != 0 && result_6 != 0 && *result_6 != 0)
    char* eax_9 = sub_63d4e0(&result_1)
    int32_t temp11_1 = *(eax_9 + 4)
    *(eax_9 + 4) -= 1
    
    if (temp11_1 == 1)
        sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_8 = 0xffffffff

if (edi_5 == 0)
    int32_t edx_12 = *(arg4 + 8)
    
    if (edx_12 + 1 s>= 0x12)
        sub_63b870(edx_12 + 1, &data_801800, "info.index + 1 < numDefs", 
            "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0xe438, "CampaignHomeDlgClick")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    *(edx_12 * 0x1c + &data_77fcc4)
    sub_61e1a0()
    data_8db660 = 0x7e3

sub_63d720(&result_1, "btn_tabExpansions")
char* const result_12 = &data_801800
char* edx_13 = *(arg4 + 4)
char* const result_7 = result_1

if (result_7 != 0)
    result_12 = result_7

int32_t edi_7

while (true)
    ebx.b = *edx_13
    char temp12_1 = *result_12
    bool c_5 = ebx.b u< temp12_1
    
    if (ebx.b == temp12_1)
        if (ebx.b == 0)
            edi_7 = 0
            break
        
        ebx.b = edx_13[1]
        char temp13_1 = result_12[1]
        c_5 = ebx.b u< temp13_1
        
        if (ebx.b == temp13_1)
            edx_13 = &edx_13[2]
            result_12 = &result_12[2]
            
            if (ebx.b != 0)
                continue
            
            edi_7 = 0
            break
    
    edi_7 = sbb.d(edi_5, edi_5, c_5) | 1
    break

int32_t var_8_9 = 4

if (data_cf65bc != 0 && result_7 != 0 && *result_7 != 0)
    char* eax_13 = sub_63d4e0(&result_1)
    int32_t temp14_1 = *(eax_13 + 4)
    *(eax_13 + 4) -= 1
    
    if (temp14_1 == 1)
        sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)

int32_t var_8_10 = 0xffffffff

if (edi_7 == 0)
    *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x3508) = edi_7
    data_cc8dc8
    sub_4d8ad0(&data_801800)

sub_63d720(&result_1, "btn_campaign_settings")
char* ecx_27 = *(arg4 + 4)
char* result = result_1

if (result != 0)
    result_2 = result

int32_t esi_1

while (true)
    char edx_16 = *ecx_27
    char temp15_1 = *result_2
    bool c_6 = edx_16 u< temp15_1
    
    if (edx_16 == temp15_1)
        if (edx_16 == 0)
            esi_1 = 0
            break
        
        edx_16 = ecx_27[1]
        char temp16_1 = result_2[1]
        c_6 = edx_16 u< temp16_1
        
        if (edx_16 == temp16_1)
            ecx_27 = &ecx_27[2]
            result_2 = &result_2[2]
            
            if (edx_16 != 0)
                continue
            
            esi_1 = 0
            break
    
    esi_1 = sbb.d(result_2, result_2, c_6) | 1
    break

int32_t var_8_11 = 5

if (data_cf65bc != 0 && result != 0 && *result != 0)
    result = sub_63d4e0(&result_1)
    int32_t temp17_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp17_1 == 1)
        sub_64c080(result, *(result + 0xc) + 0x10)

if (esi_1 == 0)
    data_ccf6dc = 3
    data_8db6b0 = 0x7ee

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result

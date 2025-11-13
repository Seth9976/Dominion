// 函数: sub_5f7910
// 地址: 0x5f7910
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?CreateSchedulerProxy@ResourceManager@details@Concurrency@@AAEPAVSchedulerProxy@23@PAUIScheduler@3@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_1c = ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result_1
sub_63d720(&result_1, "btnBack")
char* const result_2 = &data_801800
char* result_3 = result_1
char* const result_6 = &data_801800
char* edx = *(arg1 + 4)

if (result_3 != 0)
    result_6 = result_3

int32_t ecx_2

while (true)
    ebx.b = *edx
    char temp0_1 = *result_6
    bool c_1 = ebx.b u< temp0_1
    
    if (ebx.b == temp0_1)
        if (ebx.b == 0)
            ecx_2 = 0
            break
        
        ebx.b = edx[1]
        char temp1_1 = result_6[1]
        c_1 = ebx.b u< temp1_1
        
        if (ebx.b == temp1_1)
            edx = &edx[2]
            result_6 = &result_6[2]
            
            if (ebx.b != 0)
                continue
            
            ecx_2 = 0
            break
    
    ecx_2 = sbb.d(result_6, result_6, c_1) | 1
    break

if (ecx_2 == 0 || *(arg1 + 0x18) == 2)
    ebx.b = 1
else
    ebx.b = 0

int32_t var_8_1 = 0

if (data_cf65bc != 0 && result_3 != 0 && *result_3 != 0)
    int32_t* eax_3 = sub_63d4e0(&result_1)
    int32_t temp2_1 = eax_3[1]
    eax_3[1] -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_3, eax_3[3] + 0x10)

int32_t var_8_2 = 0xffffffff

if (ebx.b != 0)
    edx.b = 0
    sub_4d46e0(7, edx.b)

void* eax_4 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
sub_63d720(&result_1, "btn_plusGames")
char* result_5 = result_1
char* const result_8 = &data_801800
char* edi_1 = *(arg1 + 4)

if (result_5 != 0)
    result_8 = result_5

uint32_t edi_3

while (true)
    char eax_5 = *edi_1
    char temp3_1 = *result_8
    bool c_2 = eax_5 u< temp3_1
    
    if (eax_5 == temp3_1)
        if (eax_5 == 0)
            edi_3 = 0
            break
        
        eax_5 = edi_1[1]
        char temp4_1 = result_8[1]
        c_2 = eax_5 u< temp4_1
        
        if (eax_5 == temp4_1)
            edi_1 = &edi_1[2]
            result_8 = &result_8[2]
            
            if (eax_5 != 0)
                continue
            
            edi_3 = 0
            break
    
    edi_3 = sbb.d(edi_1, edi_1, c_2) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && result_5 != 0 && *result_5 != 0)
    char* eax_6 = sub_63d4e0(&result_1)
    int32_t temp5_1 = *(eax_6 + 4)
    *(eax_6 + 4) -= 1
    
    if (temp5_1 == 1)
        sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)

int32_t var_8_4 = 0xffffffff

if (edi_3 == 0)
    int32_t eax_7
    uint32_t edx_5
    eax_7, edx_5 = _Xtime_get_ticks(eax_2)
    uint32_t eax_8
    int32_t edx_6
    eax_8, edx_6 = __alldiv(eax_7, edx_5, 0x989680, edi_3)
    *(eax_4 + 0x4288) = eax_8
    int32_t eax_10 = *(eax_4 + 0x71f8) + 1
    *(eax_4 + 0x428c) = edx_6
    
    if (eax_10 s< 2)
        eax_10 = 2
    
    *(eax_4 + 0x71f8) = eax_10
    data_cc8dc8
    sub_4d8ad0(&data_801800)
    sub_4c5ab0()

sub_63d720(&result_1, "btn_minusGames")
char* const result_7 = &data_801800
void* edx_7 = *(arg1 + 4)
char* result_4 = result_1

if (result_4 != 0)
    result_7 = result_4

uint32_t edi_4

while (true)
    void* ebx_1
    ebx_1.b = *edx_7
    char temp6_1 = *result_7
    bool c_3 = ebx_1.b u< temp6_1
    
    if (ebx_1.b == temp6_1)
        if (ebx_1.b == 0)
            edi_4 = 0
            break
        
        ebx_1.b = *(edx_7 + 1)
        char temp7_1 = result_7[1]
        c_3 = ebx_1.b u< temp7_1
        
        if (ebx_1.b == temp7_1)
            edx_7 += 2
            result_7 = &result_7[2]
            
            if (ebx_1.b != 0)
                continue
            
            edi_4 = 0
            break
    
    edi_4 = sbb.d(edi_3, edi_3, c_3) | 1
    break

int32_t var_8_5 = 2

if (data_cf65bc != 0 && result_4 != 0 && *result_4 != 0)
    char* eax_12 = sub_63d4e0(&result_1)
    int32_t temp8_1 = *(eax_12 + 4)
    *(eax_12 + 4) -= 1
    
    if (temp8_1 == 1)
        sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)

int32_t var_8_6 = 0xffffffff

if (edi_4 == 0)
    int32_t eax_13
    uint32_t edx_10
    eax_13, edx_10 = _Xtime_get_ticks(eax_2)
    uint32_t eax_14
    int32_t edx_11
    eax_14, edx_11 = __alldiv(eax_13, edx_10, 0x989680, edi_4)
    *(eax_4 + 0x71f8) -= 1
    *(eax_4 + 0x4288) = eax_14
    *(eax_4 + 0x428c) = edx_11
    data_cc8dc8
    sub_4d8ad0(&data_801800)
    sub_4c5ab0()

sub_63d720(&result_1, "btn_join_async")
char* ecx_17 = *(arg1 + 4)
char* result = result_1

if (result != 0)
    result_2 = result

int32_t esi_1

while (true)
    char edx_12 = *ecx_17
    char temp9_1 = *result_2
    bool c_4 = edx_12 u< temp9_1
    
    if (edx_12 == temp9_1)
        if (edx_12 == 0)
            esi_1 = 0
            break
        
        edx_12 = ecx_17[1]
        char temp10_1 = result_2[1]
        c_4 = edx_12 u< temp10_1
        
        if (edx_12 == temp10_1)
            ecx_17 = &ecx_17[2]
            result_2 = &result_2[2]
            
            if (edx_12 != 0)
                continue
            
            esi_1 = 0
            break
    
    esi_1 = sbb.d(result_2, result_2, c_4) | 1
    break

int32_t var_8_7 = 3

if (data_cf65bc != 0 && result != 0 && *result != 0)
    result = sub_63d4e0(&result_1)
    int32_t temp11_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp11_1 == 1)
        sub_64c080(result, *(result + 0xc) + 0x10)

int32_t var_8_8 = 0xffffffff

if (esi_1 == 0)
    sub_5f7850()

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result

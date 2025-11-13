// 函数: sub_5fd110
// 地址: 0x5fd110
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?_mbsrtowcs_helper@@YAIPA_WPAPBDIPAU_Mbstatet@@AAV__crt_cached_ptd_host@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* const result_11
char* const result_12 = result_11
int32_t var_2c = arg1
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result_1
sub_63d720(&result_1, "btnBack")
void* edi = arg2
char* const result_8 = &data_801800
char* result_3 = result_1

if (result_3 != 0)
    result_8 = result_3

char* edx = *(edi + 4)
int32_t ecx_2

while (true)
    result_11.b = *edx
    char temp0_1 = *result_8
    bool c_1 = result_11.b u< temp0_1
    
    if (result_11.b == temp0_1)
        if (result_11.b == 0)
            ecx_2 = 0
            break
        
        result_11.b = edx[1]
        char temp1_1 = result_8[1]
        c_1 = result_11.b u< temp1_1
        
        if (result_11.b == temp1_1)
            edx = &edx[2]
            result_8 = &result_8[2]
            
            if (result_11.b != 0)
                continue
            
            ecx_2 = 0
            break
    
    ecx_2 = sbb.d(result_8, result_8, c_1) | 1
    break

if (ecx_2 == 0 || *(edi + 0x18) == 2)
    result_11.b = 1
else
    result_11.b = 0

int32_t var_8_1 = 0

if (data_cf65bc != 0 && result_3 != 0 && *result_3 != 0)
    int32_t* eax_3 = sub_63d4e0(&result_1)
    int32_t temp2_1 = eax_3[1]
    eax_3[1] -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_3, eax_3[3] + 0x10)
        result_1 = &data_801800

int32_t var_8_2 = 0xffffffff

if (result_11.b != 0)
    edx.b = 0
    sub_4d46e0(7, edx.b)

sub_63d720(&result_1, "BtnExport")
char* result_4 = result_1
char* const result_9 = &data_801800
char* edx_3 = *(edi + 4)

if (result_4 != 0)
    result_9 = result_4

void* esi

while (true)
    result_11.b = *edx_3
    char temp3_1 = *result_9
    bool c_2 = result_11.b u< temp3_1
    
    if (result_11.b == temp3_1)
        if (result_11.b == 0)
            esi = nullptr
            break
        
        result_11.b = edx_3[1]
        char temp4_1 = result_9[1]
        c_2 = result_11.b u< temp4_1
        
        if (result_11.b == temp4_1)
            edx_3 = &edx_3[2]
            result_9 = &result_9[2]
            
            if (result_11.b != 0)
                continue
            
            esi = nullptr
            break
    
    esi = sbb.d(arg1, arg1, c_2) | 1
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

if (esi == 0)
    sub_5fcd10(esi)
    int32_t var_8_5 = 2
    result_11 = &data_801800
    char* result_5 = result_1
    
    if (result_5 != 0)
        result_11 = result_5
    
    char* result_13 = result_11
    
    do
        result_5.b = *result_13
        result_13 = &result_13[1]
    while (result_5.b != 0)
    
    esi = result_13 - &result_13[1] + 1
    HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, esi)
    memcpy(GlobalLock(hMem), result_11, esi)
    GlobalUnlock(hMem)
    OpenClipboard(nullptr)
    EmptyClipboard()
    SetClipboardData(1, hMem)
    BOOL eax_6 = CloseClipboard()
    int32_t ecx_9
    
    if (data_8db6b4 != 0x7f0)
        ecx_9 = 0
        
        if (data_8db6c4 == 0x7f0)
            ecx_9 = data_8db6c8
    else
        ecx_9 = data_8db6b8
    
    int32_t var_38_5 = 0
    int32_t var_3c_2 = ecx_9
    sub_67cd20(eax_6, "exportToClipboard", ecx_9.b)
    int32_t var_8_6 = 3
    
    if (data_cf65bc != 0)
        char* result_6 = result_1
        
        if (result_6 != 0 && *result_6 != 0)
            char* eax_7 = sub_63d4e0(&result_1)
            int32_t temp10_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp10_1 == 1)
                sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
                result_1 = &data_801800
    
    edi = arg2
    int32_t var_8_7 = 0xffffffff

sub_63d720(&result_1, "BtnSave")
char* result_7 = result_1
char* const result_10 = &data_801800
char* edx_8 = *(edi + 4)

if (result_7 != 0)
    result_10 = result_7

int32_t esi_3

while (true)
    result_11.b = *edx_8
    char temp6_1 = *result_10
    bool c_3 = result_11.b u< temp6_1
    
    if (result_11.b == temp6_1)
        if (result_11.b == 0)
            esi_3 = 0
            break
        
        result_11.b = edx_8[1]
        char temp7_1 = result_10[1]
        c_3 = result_11.b u< temp7_1
        
        if (result_11.b == temp7_1)
            edx_8 = &edx_8[2]
            result_10 = &result_10[2]
            
            if (result_11.b != 0)
                continue
            
            esi_3 = 0
            break
    
    esi_3 = sbb.d(esi, esi, c_3) | 1
    break

int32_t var_8_8 = 4

if (data_cf65bc != 0 && result_7 != 0 && *result_7 != 0)
    char* eax_8 = sub_63d4e0(&result_1)
    int32_t temp8_1 = *(eax_8 + 4)
    *(eax_8 + 4) -= 1
    
    if (temp8_1 == 1)
        sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_9 = 0xffffffff

if (esi_3 == 0)
    esi_3 = sub_5fcf50()
    void* eax_10 = sub_4bbdb0()
    *(eax_10 + 0xc) = 1
    *(eax_10 + 0x10) = esi_3
    data_cc8dc8
    sub_4d8ad0(esi_3)
    sub_4d46e0(7, 0)

sub_63d720(&result_1, "BtnDelete")
char* result = result_1
char* const result_2 = &data_801800
void* edx_12 = *(edi + 4)

if (result != 0)
    result_2 = result

int32_t esi_5

while (true)
    result_11.b = *edx_12
    char temp9_1 = *result_2
    bool c_4 = result_11.b u< temp9_1
    
    if (result_11.b == temp9_1)
        if (result_11.b == 0)
            esi_5 = 0
            break
        
        result_11.b = *(edx_12 + 1)
        char temp11_1 = result_2[1]
        c_4 = result_11.b u< temp11_1
        
        if (result_11.b == temp11_1)
            edx_12 += 2
            result_2 = &result_2[2]
            
            if (result_11.b != 0)
                continue
            
            esi_5 = 0
            break
    
    esi_5 = sbb.d(esi_3, esi_3, c_4) | 1
    break

int32_t var_8_10 = 5

if (data_cf65bc != 0 && result != 0 && *result != 0)
    result = sub_63d4e0(&result_1)
    int32_t temp12_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp12_1 == 1)
        result = sub_64c080(result, *(result + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_11 = 0xffffffff

if (esi_5 == 0)
    int32_t var_3c_3
    char const* const var_38_6
    char* ecx_19
    
    if (data_be4a3c != 2)
        var_38_6 = "DomSetSaveClick"
        var_3c_3 = 0x8d71
        ecx_19 = "gDomSetSave.style == SETSAVE_EXISTING"
    label_5fd5e5:
        sub_63b870(result, &data_801800, ecx_19, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            var_3c_3, var_38_6)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    void* eax_11 = sub_4bbdb0()
    *(eax_11 + 0xc) = 0
    *(eax_11 + 0x10) = 0
    int32_t i = data_be4a40
    result = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    
    if (i s< 0)
        var_38_6 = "DomSetSaveDelete"
        var_3c_3 = 0x8d28
        ecx_19 = "setIdx >= 0"
        goto label_5fd5e5
    
    int32_t ecx_22 = *(result + 0x71dc)
    
    if (i s>= ecx_22)
        var_38_6 = "DomSetSaveDelete"
        var_3c_3 = 0x8d29
        ecx_19 = "setIdx < sets.numSets"
        goto label_5fd5e5
    
    if (i s< ecx_22 - 1)
        void* esi_9 = &result[0x6edc + ((i * 3 + 5) << 2)]
        
        do
            sub_63d850(esi_9 - 0x14, esi_9 - 8)
            sub_63d850(esi_9 - 0x10, esi_9 - 4)
            int32_t eax_15 = *esi_9
            esi_9 += 0xc
            *(esi_9 - 0x18) = eax_15
            i += 1
            ecx_22 = *(result + 0x71dc)
        while (i s< ecx_22 - 1)
    
    char* const var_24 = &data_801800
    int32_t var_1c_1 = 0
    char* const var_20 = &data_801800
    int32_t var_8_12 = 6
    void* esi_10 = &result[0x6edc + ecx_22 * 0xc]
    sub_63d850(esi_10 - 0xc, &var_24)
    sub_63d850(esi_10 - 8, &var_20)
    *(esi_10 - 4) = 0
    int32_t var_8_13 = 0xffffffff
    sub_4d6960(&var_24)
    *(result + 0x71dc) -= 1
    data_cc8dc8
    sub_4d8ad0(esi_10)
    sub_4d46e0(7, 0)

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result

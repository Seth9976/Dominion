// 函数: sub_629380
// 地址: 0x629380
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0?$_Mpunct@G@std@@QAE@ABV_Locinfo@1@I_N1@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result_1
char* result_4 = result_1
char* esi = *(result_4 + 4)
sub_63d720(&result_1, "btnBack")
char* result_3 = result_1
char* const result_5 = &data_801800

if (result_3 != 0)
    result_5 = result_3

int32_t ecx_3

while (true)
    char edx_1 = *result_5
    char temp0_1 = *esi
    bool c_1 = edx_1 u< temp0_1
    
    if (edx_1 == temp0_1)
        if (edx_1 == 0)
            ecx_3 = 0
            break
        
        edx_1 = result_5[1]
        char temp1_1 = esi[1]
        c_1 = edx_1 u< temp1_1
        
        if (edx_1 == temp1_1)
            result_5 = &result_5[2]
            esi = &esi[2]
            
            if (edx_1 != 0)
                continue
            
            ecx_3 = 0
            break
    
    ecx_3 = sbb.d(result_5, result_5, c_1) | 1
    break

int32_t ebx

if (ecx_3 == 0 || *(result_4 + 0x18) == 2)
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

if (ebx.b == 0)
    goto label_629491

void* eax_4 = sub_4ba7c0()
void* ecx_6 = data_cc8d5c
char const* const var_30
int32_t var_2c
char const* const var_28
char* ecx_7

if (ecx_6 != 0)
    sub_4bb0c0(ecx_6 + 0x7754)
    data_8db598 = 2
    sub_4d46e0(1, 0)
    data_8db660 = 3
label_629491:
    char* esi_1 = *(result_4 + 4)
    sub_63d720(&result_1, "btn_ok")
    char* result = result_1
    char* result_2 = &data_801800
    
    if (result != 0)
        result_2 = result
    
    int32_t esi_3
    
    while (true)
        char edx_5 = *result_2
        char temp3_1 = *esi_1
        bool c_2 = edx_5 u< temp3_1
        
        if (edx_5 == temp3_1)
            if (edx_5 == 0)
                esi_3 = 0
                break
            
            edx_5 = result_2[1]
            char temp4_1 = esi_1[1]
            c_2 = edx_5 u< temp4_1
            
            if (edx_5 == temp4_1)
                result_2 = &result_2[2]
                esi_1 = &esi_1[2]
                
                if (edx_5 != 0)
                    continue
                
                esi_3 = 0
                break
        
        esi_3 = sbb.d(esi_1, esi_1, c_2) | 1
        break
    
    int32_t var_8_3 = 1
    
    if (data_cf65bc != 0 && result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp5_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp5_1 == 1)
            sub_64c080(result, *(result + 0xc) + 0x10)
            result_1 = &data_801800
    
    int32_t var_8_4 = 0xffffffff
    
    if (esi_3 != 0)
        goto label_629671
    
    int32_t edx_8 = data_ccea14
    int32_t esi_4
    
    if (edx_8 == 0)
        esi_4 = edx_8 + 4
    label_629539:
        memset(&data_8dbf38, 0, 0x78)
        *(sub_4bbdb0() + 0x28) = 0x17
        sub_62b4e0()
        int32_t ecx_13 = data_c23be0
        int32_t edi = 0xa
        data_8db660 = 0x10
        data_8dbf3c = 1
        
        if (esi_4 != 3)
            edi = 7
        
        data_8dbfa8 = 1
        
        if (ecx_13 != 0)
            sub_66ca90(7, 0, ecx_13, 1)
        
        data_ccf6f4 = 0
        data_ccf6e8 = 0
        data_ccf6ec = 1
        data_8db6b0 = 0x7e6
        data_ccf6f0 = edi
        goto label_629653
    
    eax_4 = data_cc8d5c
    
    if (eax_4 == 0)
        goto label_629450
    
    if (edx_8 != 0)
        uint32_t ecx_14 = zx.d(edx_8.w)
        
        if (ecx_14 u>= *(eax_4 + 0x7758))
        label_629685:
            var_28 = "DataArray<struct ServerNotification>::DataArrayGet"
            var_2c = 0x6d
            ecx_7 = "DataArrayTryToGet(id) != NULL"
            var_30 = "C:\x\ax2017\Engine\DataArray.h"
        else
            eax_4 = *(eax_4 + 0x7754)
            uint32_t ecx_15 = ecx_14 * 3
            
            if (*(eax_4 + (ecx_15 << 2) + 8) != edx_8)
                goto label_629685
            
            esi_4 = *(eax_4 + (ecx_15 << 2) + 4)
            
            if (esi_4 - 1 u> 3)
            label_629629:
                memset(&data_8dbf38, 0, 0x78)
                *(sub_4bbdb0() + 0x28) = 0x17
                sub_62b4e0()
                data_8db660 = 0x10
            label_629653:
                eax_4 = sub_4ba7c0()
                void* ecx_17 = data_cc8d5c
                
                if (ecx_17 == 0)
                    goto label_629450
                
                sub_4bb0c0(ecx_17 + 0x7754)
            label_629671:
                result.b = 0
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            switch (esi_4)
                case 1
                    goto label_629629
                case 2, 3, 4
                    goto label_629539
    else
        var_28 = "DataArray<struct ServerNotification>::DataArrayGet"
        var_2c = 0x6c
        ecx_7 = "id != DATAID_NULL"
        var_30 = "C:\x\ax2017\Engine\DataArray.h"
else
label_629450:
    var_28 = "GetClient"
    var_2c = 0x7b
    var_30 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_7 = "gClient"

sub_63b870(eax_4, &data_801800, ecx_7, var_30, var_2c, var_28)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

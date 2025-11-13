// 函数: sub_6e1a50
// 地址: 0x6e1a50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7710fe
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0
void* edi
int64_t xmm0

if (strncmp("NULL", *(arg2 + 4), 4) == 0)
    *(arg2 + 4) += 4
    sub_6e1920(arg2)
    xmm0 = data_cb2f08
    edi = data_cb2f10
else
    xmm0 = data_cb2f14.q
    edi = data_cb2f1c

void* var_18 = edi

if (edi != 0 && *edi != 0)
    char* eax_4 = sub_63d4e0(&var_18)
    *(eax_4 + 4) += 1

int32_t var_14_1 = 2
int32_t var_8_1 = 1
int32_t eax_5 = xmm0.d
int32_t* result

if (eax_5 != 2 && eax_5 != 3 && eax_5 != 4)
    result = arg1
    *result = eax_5
    result[1] = xmm0:4.d
    result[2] = edi
    
    if (edi != 0 && *edi != 0)
        char* eax_7 = sub_63d4e0(&result[2])
        *(eax_7 + 4) += 1
    
    int32_t var_14_2 = 3
    int32_t var_8_2 = 2
    goto label_6e1b2f

int32_t ebx_1
void* esi_1
int32_t edi_1

if (strncmp("null", *(arg2 + 4), 4) == 0)
    *(arg2 + 4) += 4
    sub_6e1920(arg2)
    ebx_1 = data_cb2f08.d
    edi_1 = data_cb2f08:4
    esi_1 = data_cb2f10
else
    ebx_1 = data_cb2f14
    edi_1 = data_cb2f18
    esi_1 = data_cb2f1c

void* var_24 = esi_1
int32_t var_28_1 = edi_1
int32_t var_2c_1 = ebx_1

if (esi_1 != 0 && *esi_1 != 0)
    char* eax_9 = sub_63d4e0(&var_24)
    *(eax_9 + 4) += 1

int32_t var_14_3 = 6
var_8_1.b = 3
int64_t var_20
var_20.d = ebx_1
var_20:4.d = edi_1
sub_63d850(&var_18, &var_24)
var_8_1.b = 4

if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
    char* eax_10 = sub_63d4e0(&var_24)
    int32_t temp0_1 = *(eax_10 + 4)
    *(eax_10 + 4) -= 1
    
    if (temp0_1 == 1)
        sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)

var_8_1.b = 1
int32_t eax_11 = var_20.d
bool cond:0_1

if (eax_11 == 2 || eax_11 == 3 || eax_11 == 4)
    result = arg1
    int32_t var_14_5 = 7
    result[2] = &data_801800
    *result = 3
    result[1] = 0x800940
    int32_t var_8_4 = 6
    
    if (data_cf65bc != 0)
        void* eax_14 = var_18
        
        if (eax_14 != 0)
            cond:0_1 = *eax_14 == 0
            goto label_6e1c80
else
    result = arg1
    edi = var_18
    *result = eax_11
    result[1] = var_20:4.d
    result[2] = edi
    
    if (edi != 0 && *edi != 0)
        char* eax_13 = sub_63d4e0(&result[2])
        *(eax_13 + 4) += 1
    
    int32_t var_14_4 = 7
    int32_t var_8_3 = 5
label_6e1b2f:
    
    if (data_cf65bc != 0 && edi != 0)
        cond:0_1 = *edi == 0
    label_6e1c80:
        
        if (not(cond:0_1))
            char* eax_15 = sub_63d4e0(&var_18)
            int32_t temp1_1 = *(eax_15 + 4)
            *(eax_15 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
fsbase->NtTib.ExceptionList = ExceptionList
return result

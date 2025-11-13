// 函数: sub_6e2200
// 地址: 0x6e2200
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_77123e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1c = arg1
int32_t var_14 = 0
void* esi
int64_t xmm0

if (strncmp("0x", *(arg2 + 4), 2) == 0)
    *(arg2 + 4) += 2
    sub_6e1920(arg2)
    xmm0 = data_cb2f08
    esi = data_cb2f10
else
    xmm0 = data_cb2f14.q
    esi = data_cb2f1c

void* var_20 = esi

if (esi != 0 && *esi != 0)
    char* eax_4 = sub_63d4e0(&var_20)
    *(eax_4 + 4) += 1

int32_t var_14_1 = 2
int32_t var_8_1 = 1
int32_t eax_5 = xmm0.d
bool cond:0_1

if (eax_5 == 2 || eax_5 == 3 || eax_5 == 4)
    *arg1 = eax_5
    arg1[1] = xmm0:4.d
    arg1[2] = esi
    
    if (esi != 0 && *esi != 0)
        char* eax_26 = sub_63d4e0(&arg1[2])
        *(eax_26 + 4) += 1
    
    int32_t var_14_5 = 3
    int32_t var_8_4 = 2
label_6e2485:
    
    if (data_cf65bc != 0 && esi != 0)
        cond:0_1 = *esi == 0
    label_6e2495:
        
        if (not(cond:0_1))
            char* eax_27 = sub_63d4e0(&var_20)
            int32_t temp0_1 = *(eax_27 + 4)
            *(eax_27 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_27, *(eax_27 + 0xc) + 0x10)
else
    int32_t var_34_1
    int32_t eax_8
    void* esi_1
    
    if (strncmp("0X", *(arg2 + 4), 2) == 0)
        *(arg2 + 4) += 2
        sub_6e1920(arg2)
        esi_1 = data_cb2f10
        var_34_1 = data_cb2f08.d
        eax_8 = data_cb2f08:4
    else
        esi_1 = data_cb2f1c
        var_34_1 = data_cb2f14
        eax_8 = data_cb2f18
    
    void* var_2c = esi_1
    int32_t var_30_1 = eax_8
    
    if (esi_1 != 0 && *esi_1 != 0)
        char* eax_10 = sub_63d4e0(&var_2c)
        *(eax_10 + 4) += 1
    
    int32_t var_14_2 = 6
    var_8_1.b = 3
    int64_t var_28
    var_28.d = var_34_1
    var_28:4.d = eax_8
    sub_63d850(&var_20, &var_2c)
    var_8_1.b = 4
    
    if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
        char* eax_13 = sub_63d4e0(&var_2c)
        int32_t temp1_1 = *(eax_13 + 4)
        *(eax_13 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
    
    var_8_1.b = 1
    int32_t eax_14 = var_28.d
    
    if (eax_14 == 2 || eax_14 == 3 || eax_14 == 4)
        esi = var_20
        *arg1 = eax_14
        arg1[1] = var_28:4.d
        arg1[2] = esi
        
        if (esi != 0 && *esi != 0)
            char* eax_24 = sub_63d4e0(&arg1[2])
            *(eax_24 + 4) += 1
        
        int32_t var_14_4 = 7
        int32_t var_8_3 = 5
        goto label_6e2485
    
    void* eax_18
    
    if (strncmp(U"#", *(arg2 + 4), 1) == 0)
        *(arg2 + 4) += 1
        sub_6e1920(arg2)
        *arg1 = data_cb2f08.d
        arg1[1] = data_cb2f08:4
        eax_18 = data_cb2f10
    else
        *arg1 = data_cb2f14
        arg1[1] = data_cb2f18
        eax_18 = data_cb2f1c
    
    arg1[2] = eax_18
    
    if (eax_18 != 0 && *eax_18 != 0)
        char* eax_21 = sub_63d4e0(&arg1[2])
        *(eax_21 + 4) += 1
    
    int32_t var_14_3 = 0xf
    int32_t var_8_2 = 6
    
    if (data_cf65bc != 0)
        void* eax_22 = var_20
        
        if (eax_22 != 0)
            cond:0_1 = *eax_22 == 0
            goto label_6e2495
fsbase->NtTib.ExceptionList = ExceptionList
return arg1

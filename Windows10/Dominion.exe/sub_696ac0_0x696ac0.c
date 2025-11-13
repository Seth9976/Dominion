// 函数: sub_696ac0
// 地址: 0x696ac0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76f0bd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_20 = arg1
char** i_2 = nullptr
int32_t var_30 = 0
int32_t var_2c = 0
int32_t var_8_1 = 0
int32_t eax_3 = 0

if (data_8c4157 != 0)
    eax_3 = 1

char* var_48 = eax_3.b.d
char* i
int32_t* ecx
i, ecx = sub_696930(eax_3, &i_2, arg1, var_48)
char** i_1 = i_2
char var_11

if (i.b != 0)
    char* i_3
    
    for (i = i_1; i != 0; i = i_3)
        char* esi_1 = *i
        i_3 = *(i + 0x28)
        char* const var_18 = esi_1
        
        if (esi_1 != 0 && *esi_1 != 0)
            ecx = &var_18
            char* eax_4 = sub_63d4e0(ecx)
            *(eax_4 + 4) += 1
        
        var_8_1.b = 3
        var_48 = ecx
        char** ecx_1 = &var_48
        var_48 = esi_1
        
        if (esi_1 != 0 && *esi_1 != 0)
            char* eax_5 = sub_63d4e0(ecx_1)
            *(eax_5 + 4) += 1
        
        int32_t* eax_6
        char* ecx_2
        eax_6, ecx_2 = sub_69ef40(ecx_1)
        
        if (eax_6 == 0)
            var_8_1.b = 4
            
            if (data_cf65bc != eax_6 && esi_1 != 0 && *esi_1 != eax_6.b)
                ecx_2 = sub_63d4e0(&var_18)
                int32_t temp2_1 = *(ecx_2 + 4)
                *(ecx_2 + 4) -= 1
                
                if (temp2_1 == 1)
                    ecx_2 = sub_64c080(ecx_2, *(ecx_2 + 0xc) + 0x10)
                    var_18 = &data_801800
            
            var_8_1.b = 0
            goto label_696bcb
        
        int32_t eax_13 = *eax_6
        char var_1c
        var_1c.d = eax_13
        var_8_1.b = 5
        
        if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
            ecx_2 = sub_63d4e0(&var_18)
            int32_t temp1_1 = *(ecx_2 + 4)
            *(ecx_2 + 4) -= 1
            
            if (temp1_1 == 1)
                ecx_2 = sub_64c080(ecx_2, *(ecx_2 + 0xc) + 0x10)
                var_18 = &data_801800
            
            eax_13 = var_1c.d
        
        var_8_1.b = 0
        
        if (eax_13 == 0)
        label_696bcb:
            var_48 = *(i + 0x10)
            int32_t esi_2 = *(i + 8)
            int32_t var_4c_1 = *(i + 0xc)
            char* var_50 = ecx_2
            var_18 = &var_50
            char* var_54
            
            if (var_20 == 0)
                var_54 = "XString::XString"
                sub_63b870(var_20, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
                    var_54)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            char* ecx_5 = sub_63d720(&var_50, var_20)
            var_8_1.b = 6
            int32_t eax_9 = *(i + 4)
            var_54 = ecx_5
            var_1c.d = eax_9
            char* eax_10 = *i
            var_54 = eax_10
            
            if (eax_10 != 0 && *eax_10 != 0)
                eax_10 = sub_63d4e0(&var_54)
                *(eax_10 + 4) += 1
            
            var_8_1.b = 0
            ecx = sub_69f8c0(eax_10, esi_2, var_1c.d, var_54, var_50)
        else
            char* eax_15 = *i
            char* ecx_14 = &data_801800
            
            if (eax_15 != 0)
                ecx_14 = eax_15
            
            var_48 = ecx_14
            ecx = sub_63b5f0("Asset in pack is already loaded '%s'")
    
    var_11 = 1
else
    var_11 = 0

int32_t var_8_2 = 7

while (i_1 != 0)
    char** i_4 = i_1
    i_1 = i_1[0xa]
    var_8_2.b = 8
    
    if (data_cf65bc != 0)
        char* eax_11 = *i_4
        
        if (eax_11 != 0 && *eax_11 != 0)
            char* eax_12 = sub_63d4e0(i_4)
            int32_t temp0_1 = *(eax_12 + 4)
            *(eax_12 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
                *i_4 = &data_801800
    
    var_8_2.b = 7
    sub_64c080(i_4, 0x30)

i.b = var_11
fsbase->NtTib.ExceptionList = ExceptionList
return i

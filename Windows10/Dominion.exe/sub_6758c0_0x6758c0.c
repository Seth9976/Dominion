// 函数: sub_6758c0
// 地址: 0x6758c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
int32_t* eax_1 = __security_cookie ^ &__saved_ebp
int32_t* var_8 = eax_1

if (data_c28c58 != 0 && data_c27c18 != 0)
    void* eax_2 = sub_665600(data_c27c58)
    int32_t* eax_3 = sub_64cc90(eax_2)
    int32_t* var_210 = eax_3
    *(eax_2 + 0x1364) = 0
    char* eax_4 = sub_6dd140(eax_3, eax_3, &data_8cae70, 0x67)
    char* var_20c
    void* eax_6 = sub_66be10(&var_20c, *(eax_2 + 0x15f8), data_c23bf0, &var_20c)
    void* esi_2 = nullptr
    
    if (var_20c != 0)
        do
            esi_2 += 1
            eax_6 = esi_2
        while ((&var_20c)[esi_2] != 0)
    
    if (var_20c == 0 || eax_6 == 0)
        if (eax_4 != 0 && *eax_4 != 0)
        label_675a3f:
            uint32_t eax_10 = sub_6dcec0(eax_6, var_210, &data_8cae70, 0x67)
            CookieCheckFunction(eax_10)
            return eax_10
        
    label_675a18:
        void* var_208
        
        if (arg1 != 1)
            if (arg1 != 0xffffffff)
                sub_63b870(eax_6, &data_801800, "Halt", "C:\x\ax2017\Engine\UI2.cpp", 0x50d0, 
                    "UI2EditorChangeStyleIdx")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            eax_6 = (&var_210)[esi_2]
        else
            eax_6 = var_208
        
        if (eax_6 == 0)
            goto label_675a3f
    else
        if (eax_4 == 0 || *eax_4 == 0)
            goto label_675a18
        
        int32_t edi_1 = 0
        
        if (esi_2 s<= 0)
            goto label_675a3f
        
        while (true)
            char* ecx_3 = (&var_20c)[edi_1]
            char* eax_7 = eax_4
            
            while (true)
                char edx_3 = *ecx_3
                char temp0_1 = *eax_7
                bool c_1 = edx_3 u< temp0_1
                
                if (edx_3 == temp0_1)
                    if (edx_3 == 0)
                        eax_6 = nullptr
                        break
                    
                    edx_3 = ecx_3[1]
                    char temp1_1 = eax_7[1]
                    c_1 = edx_3 u< temp1_1
                    
                    if (edx_3 == temp1_1)
                        ecx_3 = &ecx_3[2]
                        eax_7 = &eax_7[2]
                        
                        if (edx_3 != 0)
                            continue
                        
                        eax_6 = nullptr
                        break
                
                eax_6 = sbb.d(eax_7, eax_7, c_1) | 1
                break
            
            if (eax_6 == 0)
                break
            
            edi_1 += 1
            
            if (edi_1 s>= esi_2)
                goto label_675a3f
        
        eax_6 = arg1 + edi_1
        
        if (arg1 + edi_1 s< 0)
            goto label_675a3f
        
        eax_6 = (&var_20c)[eax_6]
        
        if (eax_6 == 0)
            goto label_675a3f
    
    void* var_228_2 = eax_6
    eax_1 = sub_6dce10(eax_6, var_210, &data_8cae70, 0x67)

CookieCheckFunction(eax_1)
return eax_1

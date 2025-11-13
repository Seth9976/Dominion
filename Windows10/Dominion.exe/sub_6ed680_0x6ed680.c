// 函数: sub_6ed680
// 地址: 0x6ed680
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?getDecoratedName@UnDecorator@@CA?AVDName@@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_48 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_38 = arg3
int32_t var_18 = 0
int32_t var_4c = arg2
int32_t var_8_1 = 1
sub_63df30(arg3, "samplerFn_%s")
void* i_1
void* i_3 = i_1
int32_t var_18_1 = 2
int32_t ecx = *(i_3 + 0x104)
*(i_3 + 0x104) = ecx + 1
*(i_3 + (*(i_3 + 0x148) << 2) + 0x108) = ecx
*(i_3 + 0x148) += 1
sub_63d850((ecx << 3) + 4 + i_3, arg3)
int32_t var_8_2 = 0
int32_t var_18_2 = 1
void* ebx_1 = *arg4
void* ecx_3 = ebx_1
void* i = ebx_1 + 1
i_1 = i

if (i s< arg6 + 1 + ebx_1)
    char* ebx_2 = arg5
    
    do
        void* ebx_3 = &ebx_2[i * 0x58]
        void* var_1c_1 = ebx_3
        
        if (*(ebx_3 + 4) == 0)
            int32_t eax_10 = *ebx_3
            int32_t ebx_5
            
            if (eax_10 == 0 || eax_10 == 4)
                int32_t esi_1 = *(i_3 + 0x15c)
                int32_t ecx_4 = 0
                
                if (esi_1 s> 0)
                    int32_t eax_11 = *(ebx_3 + 0x10)
                    void* eax_12 = i_3 + 0x14c
                    
                    while (true)
                        ebx_3 = var_1c_1
                        
                        if (*eax_12 == eax_11)
                            break
                        
                        ecx_4 += 1
                        eax_12 += 4
                        
                        if (ecx_4 s>= esi_1)
                            goto label_6ed799
                
                if (esi_1 s<= 0 || ecx_4 == 0xffffffff)
                label_6ed799:
                    ecx_4 = esi_1
                    *(i_3 + 0x15c) = esi_1 + 1
                    *(i_3 + (ecx_4 << 2) + 0x14c) = *(ebx_3 + 0x10)
                
                ebx_5 = i * 0xc
                *(ebx_5 + i_3 + 0x164) = ecx_4
            else
                ebx_5 = i * 0xc
            
            void* eax_15 = &data_8d0b80
            void* edx_1 = var_1c_1 + 0x34
            int32_t esi_2 = 0x1c
            int32_t eax_16
            
            while (true)
                if (*edx_1 != *eax_15)
                    int32_t ecx_5
                    ecx_5.b = *edx_1
                    char temp2_1 = *eax_15
                    
                    if (ecx_5.b != temp2_1)
                        eax_16 = sbb.d(eax_15, eax_15, ecx_5.b u< temp2_1) | 1
                    else
                        ecx_5.b = *(edx_1 + 1)
                        char temp4_1 = *(eax_15 + 1)
                        
                        if (ecx_5.b != temp4_1)
                            eax_16 = sbb.d(eax_15, eax_15, ecx_5.b u< temp4_1) | 1
                        else
                            ecx_5.b = *(edx_1 + 2)
                            char temp5_1 = *(eax_15 + 2)
                            
                            if (ecx_5.b != temp5_1)
                                eax_16 = sbb.d(eax_15, eax_15, ecx_5.b u< temp5_1) | 1
                            else
                                ecx_5.b = *(edx_1 + 3)
                                char temp6_1 = *(eax_15 + 3)
                                
                                if (ecx_5.b != temp6_1)
                                    eax_16 = sbb.d(eax_15, eax_15, ecx_5.b u< temp6_1) | 1
                                else
                                    eax_16 = 0
                    
                    break
                
                edx_1 += 4
                eax_15 += 4
                int32_t temp3_1 = esi_2
                esi_2 -= 4
                
                if (temp3_1 u< 4)
                    eax_16 = 0
                    break
            
            int32_t ecx_6
            
            if (eax_16 != 0)
                ecx_6 = *(i_3 + 0x2a0)
                *(i_3 + 0x2a0) = ecx_6 + 1
            else
                ecx_6 = 0xffffffff
            
            *(ebx_5 + i_3 + 0x160) = ecx_6
            void* i_2 = i_1
            ebx_2 = arg5
            int32_t* eax_19 = i_2 * 0x58
            int32_t ecx_7
            
            if (*(eax_19 + ebx_2) != 3)
                ecx_7 = 0
            else
                ecx_7 = *(eax_19 + ebx_2 + 8)
            
            void* eax_23 = *arg4 - ecx_7 + arg6
            sub_6ed040(eax_23, &i_1, ebx_2, i_3, i_2 == eax_23)
            i = i_1
        else
            ebx_2 = arg5
            i += 1
            i_1 = i
        
        ecx_3 = *arg4
    while (i s< arg6 + 1 + ecx_3)

int32_t var_8_6
char** ecx_15

if (ecx_3 == 0xffffffff)
    char* var_14
    sub_63d720(&var_14, "\tfloat2 uv = arg_uv;\n")
    int32_t var_8_7 = 6
    sub_6ecd70(i_3, &var_14)
    var_8_6 = 7
    
    if (data_cf65bc != 0)
        char* eax_34 = var_14
        
        if (eax_34 != 0 && *eax_34 != 0)
            ecx_15 = &var_14
        label_6ed960:
            char* eax_35 = sub_63d4e0(ecx_15)
            int32_t temp1_1 = *(eax_35 + 4)
            *(eax_35 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_35, *(eax_35 + 0xc) + 0x10)
else
    void* esi_4 = ecx_3 * 0x58 + arg5
    int32_t var_8_3 = 2
    char* var_20
    sub_6ecd70(i_3, sub_6ec520(&var_20, esi_4))
    int32_t var_8_4 = 3
    
    if (data_cf65bc != 0)
        char* eax_29 = var_20
        
        if (eax_29 != 0 && *eax_29 != 0)
            char* eax_30 = sub_63d4e0(&var_20)
            int32_t temp0_1 = *(eax_30 + 4)
            *(eax_30 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_30, *(eax_30 + 0xc) + 0x10)
    
    var_8_4.b = 0
    int32_t var_8_5 = 4
    char* var_24
    sub_6ecd70(i_3, sub_6ec490(esi_4 + 0x34, ebx_1, &var_24, esi_4 + 0x34, i_3))
    var_8_6 = 5
    
    if (data_cf65bc != 0)
        char* eax_33 = var_24
        
        if (eax_33 != 0 && *eax_33 != 0)
            ecx_15 = &var_24
            goto label_6ed960
var_8_6.b = 0
sub_6ece80(i_3)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3

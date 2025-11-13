// 函数: sub_67fb40
// 地址: 0x67fb40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76dbbd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = arg5
int32_t* ecx_1 = arg4 - 4
void* edi = &arg2[(arg4 - arg2) s>> 3]
int32_t eax_8 = (ecx_1 - arg2) s>> 2
void* var_24
int32_t* var_20
int32_t* eax_16

if (eax_8 s<= 0x28)
    eax_16 = arg2
else
    int32_t var_3c_1 = arg5
    int32_t eax_10 = (eax_8 + 1) s>> 3
    int32_t esi_1 = eax_10 << 2
    void* ecx_2 = &arg2[eax_10]
    var_20 = ecx_2
    int32_t* eax_11 = &arg2[eax_10 * 2]
    sub_681030(eax_11, ecx_2, arg2, eax_11)
    int32_t var_44_1 = arg5
    int32_t* eax_12 = esi_1 + edi
    sub_681030(eax_12, edi, edi - esi_1, eax_12)
    int32_t var_4c_1 = arg5
    void* ecx_7 = arg4 - 4 - esi_1
    void* eax_15 = arg4 - 4 - (eax_10 << 3)
    var_24 = ecx_7
    sub_681030(eax_15, ecx_7, eax_15, arg4 - 4)
    ebx = arg5
    ecx_1 = var_24
    eax_16 = var_20

int32_t var_3c_2 = ebx
sub_681030(eax_16, edi, eax_16, ecx_1)
int32_t* esi_2 = edi + 4
int32_t* var_14 = esi_2

if (arg2 u< edi)
    do
        var_24 = edi - 4
        
        if (ebx(edi - 4, edi, eax_2) != 0)
            break
        
        if (ebx(edi, var_24) != 0)
            break
        
        edi = var_24
    while (arg2 u< edi)
    
    esi_2 = var_14

void* ecx_10 = arg4

if (esi_2 u< ecx_10)
    do
        if (ebx(esi_2, edi, eax_2) != 0)
            ecx_10 = arg4
            break
        
        ecx_10 = arg4
        
        if (ebx(edi, esi_2) != 0)
            break
        
        esi_2 = &esi_2[1]
    while (esi_2 u< ecx_10)
    
    var_14 = esi_2

void* eax_22 = edi
int32_t* ebx_2 = esi_2
void* var_18 = eax_22

while (true)
    var_20 = ebx_2
    
    while (true)
        if (ebx_2 u< ecx_10)
            do
                if (arg5(edi, ebx_2, eax_2) == 0)
                    char eax_24 = arg5(ebx_2, edi)
                    
                    if (eax_24 != 0)
                        break
                    
                    if (esi_2 != ebx_2)
                        char* esi_4 = *esi_2
                        var_20 = esi_4
                        
                        if (esi_4 != 0 && *esi_4 != eax_24)
                            char* eax_25 = sub_63d4e0(&var_20)
                            *(eax_25 + 4) += 1
                        
                        int32_t var_8_1 = 0
                        sub_63d850(var_14, ebx_2)
                        sub_63d850(ebx_2, &var_20)
                        int32_t var_8_2 = 1
                        
                        if (data_cf65bc != 0 && esi_4 != 0 && *esi_4 != 0)
                            char* eax_26 = sub_63d4e0(&var_20)
                            int32_t temp5_1 = *(eax_26 + 4)
                            *(eax_26 + 4) -= 1
                            
                            if (temp5_1 == 1)
                                sub_64c080(eax_26, *(eax_26 + 0xc) + 0x10)
                        
                        esi_2 = var_14
                        int32_t var_8_3 = 0xffffffff
                    
                    esi_2 = &esi_2[1]
                    var_14 = esi_2
                
                ebx_2 = &ebx_2[1]
            while (ebx_2 u< arg4)
            
            eax_22 = var_18
            var_20 = ebx_2
        
        bool cond:0_1 = eax_22 != arg2
        
        if (eax_22 u> arg2)
            void* ebx_3 = var_18
            int32_t* esi_5 = ebx_3 - 4
            int32_t* var_18_1 = esi_5
            
            do
                if (arg5(esi_5, edi, eax_2) == 0)
                    char eax_28 = arg5(edi, esi_5)
                    
                    if (eax_28 != 0)
                        break
                    
                    edi -= 4
                    
                    if (edi != esi_5)
                        void* esi_6 = *edi
                        var_24 = esi_6
                        
                        if (esi_6 != 0 && *esi_6 != eax_28)
                            char* eax_29 = sub_63d4e0(&var_24)
                            *(eax_29 + 4) += 1
                        
                        int32_t var_8_4 = 2
                        sub_63d850(edi, var_18_1)
                        sub_63d850(var_18_1, &var_24)
                        int32_t var_8_5 = 3
                        
                        if (data_cf65bc != 0 && esi_6 != 0 && *esi_6 != 0)
                            char* eax_30 = sub_63d4e0(&var_24)
                            int32_t temp6_1 = *(eax_30 + 4)
                            *(eax_30 + 4) -= 1
                            
                            if (temp6_1 == 1)
                                sub_64c080(eax_30, *(eax_30 + 0xc) + 0x10)
                        
                        esi_5 = var_18_1
                        int32_t var_8_6 = 0xffffffff
                
                ebx_3 -= 4
                esi_5 -= 4
                var_18_1 = esi_5
            while (arg2 u< ebx_3)
            
            var_18 = ebx_3
            eax_22 = var_18
            cond:0_1 = eax_22 != arg2
            ebx_2 = var_20
        
        if (not(cond:0_1))
            int32_t* eax_31 = var_14
            
            if (ebx_2 == arg4)
                arg3[1] = eax_31
                *arg3 = edi
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg3
            
            if (eax_31 != ebx_2)
                void* esi_7 = *edi
                var_24 = esi_7
                
                if (esi_7 != 0 && *esi_7 != 0)
                    char* eax_32 = sub_63d4e0(&var_24)
                    *(eax_32 + 4) += 1
                    eax_31 = var_14
                
                int32_t var_8_7 = 4
                sub_63d850(edi, eax_31)
                sub_63d850(var_14, &var_24)
                int32_t var_8_8 = 5
                
                if (data_cf65bc != 0 && esi_7 != 0 && *esi_7 != 0)
                    char* eax_33 = sub_63d4e0(&var_24)
                    int32_t temp4_1 = *(eax_33 + 4)
                    *(eax_33 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        sub_64c080(eax_33, *(eax_33 + 0xc) + 0x10)
                
                eax_31 = var_14
                int32_t var_8_9 = 0xffffffff
            
            void* esi_8 = *edi
            var_14 = &eax_31[1]
            var_24 = esi_8
            
            if (esi_8 != 0 && *esi_8 != 0)
                char* eax_35 = sub_63d4e0(&var_24)
                *(eax_35 + 4) += 1
            
            int32_t var_8_10 = 6
            sub_63d850(edi, ebx_2)
            sub_63d850(ebx_2, &var_24)
            int32_t var_8_11 = 7
            
            if (data_cf65bc != 0 && esi_8 != 0 && *esi_8 != 0)
                char* eax_36 = sub_63d4e0(&var_24)
                int32_t temp3_1 = *(eax_36 + 4)
                *(eax_36 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_64c080(eax_36, *(eax_36 + 0xc) + 0x10)
            
            esi_2 = var_14
            edi += 4
            eax_22 = var_18
            ebx_2 = &ebx_2[1]
            ecx_10 = arg4
            int32_t var_8_12 = 0xffffffff
            break
        
        void* eax_37 = eax_22 - 4
        var_18 = eax_37
        
        if (ebx_2 != arg4)
            void* esi_11 = *ebx_2
            var_18 = eax_37
            var_24 = esi_11
            
            if (esi_11 != 0 && *esi_11 != 0)
                char* eax_44 = sub_63d4e0(&var_24)
                *(eax_44 + 4) += 1
                eax_37 = var_18
            
            int32_t var_8_19 = 0xc
            sub_63d850(ebx_2, eax_37)
            sub_63d850(var_18, &var_24)
            int32_t var_8_20 = 0xd
            
            if (data_cf65bc != 0 && esi_11 != 0 && *esi_11 != 0)
                char* eax_45 = sub_63d4e0(&var_24)
                int32_t temp0_1 = *(eax_45 + 4)
                *(eax_45 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_45, *(eax_45 + 0xc) + 0x10)
            
            esi_2 = var_14
            ebx_2 = &ebx_2[1]
            eax_22 = var_18
            ecx_10 = arg4
            int32_t var_8_21 = 0xffffffff
            break
        
        edi -= 4
        
        if (eax_37 != edi)
            void* esi_9 = *eax_37
            var_24 = esi_9
            
            if (esi_9 != 0 && *esi_9 != 0)
                char* eax_38 = sub_63d4e0(&var_24)
                *(eax_38 + 4) += 1
                eax_37 = var_18
            
            int32_t var_8_13 = 8
            sub_63d850(eax_37, edi)
            sub_63d850(edi, &var_24)
            int32_t var_8_14 = 9
            
            if (data_cf65bc != 0 && esi_9 != 0 && *esi_9 != 0)
                char* eax_39 = sub_63d4e0(&var_24)
                int32_t temp2_1 = *(eax_39 + 4)
                *(eax_39 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_39, *(eax_39 + 0xc) + 0x10)
            
            int32_t var_8_15 = 0xffffffff
        
        void* esi_10 = *edi
        int32_t* eax_41 = var_14 - 4
        var_14 = eax_41
        var_24 = esi_10
        
        if (esi_10 != 0 && *esi_10 != 0)
            char* eax_42 = sub_63d4e0(&var_24)
            *(eax_42 + 4) += 1
            eax_41 = var_14
        
        int32_t var_8_16 = 0xa
        sub_63d850(edi, eax_41)
        sub_63d850(var_14, &var_24)
        int32_t var_8_17 = 0xb
        
        if (data_cf65bc != 0 && esi_10 != 0 && *esi_10 != 0)
            char* eax_43 = sub_63d4e0(&var_24)
            int32_t temp1_1 = *(eax_43 + 4)
            *(eax_43 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_43, *(eax_43 + 0xc) + 0x10)
        
        esi_2 = var_14
        eax_22 = var_18
        ecx_10 = arg4
        int32_t var_8_18 = 0xffffffff

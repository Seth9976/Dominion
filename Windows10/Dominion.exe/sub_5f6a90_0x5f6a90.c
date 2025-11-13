// 函数: sub_5f6a90
// 地址: 0x5f6a90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = __ehhandler$??$for_each@ABVparallel_policy@execution@std@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UGSISymbolEntry@@@std@@@std@@@3@V<lambda_4f0aec0bcd4e841621d6f7f25da1c66e>@@$0A@@std@@YAXABVparallel_policy@execution@0@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UGSISymbolEntry@@@std@@@std@@@0@1V<lambda_4f0aec0bcd4e841621d6f7f25da1c66e>@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_5c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = arg2
void* var_24 = eax_3
int32_t* esi = arg4
int32_t edi = 0

while (*esi != 0)
    int32_t edx = 0
    int32_t* ecx = eax_3
    
    while (true)
        int32_t eax_4 = *ecx
        
        if (eax_4 != 0)
            if (eax_4 == 1)
                eax_4 = ecx[1]
                
                if (eax_4 == esi[1])
                    break
            
            edx += 1
            ecx = &ecx[4]
            
            if (edx s< 0xa)
                continue
        
        sub_5f6410(eax_4, var_24, arg3, esi)
        break
    
    eax_3 = var_24
    edi += 1
    esi = &esi[4]
    
    if (edi s>= 0xa)
        break

void* esi_1 = var_24
int32_t i = 0
int32_t i_2 = 0
void* eax_5 = esi_1 + 0xa0

while (*eax_5 != 0)
    i += 1
    eax_5 += 0x48
    i_2 = i
    
    if (i s>= 4)
        i = 4
        i_2 = 4
        break

void* edi_1 = nullptr
int32_t* i_6 = &arg4[0x28]
void* var_3c = nullptr
int32_t* i_4 = i_6
void* var_38 = esi_1 + ((i * 9 + 0x14) << 3)

while (i s< 4)
    int32_t eax_9 = *i_6
    
    if (eax_9 == 0)
        break
    
    if (eax_9 == 1)
        void* edi_2 = &i_6[4]
        int32_t var_34_1 = 0xe
        void* eax_10 = edi_2 - 0xc
        void* var_30_1 = eax_10
        
        while (true)
            int32_t esi_2 = *edi_2
            
            if (*eax_10 != 0xf3a && esi_2 != 0)
                void* eax_11 = var_24
                int32_t edx_2 = 0
                
                while (true)
                    int32_t ecx_3 = *eax_11
                    
                    if (ecx_3 != 0)
                        if (ecx_3 == 1 && *(eax_11 + 4) == esi_2)
                            eax_10 = var_30_1
                            break
                        
                        edx_2 += 1
                        eax_11 += 0x10
                        
                        if (edx_2 s< 0xa)
                            continue
                    
                    int32_t var_4c_1 = esi_2
                    esi_1 = var_24
                    int32_t var_50 = 1
                    int64_t var_48_1 = 0
                    sub_5f6410(&var_50, esi_1, arg3, &var_50)
                    eax_10 = var_30_1
                    goto label_5f6bed
            
            esi_1 = var_24
        label_5f6bed:
            edi_2 += 4
            int32_t temp1_1 = var_34_1
            var_34_1 -= 1
            
            if (temp1_1 == 1)
                break
        
        i_6 = i_4
        edi_1 = var_3c
        i = i_2 + 1
        i_2 = i
        *var_38 = *i_6
        *(var_38 + 0x10) = *(i_6 + 0x10)
        *(var_38 + 0x20) = *(i_6 + 0x20)
        *(var_38 + 0x30) = *(i_6 + 0x30)
        *(var_38 + 0x40) = *(i_6 + 0x40)
        var_38 += 0x48
    
    edi_1 += 1
    i_6 = &i_6[0x12]
    var_3c = edi_1
    i_4 = i_6
    
    if (edi_1 s>= 4)
        break

int32_t* i_3 = 0x6b
int32_t* eax_15 = &arg4[0x70]
int32_t* i_1

do
    if (*eax_15 != 0)
        *(esi_1 - arg4 + eax_15) = *eax_15
    
    eax_15 = &eax_15[4]
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
void* edi_4 = &arg4[0x5c4]
i_4 = i_3
void* eax_16 = edi_4
void* var_28 = edi_4

while (*eax_16 != 0)
    void* ecx_5 = esi_1 + 0x1710
    int32_t edx_7 = 0
    void* eax_17 = ecx_5
    
    while (true)
        int32_t esi_3 = *eax_17
        
        if (esi_3 != 0)
            if (esi_3 == *edi_4)
            label_5f6cb8:
                esi_1 = var_24
                break
            
            edx_7 += 1
            eax_17 += 0x14
            
            if (edx_7 s< 0x20)
                continue
        
        int32_t eax_18 = 0
        
        while (*ecx_5 != 0)
            eax_18 += 1
            ecx_5 += 0x14
            
            if (eax_18 s>= 0x20)
                goto label_5f6cb8
        
        esi_1 = var_24
        void* ecx_17 = esi_1 + eax_18 * 0x14
        *(ecx_17 + 0x1710) = *var_28
        *(ecx_17 + 0x1720) = *(var_28 + 0x10)
        break
    
    edi_4 += 0x14
    void* i_7 = i_4 + 1
    eax_16 = var_28 + 0x14
    i_4 = i_7
    var_28 = eax_16
    
    if (i_7 s>= 0x20)
        break

int32_t var_60_3 = 0
int32_t var_14_1 = 0
sub_63d850(arg3 + 0x30, sub_4e0ff0(eax_16, esi_1, &i_4, *(arg3 + 0x28)))
int32_t var_14_2 = 1

if (data_cf65bc != 0)
    int32_t* i_5 = i_4
    
    if (i_5 != 0 && *i_5 != 0)
        char* eax_21 = sub_63d4e0(&i_4)
        int32_t temp2_1 = *(eax_21 + 4)
        *(eax_21 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)

int32_t var_14_3 = 0xffffffff
data_cc8dc8
sub_4d8ad0(esi_1)
uint32_t eax_22
int32_t ecx_13
eax_22, ecx_13 = sub_4daf40(&i_4, &var_3c)
int32_t var_60_5 = ecx_13
char* result = sub_4dbef0(eax_22)
fsbase->NtTib.ExceptionList = ExceptionList
return result

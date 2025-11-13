// 函数: sub_6896b0
// 地址: 0x6896b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?GetDefaultScheduler@SchedulerBase@details@Concurrency@@CAPAV123@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_147abf8 != 0)
    int32_t* edx_1 = data_147abf4
    void* esi_1 = nullptr
    
    while (true)
        if (esi_1 != 0)
            esi_1 += 0x10
        else
            esi_1 = edx_1[7]
        
        int32_t edi_1 = edx_1[8]
        int32_t ebx_1 = edx_1[7]
        int32_t ecx_3 = (edi_1 << 4) + ebx_1
        
        if (esi_1 u>= ecx_3)
            break
        
        while (true)
            int32_t eax_3 = *(esi_1 + 0xc)
            
            if ((eax_3 & 0xffff0000) != 0)
                int32_t var_30
                char const* const ecx_24
                
                if (eax_3 == 0)
                    char const* const var_2c_9 = "DataArray<struct NetListen>::DataArrayGet"
                    var_30 = 0x6c
                    ecx_24 = "id != DATAID_NULL"
                else
                    uint32_t ecx_4 = zx.d(eax_3.w)
                    
                    if (ecx_4 u< edi_1)
                        uint32_t ecx_5 = ecx_4 * 2
                        void* edi_2 = ebx_1 + (ecx_5 << 3)
                        
                        if (*(ebx_1 + (ecx_5 << 3) + 0xc) == eax_3)
                            (*(*data_147abf8 + 0x28))(*(edi_2 + 4))
                            edx_1 = data_147abf4
                            int32_t ecx_7 = edx_1[0xa]
                            edx_1[0xa] = zx.d(*(edi_2 + 0xc))
                            *(edi_2 + 0xc) = ecx_7
                            edx_1[0xb] -= 1
                            break
                    
                    char const* const var_2c_8 = "DataArray<struct NetListen>::DataArrayGet"
                    var_30 = 0x6d
                    ecx_24 = "DataArrayTryToGet(id) != NULL"
                
                sub_63b870(eax_3, &data_801800, ecx_24, "C:\x\ax2017\Engine\DataArray.h", var_30, 
                    "DataArray<struct NetListen>::DataArrayGet")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            esi_1 += 0x10
            
            if (esi_1 u>= ecx_3)
                goto label_689721
    
label_689721:
    void* i = nullptr
label_689723:
    
    if (i != 0)
        i += 0x64
    else
        i = *edx_1
    
    for (; i u< edx_1[1] * 0x64 + *edx_1; i += 0x64)
        if ((*(i + 0x60) & 0xffff0000) != 0)
            sub_6892c0(i)
            edx_1 = data_147abf4
            goto label_689723
    
    while (edx_1[0x10] != 0)
        int32_t* ecx_8 = edx_1[0xe]
        void* eax_8 = ecx_8[1]
        edx_1[0xe] = eax_8
        
        if (eax_8 == 0)
            edx_1[0xf] = 0
        else
            *(eax_8 + 8) = 0
        
        void* esi_2 = *ecx_8
        edx_1[0x10] -= 1
        sub_64c080(ecx_8, 0xc)
        char* eax_9 = *(esi_2 + 0xed40)
        void* var_14 = esi_2
        
        if (eax_9 != 0 && eax_9 != &data_801800)
            if (data_cf65bc != 0 && *eax_9 != 0)
                char* eax_10 = sub_63d4e0(esi_2 + 0xed40)
                int32_t temp0_1 = *(eax_10 + 4)
                *(eax_10 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
            
            *(esi_2 + 0xed40) = &data_801800
        
        sub_68b830(data_147abf4 + 0x50, &var_14)
        edx_1 = data_147abf4
    
    result = (*(*data_147abf8 + 4))(eax_2)
    void** esi_3 = data_147abf4
    
    while (esi_3[0x13] != 0)
        int32_t* ecx_15 = esi_3[0x12]
        void* eax_12 = ecx_15[2]
        esi_3[0x12] = eax_12
        
        if (eax_12 == 0)
            esi_3[0x11] = 0
        else
            *(eax_12 + 4) = 0
        
        int32_t edi_3 = *ecx_15
        esi_3[0x13] -= 1
        result = sub_64c080(ecx_15, 0xc)
        
        if (edi_3 != 0)
            result = _aligned_free(edi_3)
        
        esi_3 = data_147abf4
    
    while (esi_3[0x16] != 0)
        int32_t* ecx_16 = esi_3[0x15]
        void* eax_13 = ecx_16[2]
        esi_3[0x15] = eax_13
        
        if (eax_13 == 0)
            esi_3[0x14] = 0
        else
            *(eax_13 + 4) = 0
        
        int32_t edi_4 = *ecx_16
        esi_3[0x16] -= 1
        result = sub_64c080(ecx_16, 0xc)
        
        if (edi_4 != 0)
            result = _aligned_free(edi_4)
        
        esi_3 = data_147abf4
    
    void* edi_5 = &esi_3[7]
    
    if (esi_3[7] != 0)
        void* edx_4 = nullptr
        int32_t ecx_17
        
        while (true)
            if (edx_4 != 0)
                edx_4 += 0x10
            else
                edx_4 = *edi_5
            
            ecx_17 = *edi_5
            result = (*(edi_5 + 4) << 4) + ecx_17
            
            if (edx_4 u>= result)
                break
            
            while ((*(edx_4 + 0xc) & 0xffff0000) == 0)
                edx_4 += 0x10
                
                if (edx_4 u>= result)
                    goto label_689930
            
            int32_t ecx_18 = *(edi_5 + 0xc)
            *(edi_5 + 0xc) = zx.d(*(edx_4 + 0xc))
            *(edx_4 + 0xc) = ecx_18
            *(edi_5 + 0x10) -= 1
        
    label_689930:
        *(edi_5 + 4) = 0
        *(edi_5 + 0xc) = 0
        
        if (ecx_17 != 0)
            result = _aligned_free(ecx_17)
            esi_3 = data_147abf4
        
        __builtin_memset(edi_5, 0, 0x14)
        *(edi_5 + 0x18) = 0
    
    if (*esi_3 != 0)
        void* edi_6 = nullptr
        void* ecx_19
        
        while (true)
            if (edi_6 != 0)
                edi_6 += 0x64
            else
                edi_6 = *esi_3
            
            ecx_19 = *esi_3
            result = esi_3[1] * 0x64 + ecx_19
            
            if (edi_6 u>= result)
                break
            
            while ((*(edi_6 + 0x60) & 0xffff0000) == 0)
                edi_6 += 0x64
                
                if (edi_6 u>= result)
                    goto label_6899c4
            
            sub_68b8a0(esi_3, edi_6)
        
    label_6899c4:
        esi_3[1] = 0
        esi_3[3] = 0
        
        if (ecx_19 != 0)
            result = _aligned_free(ecx_19)
        
        __builtin_memset(esi_3, 0, 0x14)
        esi_3[6] = 0
        esi_3 = data_147abf4
    
    if (esi_3 != 0)
        void** ebx_2 = esi_3
        int32_t var_8_1 = 0
        int32_t* i_1 = ebx_2[0x14]
        
        if (i_1 != 0)
            do
                int32_t* i_4 = i_1
                i_1 = i_1[1]
                sub_64c080(i_4, 0xc)
            while (i_1 != 0)
            
            esi_3 = data_147abf4
        
        ebx_2[0x16] = 0
        ebx_2[0x14] = 0
        ebx_2[0x15] = 0
        int32_t var_8_2 = 1
        int32_t* i_2 = ebx_2[0x11]
        
        if (i_2 != 0)
            do
                int32_t* i_5 = i_2
                i_2 = i_2[1]
                sub_64c080(i_5, 0xc)
            while (i_2 != 0)
            
            esi_3 = data_147abf4
        
        ebx_2[0x13] = 0
        ebx_2[0x11] = 0
        ebx_2[0x12] = 0
        int32_t var_8_3 = 2
        int32_t* i_3 = ebx_2[0xe]
        
        if (i_3 != 0)
            do
                int32_t* i_6 = i_3
                i_3 = i_3[1]
                sub_64c080(i_6, 0xc)
            while (i_3 != 0)
            
            esi_3 = data_147abf4
        
        ebx_2[0x10] = 0
        ebx_2[0xe] = 0
        ebx_2[0xf] = 0
        int32_t var_8_4 = 0xffffffff
        result = sub_64c080(esi_3, 0x5c)
        data_147abf4 = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result

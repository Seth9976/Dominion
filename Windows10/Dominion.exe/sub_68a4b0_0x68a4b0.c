// 函数: sub_68a4b0
// 地址: 0x68a4b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76de85
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD*** i = *(arg1 + 0x44)
int32_t edx = 0

if (i != 0)
    do
        result = *i
        i = i[1]
        edx += result[0x3f7b]
    while (i != 0)
    
    if (edx != 0)
        void* edi_1 = arg1 + 0x28
        uint32_t count = sub_688d40(edi_1, edx + *(arg1 + 0x2c) + 1)
        int32_t var_44_2
        struct _EXCEPTION_REGISTRATION_RECORD** result_1
        char* ecx_5
        
        if (*(arg1 + 0x4c) != 0)
            do
                int32_t* ecx_1 = *(arg1 + 0x44)
                void* eax_5 = ecx_1[1]
                *(arg1 + 0x44) = eax_5
                
                if (eax_5 == 0)
                    *(arg1 + 0x48) = 0
                else
                    *(eax_5 + 8) = 0
                
                struct _EXCEPTION_REGISTRATION_RECORD** result_3 = *ecx_1
                *(arg1 + 0x4c) -= 1
                sub_64c080(ecx_1, 0xc)
                count = result_3[0x3f7b] + *(arg1 + 0x2c)
                int32_t edx_3 = *(arg1 + 0x28) + *(arg1 + 0x2c)
                *(arg1 + 0x2c) = count
                
                if (count s> arg1[3].d)
                    char const* const var_40_4 = "AppendHttpResponse"
                    var_44_2 = 0x3fb
                    ecx_5 = "loc.httpResponsePartial.dataLength <= loc.httpResponsePartial.allocatedLength"
                    goto label_68a7e7
                
                count = result_3[0x3f7b]
                
                if (count s<= 0)
                    char const* const var_40_3 = "AppendHttpResponse"
                    var_44_2 = 0x3fd
                    ecx_5 = "netBuffer->mDataSize > 0"
                    goto label_68a7e7
                
                memcpy(edx_3, result_3[0x3f7a] + result_3, count)
                void* ecx_2 = data_147abf4
                result_1 = result_3
                count = sub_68b830(ecx_2 + 0x44, &result_1)
            while (*(arg1 + 0x4c) != 0)
            
            edi_1 = arg1 + 0x28
        
        char* ecx_4 = *(arg1 + 0x2c)
        
        if (ecx_4 s>= arg1[3].d)
            char const* const var_40_8 = "AppendHttpResponse"
            var_44_2 = 0x404
            ecx_5 = "loc.httpResponsePartial.dataLength < loc.httpResponsePartial.allocatedLength"
        label_68a7e7:
            sub_63b870(count, &data_801800, ecx_5, "C:\x\ax2017\Engine\Network.cpp", var_44_2, 
                "AppendHttpResponse")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        int32_t eax_9 = *edi_1
        result_1 = &data_801800
        ecx_4[eax_9] = 0
        int32_t var_14_1 = 0
        char* const result_2 = &data_801800
        var_14_1.b = 1
        char* const* var_40_5 = &result_2
        int32_t var_2c
        result = sub_689f40(&result_1, &var_2c, arg1 + 0x28, &result_1)
        
        if (result != 1)
            int32_t edx_7 = *(edi_1 + 8)
            
            if (result != 2)
                if (edx_7 s<= 0)
                    goto label_68a6f5
                
                int32_t* ecx_12 = *edi_1
                
                if (ecx_12 == 0)
                label_68a814:
                    sub_63b870(result, &data_801800, "buffer.dataPtr != NULL", 
                        "C:\x\ax2017\Engine\Network.cpp", 0x4b, "ResizableBufferFree")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                sub_64c080(ecx_12, edx_7)
                *edi_1 = 0
                *(edi_1 + 8) = 0
                *(edi_1 + 4) = 0
            label_68a6f5:
                int32_t* eax_11 = sub_688ff0()
                int32_t* var_30 = eax_11
                eax_11[1] = 0xfa0
                *eax_11 = arg1[6].d
                eax_11[0x3b4f] = var_2c
                eax_11[2] = 0
                *(eax_11 + 0xed44) = *arg1
                *(eax_11 + 0xed54) = arg1[1]
                sub_63d850(&eax_11[0x3b50], &result_2)
                result = sub_68b830(data_147abf4 + 0x38, &var_30)
                var_14_1.b = 6
                
                if (data_cf65bc != 0)
                    result = result_2
                    
                    if (result != 0 && *result != 0)
                        result = sub_63d4e0(&result_2)
                        int32_t temp1_1 = result[1]
                        result[1] -= 1
                        
                        if (temp1_1 == 1)
                            result = sub_64c080(result, &result[3][2])
                
                int32_t var_14_4 = 7
            else
                if (edx_7 s> 0)
                    int32_t* ecx_9 = *edi_1
                    
                    if (ecx_9 == 0)
                        goto label_68a814
                    
                    result = sub_64c080(ecx_9, edx_7)
                    *edi_1 = 0
                    *(edi_1 + 8) = 0
                    *(edi_1 + 4) = 0
                
                var_14_1.b = 4
                
                if (data_cf65bc != 0)
                    result = result_2
                    
                    if (result != 0 && *result != 0)
                        result = sub_63d4e0(&result_2)
                        int32_t temp2_1 = result[1]
                        result[1] -= 1
                        
                        if (temp2_1 == 1)
                            result = sub_64c080(result, &result[3][2])
                
                int32_t var_14_3 = 5
        else
            var_14_1.b = 2
            
            if (data_cf65bc != 0)
                result = result_2
                
                if (result != 0 && *result != 0)
                    result = sub_63d4e0(&result_2)
                    int32_t temp0_1 = result[1]
                    result[1] -= 1
                    
                    if (temp0_1 == 1)
                        result = sub_64c080(result, &result[3][2])
            
            int32_t var_14_2 = 3
        
        if (data_cf65bc != 0)
            result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_1)
                int32_t temp3_1 = result[1]
                result[1] -= 1
                
                if (temp3_1 == 1)
                    result = sub_64c080(result, &result[3][2])

fsbase->NtTib.ExceptionList = ExceptionList
return result

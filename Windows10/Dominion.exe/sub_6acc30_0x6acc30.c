// 函数: sub_6acc30
// 地址: 0x6acc30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??1_Cancellation_beacon@details@Concurrency@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

for (void* i = &data_1476b4c; i s< &data_1476b8c; i += 4)
    int32_t edx_1 = *i
    
    if (edx_1 != 0)
        (*(*data_147b070 + 0x30))(edx_1)
        *i = 0

int32_t edx_2 = data_1476b48

if (edx_2 != 0)
    (*(*data_147b070 + 0x3c))(edx_2)
    data_1476b48 = 0

void* esi = nullptr

while (true)
    void* ecx_3 = data_cafe8c
    
    while (true)
        if (esi != 0)
            esi += 0xf10
        else
            esi = ecx_3
        
        void* eax_6 = data_cafe90 * 0xf10 + ecx_3
        
        if (esi u>= eax_6)
        label_6acce6:
            
            if (ecx_3 != 0)
                void* edx_3 = nullptr
                
                while (true)
                    if (edx_3 != 0)
                        edx_3 += 0xf10
                    else
                        edx_3 = ecx_3
                    
                    void* eax_9 = data_cafe90 * 0xf10 + ecx_3
                    
                    if (edx_3 u>= eax_9)
                        break
                    
                    while (true)
                        int32_t esi_1 = *(edx_3 + 0xf0c)
                        
                        if ((esi_1 & 0xffff0000) != 0)
                            int32_t ecx_12 = data_cafe98
                            data_cafe98 = zx.d(esi_1.w)
                            *(edx_3 + 0xf0c) = ecx_12
                            data_cafe9c -= 1
                            ecx_3 = data_cafe8c
                            break
                        
                        edx_3 += 0xf10
                        
                        if (edx_3 u>= eax_9)
                            goto label_6acd8c
                
            label_6acd8c:
                data_cafe90 = 0
                data_cafe98 = 0
                
                if (ecx_3 != 0)
                    _aligned_free(ecx_3)
                
                __builtin_memset(&data_cafe8c, 0, 0x14)
                data_cafea4 = 0
            
            int32_t* ecx_5 = data_147d2dc
            
            if (ecx_5 != 0)
                sub_64c080(ecx_5, 1)
                data_147d2dc = 0
            
            int32_t* result = sub_681a70()
            int32_t* ecx_6 = data_147abe4
            
            for (int32_t* i_1 = nullptr; i_1 s< 0x10; i_1 = &i_1[1])
                int32_t edx_5 = *(i_1 + ecx_6)
                
                if (edx_5 != 0)
                    result = (*(*data_147b070 + 0x30))(edx_5)
                    ecx_6 = data_147abe4
            
            int32_t edx_6 = ecx_6[5]
            
            if (edx_6 != 0)
                result = (*(*data_147b070 + 0x3c))(edx_6)
                ecx_6 = data_147abe4
            
            if (ecx_6 != 0)
                void* edi_1 = &ecx_6[0x10]
                int32_t var_8_1 = 0
                int32_t* i_2 = *edi_1
                
                if (i_2 != 0)
                    do
                        int32_t* i_3 = i_2
                        i_2 = i_2[1]
                        sub_64c080(i_3, 0xc)
                    while (i_2 != 0)
                    
                    ecx_6 = data_147abe4
                
                *(edi_1 + 8) = 0
                *edi_1 = 0
                *(edi_1 + 4) = 0
                int32_t var_8_2 = 0xffffffff
                result = sub_64c080(ecx_6, 0x54)
                data_147abe4 = 0
            
            int32_t* ecx_9 = data_147b06c
            
            if (ecx_9 != 0)
                result = sub_64c080(ecx_9, 0x2e0)
                data_147b06c = 0
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        while ((*(esi + 0xf0c) & 0xffff0000) == 0)
            esi += 0xf10
            
            if (esi u>= eax_6)
                goto label_6acce6
        
        if (*(esi + 0xf08) != 0)
            int32_t edx_4 = *(esi + 0xe44)
            
            if (edx_4 != 0)
                (*(*data_147b070 + 0x54))(edx_4)
                *(esi + 0xe44) = 0
            
            *(esi + 0x7e4) = 0
            *(esi + 0x3f8) = 0
            *(esi + 0x3f4) = 0
            *(esi + 8) = 0
            *(esi + 4) = 0
            *(esi + 0xf08) = 0
            break

// 函数: sub_4d4b70
// 地址: 0x4d4b70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?_Push@_Micro_queue@details@Concurrency@@QAEXPAXIAAV_Concurrent_queue_base_v4@23@P8423@AEXAAU_Page@423@I0@Z@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg2
void* var_18 = ebx
int32_t* esi = arg3
int32_t eax_6 = arg5
int32_t eax_16

if (((ebx - esi) & 0xffffffe0) s<= 0x400)
label_4d4c23:
    eax_16 = sub_4d5020(eax_6, ebx, esi, eax_6)
else
    int32_t edi_1 = arg4
    
    while (true)
        if (edi_1 s<= 0)
            eax_16 = (ebx - esi) s>> 5
            int32_t i = eax_16 s>> 1
            
            if (i s> 0)
                void* edi_6 = (i << 5) + 8 + esi
                
                do
                    int32_t eax_19 = *(edi_6 - 0x28)
                    edi_6 -= 0x20
                    int32_t var_44 = eax_19
                    int32_t var_40_1 = *(edi_6 - 4)
                    char* eax_21 = *edi_6
                    char* var_3c = eax_21
                    
                    if (eax_21 != 0 && *eax_21 != 0)
                        char* eax_22 = sub_63d4e0(&var_3c)
                        *(eax_22 + 4) += 1
                    
                    int32_t var_38_1 = *(edi_6 + 4)
                    int32_t var_34_1 = *(edi_6 + 8)
                    int32_t var_2c_1 = *(edi_6 + 0x10)
                    int32_t var_28_1 = *(edi_6 + 0x14)
                    int32_t var_8_1 = 0
                    sub_4d5590(&var_44, i - 1, esi, eax_16, &var_44, arg5)
                    int32_t var_8_2 = 1
                    
                    if (data_cf65bc != 0)
                        char* eax_27 = var_3c
                        
                        if (eax_27 != 0 && *eax_27 != 0)
                            char* eax_28 = sub_63d4e0(&var_3c)
                            int32_t temp0_1 = *(eax_28 + 4)
                            *(eax_28 + 4) -= 1
                            
                            if (temp0_1 == 1)
                                sub_64c080(eax_28, *(eax_28 + 0xc) + 0x10)
                    
                    i -= 1
                    int32_t var_8_3 = 0xffffffff
                while (i s> 0)
                
                ebx = var_18
            
            if (eax_16 s< 2)
                break
            
            void* edi_7 = ebx - 0x1c
            void* i_1
            
            do
                int32_t var_64 = *(edi_7 - 4)
                int32_t var_60_1 = *edi_7
                char* eax_33 = *(edi_7 + 4)
                char* var_5c = eax_33
                
                if (eax_33 != 0 && *eax_33 != 0)
                    char* eax_34 = sub_63d4e0(&var_5c)
                    *(eax_34 + 4) += 1
                
                int32_t var_58_1 = *(edi_7 + 8)
                int32_t var_54_1 = *(edi_7 + 0xc)
                int32_t var_4c_1 = *(edi_7 + 0x14)
                int32_t var_48_1 = *(edi_7 + 0x18)
                int32_t var_8_4 = 2
                *(edi_7 - 4) = *esi
                *edi_7 = esi[1]
                sub_63d850(edi_7 + 4, &esi[2])
                *(edi_7 + 8) = esi[3]
                *(edi_7 + 0xc) = esi[4]
                int32_t ecx_18 = esi[7]
                *(edi_7 + 0x14) = esi[6]
                *(edi_7 + 0x18) = ecx_18
                int32_t eax_46 = (0xfffffffc - esi + edi_7) s>> 5
                sub_4d5590(eax_46, 0, esi, eax_46, &var_64, arg5)
                int32_t var_8_5 = 3
                
                if (data_cf65bc != 0)
                    char* eax_47 = var_5c
                    
                    if (eax_47 != 0 && *eax_47 != 0)
                        char* eax_48 = sub_63d4e0(&var_5c)
                        int32_t temp1_1 = *(eax_48 + 4)
                        *(eax_48 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            sub_64c080(eax_48, *(eax_48 + 0xc) + 0x10)
                
                edi_7 -= 0x20
                int32_t var_8_6 = 0xffffffff
                i_1 = (0x1c - esi + edi_7) & 0xffffffe0
            while (i_1 s>= 0x40)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return i_1
        
        void* var_24
        sub_4d51f0(eax_6, esi, &var_24, ebx, eax_6)
        edi_1 = (edi_1 s>> 1) + (edi_1 s>> 2)
        int32_t* var_20
        
        if (((var_24 - esi) & 0xffffffe0) s>= ((ebx - var_20) & 0xffffffe0))
            sub_4d4b70(edi_1, arg5, eax_2)
            ebx = var_24
            var_18 = ebx
        else
            sub_4d4b70(edi_1, arg5, eax_2)
            esi = var_20
        
        eax_6 = arg5
        
        if (((ebx - esi) & 0xffffffe0) s<= 0x400)
            goto label_4d4c23

fsbase->NtTib.ExceptionList = ExceptionList
return eax_16

// 函数: sub_4cabd0
// 地址: 0x4cabd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?_Tidy@ios_base@std@@AAEXXZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = arg3
int32_t var_1c = edx
int32_t ecx = arg7
int32_t edi = arg6

if (edi s< ecx)
    void* esi_1 = nullptr
    void* var_20_1 = nullptr
    void* ebx_1 = &data_19e58fc
    int32_t* var_18_1 = arg4 + (edi << 2)
    
    while (true)
        int32_t* edi_1
        
        if (*ebx_1 != "tblStoreItems" || *(ebx_1 - 4) != edx || *(ebx_1 + 4) != esi_1
            || *(ebx_1 + 8) != 0)
        label_4cac6c:
            ecx = arg7
            edi_1 = sub_67be20(esi_1)
            *(ebx_1 + 0x1c) = edi_1
            
            if (edi_1 != 0)
                *ebx_1 = "tblStoreItems"
                *(ebx_1 - 4) = var_1c
                *(ebx_1 + 4) = esi_1
                *(ebx_1 + 8) = 0
        else
            edi_1 = *(ebx_1 + 0x1c)
            
            if (edi_1 == 0)
                goto label_4cac6c
            
            uint32_t eax_5 = zx.d(edi_1.w)
            
            if (eax_5 u>= data_c23bac || *(eax_5 * 0x18d0 + data_c23ba8 + 0x18c8) != edi_1)
                goto label_4cac6c
        
        char* esi_3 = *var_18_1
        char* var_14 = esi_3
        
        if (*(esi_3 + 4) != 7)
            if (edi_1 != 0)
                if (arg5 == 1)
                    uint32_t eax_10 = sub_64e7a0(edi_1)
                    sub_665db0(eax_10, &data_8dc3bc, eax_10, 0x3f800000, 0xffffffff, 0)
                
                int32_t esi_4 = *(esi_3 + 0x20)
                uint32_t eax_11 = sub_64e7a0(edi_1)
                sub_665db0(eax_11, esi_4, eax_11, 0x3f800000, 0xffffffff, 0)
                esi_3 = var_14
            
            int32_t eax_12 = sub_4dae80(esi_3)
            int32_t var_38
            
            if (eax_12 u> 7)
                char const* const var_34_3 = "StoreDlgUpdateRow"
                var_38 = 0x22ba
            label_4caf0e:
                sub_63b870(eax_12, &data_801800, "Halt", 
                    "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp", var_38, 
                    "StoreDlgUpdateRow")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            uint32_t eax_13
            void** edx_3
            
            switch (eax_12)
                case 0
                    if (edi_1 != 0)
                        eax_13 = sub_64e7a0(edi_1)
                        edx_3 = &data_8dc38c
                        goto label_4cae77
                case 1
                    if (edi_1 != 0)
                        if (arg5 == 0 && *esi_3 == 2)
                            uint32_t eax_14 = sub_64e7a0(edi_1)
                            sub_665db0(eax_14, &data_8dc3f8, eax_14, 0x3f800000, 0xffffffff, 0)
                        
                        if (sub_4e3b00(*esi_3) != 0)
                            eax_13 = sub_64e7a0(edi_1)
                            edx_3 = &data_8dc3b0
                            goto label_4cae77
                        
                        var_14 = &data_801800
                        int32_t var_8_1 = 0
                        
                        if (sub_64bba0(esi_3, &var_14) != 0)
                            uint32_t eax_17 = sub_64e7a0(edi_1)
                            sub_665db0(eax_17, &data_8dc3e0, eax_17, 0x3f800000, 0xffffffff, 0)
                            int32_t var_3c_1 = 0xffffffff
                            sub_666380(&var_14, &data_8dc3ec, edi_1, &var_14)
                        
                        uint32_t eax_19 = sub_64e7a0(edi_1)
                        sub_665db0(eax_19, &data_8dc398, eax_19, 0x3f800000, 0xffffffff, 0)
                        int32_t var_8_2 = 1
                        
                        if (data_cf65bc != 0)
                            char* eax_20 = var_14
                            
                            if (eax_20 != 0 && *eax_20 != 0)
                                char* eax_21 = sub_63d4e0(&var_14)
                                int32_t temp0_1 = *(eax_21 + 4)
                                *(eax_21 + 4) -= 1
                                
                                if (temp0_1 == 1)
                                    sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
                                    var_14 = &data_801800
                        
                        int32_t var_8_3 = 0xffffffff
                case 2, 5
                    if (edi_1 != 0)
                        eax_13 = sub_64e7a0(edi_1)
                        edx_3 = &data_8dc374
                        goto label_4cae77
                case 3, 7
                    char const* const var_34_2 = "StoreDlgUpdateRow"
                    var_38 = 0x22b8
                    goto label_4caf0e
                case 4
                    if (edi_1 != 0)
                        eax_13 = sub_64e7a0(edi_1)
                        edx_3 = &data_8dc3a4
                        goto label_4cae77
                case 6
                    if (edi_1 != 0)
                        eax_13 = sub_64e7a0(edi_1)
                        edx_3 = &data_8dc380
                    label_4cae77:
                        sub_665db0(eax_13, edx_3, eax_13, 0x3f800000, 0xffffffff, 0)
            
            if (sub_4be9d0(*esi_3) != 0 && edi_1 != 0)
                uint32_t eax_23 = sub_64e7a0(edi_1)
                sub_665db0(eax_23, &data_8db988, eax_23, 0x3f800000, 0xffffffff, 0)
            
            ecx = arg7
        
        ebx_1 += 0x24
        edi = arg6
        esi_1 = var_20_1 + 1
        var_18_1 = &var_18_1[1]
        var_20_1 = esi_1
        
        if (esi_1 + edi s>= ecx)
            break
        
        edx = var_1c

fsbase->NtTib.ExceptionList = ExceptionList
return ecx - edi

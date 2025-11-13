// 函数: sub_60b430
// 地址: 0x60b430
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76ae11
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_ec = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_f0)(void* arg1) = sub_4ab1f0
int32_t var_8_1 = 0
void var_c8
int32_t var_f0_1 = `eh vector constructor iterator'(&var_c8, 0xc, 0xf, sub_4ab1e0)
int32_t eax_3 = sub_60a220(data_ccf6b4, &var_c8)
int32_t var_f4 = 0xffffffff
sub_666120(eax_3, &data_be5bdc, arg1, eax_3)
int32_t esi = 0

if (eax_3 s> 0)
    int32_t eax_4 = 0
    int32_t var_d4_1 = 0
    int32_t ebx_2
    
    do
        void var_c4
        void* eax_5 = eax_4 + &var_c4
        int32_t var_f0_2 = esi
        sub_666380(eax_5, &data_be5be8, arg1, eax_5)
        int32_t ebx_1 = esi * 3
        void var_c0
        int32_t var_f8_1 = *(&var_c0 + (ebx_1 << 2))
        char* const var_cc
        sub_63df30(&var_cc, "%d")
        var_8_1.b = 1
        int32_t var_104_1 = esi
        sub_666380(&var_cc, &data_be5bf4, arg1, &var_cc)
        var_8_1.b = 2
        
        if (data_cf65bc != 0)
            char* eax_7 = var_cc
            
            if (eax_7 != 0 && *eax_7 != 0)
                char* eax_8 = sub_63d4e0(&var_cc)
                int32_t temp1_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
                    var_cc = &data_801800
        
        var_8_1.b = 0
        void* eax_9 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        
        if (*(&var_c8 + (ebx_1 << 2)) != *(eax_9 + 0x4250))
            ebx_2 = eax_3
        else
            uint32_t eax_10 = sub_64e7a0(arg1)
            sub_665db0(eax_10, &data_be5c00, eax_10, 0x3f800000, esi, 0)
            ebx_2 = eax_3
            
            if (esi == ebx_2 - 1)
                uint32_t eax_12 = sub_64e7a0(arg1)
                sub_665db0(eax_12, &data_be5c0c, eax_12, 0x3f800000, esi, 0)
        
        uint32_t eax_22
        
        if (esi == 0)
            eax_22 = sub_64e7a0(arg1)
            int32_t var_f0_5 = 0
            sub_665db0(eax_22, &data_be5b64, eax_22, 0x3f800000, 0, 0)
        else if (esi == 1)
            eax_22 = sub_64e7a0(arg1)
            int32_t var_f0_4 = 0
            sub_665db0(eax_22, &data_be5b70, eax_22, 0x3f800000, 1, 0)
        else if (esi == 2)
            eax_22 = sub_64e7a0(arg1)
            int32_t var_f0_3 = 0
            sub_665db0(eax_22, &data_be5b7c, eax_22, 0x3f800000, 2, 0)
        else
            uint32_t eax_17 = sub_64e7a0(arg1)
            sub_665db0(eax_17, &data_be5b88, eax_17, 0x3f800000, esi, 0)
            int32_t var_f8_2 = esi + 1
            char* const var_d0
            sub_63df30(&var_d0, "%d")
            var_8_1.b = 3
            int32_t var_104_2 = esi
            sub_666380(&var_d0, &data_be5b94, arg1, &var_d0)
            var_8_1.b = 4
            
            if (data_cf65bc != 0)
                char* eax_20 = var_d0
                
                if (eax_20 != 0 && *eax_20 != 0)
                    char* eax_21 = sub_63d4e0(&var_d0)
                    int32_t temp4_1 = *(eax_21 + 4)
                    *(eax_21 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
                        var_d0 = &data_801800
            
            var_8_1.b = 0
        esi += 1
        eax_4 = var_d4_1 + 0xc
        var_d4_1 = eax_4
    while (esi s< ebx_2)

uint32_t eax_24
void** edx_6

if (data_ccf6b4 != 1)
    eax_24 = sub_64e7a0(arg1)
    edx_6 = &data_be5d44
else
    eax_24 = sub_64e7a0(arg1)
    edx_6 = &data_be5d38

sub_665db0(eax_24, edx_6, eax_24, 0x3f800000, 0xffffffff, 0)
int32_t var_8_2 = 0xffffffff
uint32_t result = `eh vector vbase constructor iterator'(&var_c8, 0xc, 0xf, sub_4ab1f0)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result

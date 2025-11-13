// 函数: sub_63c340
// 地址: 0x63c340
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76c310
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_c4 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL hMem_1

if (IsClipboardFormatAvailable(1) == 0)
    hMem_1.b = 0
else if (OpenClipboard(nullptr) == 0)
    hMem_1.b = 0
else
    hMem_1 = GetClipboardData(0xd)
    BOOL hMem = hMem_1
    
    if (hMem_1 == 0)
        hMem_1.b = 0
    else
        BOOL ecx = GlobalLock(hMem_1)
        BOOL var_b0_1 = ecx
        
        if (ecx == 0)
            hMem_1.b = 0
        else
            int16_t* esi_1 = ecx
            int128_t var_3c
            __builtin_memset(&var_3c, 0, 0x18)
            
            do
                hMem_1.w = *esi_1
                esi_1 = &esi_1[1]
            while (hMem_1.w != 0)
            
            int32_t esi_3 = (esi_1 - &esi_1[1]) s>> 1
            
            if (esi_3 u> 0x7ffffffe)
                sub_5b0860()
                noreturn
            
            int32_t var_28_1
            uint32_t edi_1
            
            if (esi_3 u> 7)
                int32_t eax_4 = esi_3 | 7
                
                if (eax_4 u<= 0x7ffffffe)
                    ecx = 0xa
                    
                    if (eax_4 u< 0xa)
                        eax_4 = 0xa
                else
                    eax_4 = 0x7ffffffe
                
                int32_t var_ac = eax_4
                int32_t var_2c_2 = esi_3
                edi_1 = sub_63d480(ecx, &var_ac)
                int32_t count_1 = esi_3 * 2
                var_3c.d = edi_1
                var_28_1 = var_ac
                memcpy(edi_1, var_b0_1, count_1)
                *(count_1 + edi_1) = 0
            else
                int32_t var_2c_1 = esi_3
                int32_t count = esi_3 * 2
                var_28_1 = 7
                memcpy(&var_3c, ecx, count)
                *(&var_3c + count) = 0
                edi_1 = var_3c.d
            
            int32_t var_14_1 = 0
            void** var_a8
            sub_63ca90(&var_a8)
            uint16_t* eax_7 = var_b0_1
            var_14_1.b = 1
            
            if (*var_b0_1 != 0)
                do
                    eax_7 = &eax_7[1]
                while (*eax_7 != 0)
            
            int32_t* var_54
            sub_63cca0(&var_a8, &var_54, var_b0_1, eax_7)
            int32_t* eax_8 = &var_54
            var_14_1.b = 2
            int32_t var_40
            
            if (var_40 u> 0xf)
                eax_8 = var_54
            
            sub_63d8d0(arg1, eax_8)
            GlobalUnlock(hMem)
            CloseClipboard()
            
            if (var_40 u> 0xf)
                int32_t* edx_3 = var_54
                int32_t ecx_6 = var_40 + 1
                int32_t* eax_9 = edx_3
                
                if (ecx_6 u>= 0x1000)
                    edx_3 = eax_9[-1]
                    ecx_6 += 0x23
                    
                    if (eax_9 - edx_3 - 4 u> 0x1f)
                        _invalid_parameter_noinfo_noreturn()
                        noreturn
                
                int32_t var_c8_7 = ecx_6
                operator new(edx_3)
            
            sub_63ca10(&var_a8)
            
            if (var_28_1 u<= 7)
                hMem_1.b = 1
            else
                void* ecx_9 = (var_28_1 << 1) + 2
                uint32_t eax_12 = edi_1
                
                if (ecx_9 u>= 0x1000)
                    edi_1 = *(eax_12 - 4)
                    ecx_9 += 0x23
                    
                    if (eax_12 - edi_1 - 4 u> 0x1f)
                        _invalid_parameter_noinfo_noreturn()
                        noreturn
                
                void* var_c8_8 = ecx_9
                operator new(edi_1)
                hMem_1.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(hMem_1)
return hMem_1

// 函数: sub_57ce80
// 地址: 0x57ce80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = arg2
void* var_c9c = esi
int32_t __saved_ebp
int32_t eax_3 = *sub_5722c0(__security_cookie ^ &__saved_ebp, 0x3f1, esi, arg4)
int32_t var_c98 = eax_3
int32_t edi_2

if (eax_3 != 0)
    uint32_t edi_1 = zx.d(eax_3.w)
    
    if (edi_1 u>= 0x320)
        sub_591930()
    
    edi_2 = *(edi_1 * 0x64 + esi + 0x1aa4)
    eax_3 = var_c98
    goto label_57cee2

while (true)
    edi_2 = 0
label_57cee2:
    
    if (eax_3 == 0)
        int32_t eax_10 = 0
        void* ecx_3 = esi + 0x174c
        int32_t var_c94[0x320]
        
        for (int32_t i = 0x22; i s< 0x26; )
            int32_t edi_3 = *ecx_3
            
            if (edi_3 != 0)
                var_c94[eax_10] = edi_3
                eax_10 += 1
            
            i += 1
            ecx_3 += 0x10
        
        int32_t (* ecx_4)[0x320] = &var_c94
        int32_t var_14 = eax_10
        int32_t (* var_ca4)[0x320] = &var_c94
        void* result = &var_c94[eax_10]
        void* result_1 = result
        
        if (&var_c94 != result)
            do
                int32_t edi_4 = *ecx_4
                result = sub_5757f0(result, edi_4.w, esi, 0x8000000, 0)
                
                if (result.b != 0)
                    uint32_t eax_11 = zx.d(edi_4.w)
                    var_c98 = 0
                    
                    if (eax_11 u>= 0x320)
                        sub_591930()
                    
                    int32_t eax_12 = eax_11 * 0x64
                    result = sub_574a80(eax_12, arg4, esi, *(eax_12 + esi + 0x1a4c), &var_c98)
                    
                    if (result.b != 0)
                        void* result_2 = nullptr
                        
                        if (var_c98 s> 0)
                            do
                                if (edi_4 == 0)
                                    sub_63b870(result, &data_801800, "card != CARDID_NULL", 
                                        "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x1ef0, 
                                        "CollectWhileOwnedAbilities")
                                    
                                    if (sub_63bc30() != 0)
                                        breakpoint
                                    
                                    sub_63bb00()
                                    noreturn
                                
                                uint32_t eax_14 = sub_57ce10(arg6, edi_4, esi, arg5, arg6)
                                
                                if (sub_57c810(eax_14, arg4, var_c9c, eax_14, arg6, arg7, 
                                        0xffffffff, arg8) != 0)
                                    *(arg3 + (*(arg3 + 0x400) << 2)) = eax_14
                                    *(arg3 + 0x400) += 1
                                
                                uint32_t esi_4 = zx.d(edi_4.w)
                                
                                if (esi_4 u>= 0x320)
                                    sub_591930()
                                
                                result = result_2 + 1
                                esi = var_c9c
                                result_2 = result
                                edi_4 = *(esi_4 * 0x64 + esi + 0x1aa4)
                            while (result s< var_c98)
                
                ecx_4 = &(*var_ca4)[1]
                var_ca4 = ecx_4
            while (ecx_4 != result_1)
        
        CookieCheckFunction(result)
        return result
    
    uint32_t eax_5 = sub_57ce10(eax_3, eax_3, esi, arg5, arg6)
    
    if (sub_57c810(arg6, arg4, var_c9c, eax_5, arg6, arg7, 0xffffffff, arg8) != 0)
        *(arg3 + (*(arg3 + 0x400) << 2)) = eax_5
        *(arg3 + 0x400) += 1
    
    eax_3 = edi_2
    var_c98 = eax_3
    
    if (edi_2 != 0)
        break
    
    esi = var_c9c

uint32_t esi_2 = zx.d(edi_2.w)

if (esi_2 u>= 0x320)
    sub_591930()

esi = var_c9c
edi_2 = *(esi_2 * 0x64 + esi + 0x1aa4)
eax_3 = var_c98
goto label_57cee2

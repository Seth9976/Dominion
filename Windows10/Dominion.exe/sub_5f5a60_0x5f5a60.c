// 函数: sub_5f5a60
// 地址: 0x5f5a60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76a3ee
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
char* ecx
void* edx
ecx, edx = __chkstk(0x5df0)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_5e00 = edx
uint32_t result

if (*ecx != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_30_1)(void* arg1) = sub_4ab280
    void var_5de8
    int32_t eax_4
    int32_t edx_1
    eax_4, edx_1 = `eh vector constructor iterator'(&var_5de8, 0x10, 0x3e8, sub_4ab270)
    int32_t var_14_1 = 0
    uint32_t eax_5 = sub_5f5700(eax_4, edx_1, &var_5de8, arg4)
    uint32_t result_2 = 0
    uint32_t var_5dfc_1 = eax_5
    uint32_t result_1 = 0
    int32_t var_1f68[0x2]
    
    if (eax_5 s> 0)
        void* esi = &var_5de8
        void* var_5df0_1 = &var_5de8
        
        while (true)
            int32_t var_30_3 = arg4
            int32_t eax_6 = sub_5f5340(*esi, ecx)
            
            if (eax_6 != 0xffffffff && *(esi + 0xc) != 0)
                int32_t ecx_3 = *(esi + 4)
                int32_t edx_3 = eax_6 + 0x400
                
                if (ecx_3 == *esi)
                    edx_3 = eax_6
                
                if ((*(sub_571b30(ecx_3, 0x18) + 0x9c) & 0x40000) == 0)
                    int32_t eax_9 = arg3
                    int32_t edx_4 = 0
                    
                    if (eax_9 s> 0)
                        int32_t* ecx_6 = arg2
                        
                        do
                            if (*ecx_6 == 1)
                                if (ecx_6[1] == *(esi + 4))
                                    goto label_5f5c7e
                                
                                eax_9 = arg3
                            
                            edx_4 += 1
                            ecx_6 = &ecx_6[4]
                        while (edx_4 s< eax_9)
                
                int32_t ecx_7 = 0
                var_1f64
                
                if (result_2 s<= 0)
                label_5f5c6f:
                    (&var_1f68)[result_2][0] = esi
                    *(&var_1f64 + (result_2 << 3)) = edx_3
                    result_2 += 1
                else
                    while (true)
                        int32_t edx_5 = ecx_7 << 3
                        
                        if (*((&var_1f68)[ecx_7][0] + 4) == *(esi + 4))
                            esi = var_5df0_1
                            
                            if (edx_3 s< *(&var_1f64 + edx_5))
                                (&var_1f68)[ecx_7][0] = esi
                                *(&var_1f64 + edx_5) = edx_3
                            
                            break
                        
                        ecx_7 += 1
                        
                        if (ecx_7 s>= result_2)
                            int32_t ecx_8 = edx_3
                            int32_t esi_2 = 0
                            
                            while (true)
                                int32_t temp1_1 = *(&var_1f64 + (esi_2 << 3))
                                int32_t* var_5df8_1
                                
                                if (temp1_1 s> ecx_8)
                                    var_5df8_1 = &(&var_1f68)[esi_2]
                                else
                                    if (temp1_1 != ecx_8)
                                        goto label_5f5c53
                                    
                                    char* const edx_6 = &data_801800
                                    char* eax_13 = *(var_5df0_1 + 8)
                                    
                                    if (eax_13 != 0)
                                        edx_6 = eax_13
                                    
                                    int32_t* eax_14 = &(&var_1f68)[esi_2]
                                    var_5df8_1 = eax_14
                                    char* ecx_9 = *(*eax_14 + 8)
                                    char* const eax_16 = &data_801800
                                    
                                    if (ecx_9 != 0)
                                        eax_16 = ecx_9
                                    
                                    int32_t eax_18
                                    
                                    while (true)
                                        ecx_9.b = *eax_16
                                        char temp2_1 = *edx_6
                                        bool c_1 = ecx_9.b u< temp2_1
                                        
                                        if (ecx_9.b == temp2_1)
                                            if (ecx_9.b == 0)
                                                eax_18 = 0
                                                break
                                            
                                            ecx_9.b = eax_16[1]
                                            char temp3_1 = edx_6[1]
                                            c_1 = ecx_9.b u< temp3_1
                                            
                                            if (ecx_9.b == temp3_1)
                                                eax_16 = &eax_16[2]
                                                edx_6 = &edx_6[2]
                                                
                                                if (ecx_9.b != 0)
                                                    continue
                                                
                                                eax_18 = 0
                                                break
                                        
                                        eax_18 = sbb.d(eax_16, eax_16, c_1) | 1
                                        break
                                    
                                    if (eax_18 s<= 0)
                                        ecx_8 = edx_3
                                    label_5f5c53:
                                        esi_2 += 1
                                        
                                        if (esi_2 s>= result_2)
                                            break
                                        
                                        continue
                                
                                int32_t count_1 = (result_2 - esi_2) << 3
                                int32_t count = count_1 - 8
                                
                                if (result_2 != 3)
                                    count = count_1
                                
                                void var_1f60
                                memmove(&var_1f60 + (esi_2 << 3), &(&var_1f68)[esi_2], count)
                                esi = var_5df0_1
                                var_5df8_1[1] = edx_3
                                *var_5df8_1 = esi
                                
                                if (result_2 != 3)
                                    result_2 += 1
                                
                                goto label_5f5c7e
                            
                            esi = var_5df0_1
                            
                            if (result_2 s>= 3)
                                goto label_5f5c7e
                            
                            goto label_5f5c6f
            
        label_5f5c7e:
            esi += 0x10
            uint32_t temp0_1 = var_5dfc_1
            var_5dfc_1 -= 1
            var_5df0_1 = esi
            
            if (temp0_1 == 1)
                break
        
        result_1 = result_2
    
    int32_t edi_1 = 0
    
    if (result_1 s> 0)
        do
            int32_t esi_3 = *((&var_1f68)[edi_1][0] + 4)
            void* eax_21 = sub_571b30(esi_3, 0x18)
            int32_t edx_7 = *(eax_21 + 0x9c)
            int32_t var_5e10_1
            
            if ((edx_7 & 0x40000) == 0)
                var_5e10_1 = 1
                int32_t var_5e0c_1 = esi_3
            else if (*(eax_21 + 0x98) != 0 || edx_7 != 0x40000)
                var_5e10_1 = 3
                int32_t var_5e0c_3 = esi_3
                void* eax_31 = sub_571b30(esi_3, 0x18)
                int32_t var_5e08_3 = *(eax_31 + 0x98)
                int32_t var_5e04_1 = *(eax_31 + 0x9c) & 0xfffbffff
            else
                uint32_t eax_29 = esi_3 - 0x1400
                var_5e10_1 = 2
                int32_t var_5e0c_2 = esi_3
                
                if (eax_29 u> 0x16)
                label_5f5e9f:
                    sub_63b870(eax_29, &data_801800, "Halt", 
                        "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x7e58, "MakeKingdomEntry")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                eax_29 = zx.d(lookup_table_5f5ec4[eax_29])
                
                switch (eax_29)
                    case 0
                        int32_t var_5e08_1 = esi_3 - 0x13fe
                    case 1
                        int32_t var_5e08_2 = 0x12
                    case 2
                        goto label_5f5e9f
            
            int128_t* eax_34 = var_5e00
            edi_1 += 1
            *eax_34 = var_5e10_1.o
            var_5e00 = &eax_34[1]
        while (edi_1 s< result_1)
    
    int32_t var_14_2 = 0xffffffff
    `eh vector vbase constructor iterator'(&var_5de8, 0x10, 0x3e8, sub_4ab280)
    result = result_1
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result

// 函数: sub_520350
// 地址: 0x520350
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t edi
int32_t var_cb8 = edi
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 2, 0, 0)
void* eax_3 = sub_573400()
int32_t ecx_1 = *(eax_3 + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax_3, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_4 = *(eax_3 + 4)
int32_t ecx_2 = ecx_1 * 0x5a30
*(ecx_2 + eax_4 + 0x17558) |= 2
int32_t var_c98[0x320]
memset(&var_c98, 0, 0xc84)
int32_t esi = sub_566920(edi)
void* var_18

if (esi != 0)
    while (true)
        uint32_t edi_1 = zx.d(esi.w)
        void* ebx_1 = *(sub_573400() + 4)
        
        if (edi_1 u>= 0x320)
            sub_591930()
        
        int32_t eax_7 = edi_1 * 0x64
        
        if (sub_5754f0(eax_7, *(eax_7 + ebx_1 + 0x1a4c), ebx_1, 4, 0) == 0)
            void* eax_9 = sub_573400()
            void* ebx_2 = *(eax_9 + 4)
            
            if (edi_1 u>= 0x320)
                eax_9 = sub_591930()
            
            if (sub_5754f0(eax_9, *(eax_7 + ebx_2 + 0x1a4c), ebx_2, 2, 0) == 0)
                void* eax_11 = var_18
                
                if (eax_11 s>= 0x320)
                    sub_591930()
                    eax_11 = var_18
                
                var_c98[eax_11] = esi
                var_18 += 1
                esi = sub_566920(edi_1)
                
                if (esi == 0)
                    break
                
                continue
        
        int32_t eax_19 = *(*(sub_573400() + 4) + 0x1504)
        
        if (eax_19 != 3 && eax_19 != 5 && eax_19 != 4 && eax_19 != 6)
            sub_61b1b0(eax_19, 7, eax_19 == 2, 0xffffffff, 0, 1, nullptr, nullptr, nullptr, 0, 0, 
                0, 0, 0)
        
        void* var_ca0_1 = nullptr
        void* var_ca4_1 = nullptr
        void* eax_20 = sub_573400()
        int32_t eax_21 = *(eax_20 + 4)
        
        if (edi_1 u>= 0x320)
            sub_591930()
        
        sub_582d10(eax_7, *(eax_7 + eax_21 + 0x1a70), *(eax_20 + 4), esi, 0x3ee, 0xb, 0x3ea, 3, 
            *(eax_20 + 0x28), *(eax_20 + 0x2c), *(eax_20 + 0x30), 0, 0, nullptr, 0, var_ca0_1, 
            var_ca4_1)
        goto label_5204d2

if (var_18 s> 0)
    int32_t eax_15 = *(*(sub_573400() + 4) + 0x1504)
    
    if (eax_15 != 3 && eax_15 != 5 && eax_15 != 4 && eax_15 != 6)
        sub_61b1b0(eax_15, 7, eax_15 == 2, 0xffffffff, 0, 1, nullptr, nullptr, nullptr, 0, 0, 0, 0, 
            0)

label_5204d2:
void* eax_16 = sub_573400()
*(eax_16 + 0xc)
*(eax_16 + 4)
uint32_t result = sub_582eb0(&var_c98, var_18, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)
CookieCheckFunction(result)
return result

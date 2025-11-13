// 函数: sub_51fda0
// 地址: 0x51fda0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t edi
int32_t var_cb8 = edi
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
        
        int32_t eax_4 = edi_1 * 0x64
        
        if (sub_5754f0(eax_4, *(eax_4 + ebx_1 + 0x1a4c), ebx_1, 0x10, 0) == 0)
            void* eax_6 = sub_573400()
            void* ebx_2 = *(eax_6 + 4)
            
            if (edi_1 u>= 0x320)
                eax_6 = sub_591930()
            
            if (sub_5754f0(eax_6, *(eax_4 + ebx_2 + 0x1a4c), ebx_2, 8, 0) == 0)
                void* eax_8 = var_18
                
                if (eax_8 s>= 0x320)
                    sub_591930()
                    eax_8 = var_18
                
                var_c98[eax_8] = esi
                var_18 += 1
                esi = sub_566920(edi_1)
                
                if (esi == 0)
                    break
                
                continue
        
        int32_t eax_12 = *(*(sub_573400() + 4) + 0x1504)
        
        if (eax_12 != 3 && eax_12 != 5 && eax_12 != 4 && eax_12 != 6)
            sub_61b1b0(eax_12, 7, eax_12 == 2, 0xffffffff, 0, 1, nullptr, nullptr, nullptr, 0, 0, 
                0, 0, 0)
        
        void* var_ca0_1 = nullptr
        void* var_ca4_1 = nullptr
        void* eax_13 = sub_573400()
        int32_t eax_14 = *(eax_13 + 4)
        
        if (edi_1 u>= 0x320)
            sub_591930()
        
        sub_582d10(eax_4, *(eax_4 + eax_14 + 0x1a70), *(eax_13 + 4), esi, 0x3ee, 0xb, 0x3eb, 2, 
            *(eax_13 + 0x28), *(eax_13 + 0x2c), *(eax_13 + 0x30), 0, 0, nullptr, 0, var_ca0_1, 
            var_ca4_1)
        break

if (var_18 != 0)
    int32_t eax_18 = *(*(sub_573400() + 4) + 0x1504)
    
    if (eax_18 != 3 && eax_18 != 5 && eax_18 != 4 && eax_18 != 6)
        sub_61b1b0(eax_18, 7, eax_18 == 2, 0xffffffff, 0, 1, nullptr, nullptr, nullptr, 0, 0, 0, 0, 
            0)

void* eax_19 = sub_573400()
*(eax_19 + 0xc)
*(eax_19 + 4)
uint32_t result = sub_582eb0(&var_c98, var_18, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)
CookieCheckFunction(result)
return result

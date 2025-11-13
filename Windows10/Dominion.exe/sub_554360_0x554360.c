// 函数: sub_554360
// 地址: 0x554360
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi
int32_t var_cc0 = edi
int32_t var_cb4
sub_561af0(__security_cookie ^ &var_cb4, 0, 1, 0)
int32_t var_c98[0x320]
memset(&var_c98, 0, 0xc84)
void* var_18
uint32_t edi_1

for (int32_t i = sub_566920(edi); i != 0; i = sub_566920(edi_1))
    edi_1 = zx.d(i.w)
    void* ebx_1 = *(sub_573400() + 4)
    
    if (edi_1 u>= 0x320)
        sub_591930()
    
    int32_t eax_4 = edi_1 * 0x64
    var_cb4 = eax_4
    
    if (sub_5754f0(eax_4, *(eax_4 + ebx_1 + 0x1a4c), ebx_1, 2, 0) != 0)
        int32_t eax_12 = *(*(sub_573400() + 4) + 0x1504)
        
        if (eax_12 != 3 && eax_12 != 5 && eax_12 != 4 && eax_12 != 6)
            sub_61b1b0(eax_12, 7, eax_12 == 2, 0xffffffff, 0, 1, nullptr, nullptr, nullptr, 0, 0, 
                0, 0, 0)
        
        void* eax_13 = sub_573400()
        *(eax_13 + 0xc)
        *(eax_13 + 4)
        sub_582eb0(&var_c98, var_18, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)
        void* eax_14 = sub_573400()
        int32_t* ebx_2 = *(eax_14 + 4)
        uint32_t eax_15 = *(eax_14 + 0xc)
        
        if (edi_1 u>= 0x320)
            sub_591930()
        
        var_cb4.q = 0
        int32_t var_ca4 = *(var_cb4 + ebx_2 + 0x1a54)
        int32_t i_1 = i
        int64_t var_ca0 = 0
        void* eax_19 = sub_586320(&i_1, eax_15, ebx_2, &i_1, &var_ca0, &var_cb4, 0x10)
        CookieCheckFunction(eax_19)
        return eax_19
    
    void* eax_6 = var_18
    
    if (eax_6 s>= 0x320)
        sub_591930()
        eax_6 = var_18
    
    var_c98[eax_6] = i
    var_18 += 1

void* eax_8 = sub_573400()
*(eax_8 + 0xc)
*(eax_8 + 4)
uint32_t eax_9 = sub_582eb0(&var_c98, var_18, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)
CookieCheckFunction(eax_9)
return eax_9

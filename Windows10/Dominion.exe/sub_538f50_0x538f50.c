// 函数: sub_538f50
// 地址: 0x538f50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t edi
int32_t var_cd0 = edi
void* var_20 = nullptr

while (true)
    uint32_t result
    int32_t ecx_1
    int32_t edx_2
    result, ecx_1, edx_2 = sub_566920(edi)
    
    if (result == 0)
        if (var_20 == 0)
            CookieCheckFunction(result)
            return result
        
        int32_t eax_13 = *(*(sub_573400() + 4) + 0x1504)
        
        if (eax_13 != 3 && eax_13 != 5 && eax_13 != 4 && eax_13 != 6)
            sub_61b1b0(eax_13, 7, eax_13 == 2, 0xffffffff, 0, 1, nullptr, nullptr, nullptr, 0, 0, 
                0, 0, 0)
        
        goto label_5390ff
    
    int32_t var_cd4_1 = ecx_1
    int32_t var_ca0[0x320]
    
    if (sub_568530(result, edx_2, result.w, 3) != 0)
        void* eax_6 = *(*(sub_573400() + 4) + 0x1504)
        
        if (eax_6 != 3 && eax_6 != 5 && eax_6 != 4 && eax_6 != 6)
            eax_6 = sub_61b1b0(eax_6, 7, eax_6 == 2, 0xffffffff, 0, 1, nullptr, nullptr, nullptr, 
                0, 0, 0, 0, 0)
        
        sub_562400(eax_6, 0x3ee, result, 0)
        void* eax_7 = sub_573400()
        uint32_t esi_2 = zx.d(result.w)
        int32_t ecx_5 = *(eax_7 + 0xc)
        void* edi_1 = *(eax_7 + 4)
        int32_t var_cc4 = ecx_5
        
        if (esi_2 u>= 0x320)
            sub_591930()
            ecx_5 = var_cc4
        
        int32_t eax_8 = esi_2 * 0x64
        sub_576e90(eax_8, edi_1, &var_cc4, ecx_5, *(eax_8 + edi_1 + 0x1a4c), 0)
        int32_t esi_3 = var_cc4
        uint32_t var_cc0[0x8]
        
        if ((*sub_576c00(&var_cc0, esi_3)).d s>= 2)
            int32_t var_cd4_4 = esi_3 - 2
            sub_5652d0(esi_3 - 2)
        else
            int32_t var_cd4_3 = 0xffffffff
            sub_5652d0(0xffffffff)
        
    label_5390ff:
        void* eax_14 = sub_573400()
        *(eax_14 + 0xc)
        *(eax_14 + 4)
        result = sub_582eb0(&var_ca0, var_20, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)
        CookieCheckFunction(result)
        return result
    
    void* eax_3 = var_20
    
    if (eax_3 s>= 0x320)
        sub_591930()
        eax_3 = var_20
    
    var_ca0[eax_3] = result
    var_20 += 1

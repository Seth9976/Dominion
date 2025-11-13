// 函数: sub_55bfa0
// 地址: 0x55bfa0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
void* eax = sub_573400()

if (*(eax + 0x40) == 0)
    sub_591930()

uint32_t esi_2 = zx.d((*(eax + 0x40)).w)
int32_t edi = *(sub_573400() + 4)

if (esi_2 u>= 0x320)
    sub_591930()

int32_t edi_1 = *(esi_2 * 0x64 + edi + 0x1a4c)
void* eax_3 = sub_573400()
void* esi_3 = *(eax_3 + 4)
int32_t* result = sub_57da30(esi_3, edi_1)
int32_t ecx_2 = 7
void* esi_4 = esi_3 + 0x1594
int32_t i

while (true)
    i = *esi_4
    
    if (i == edi_1)
        break
    
    if (*(esi_4 + 4) == edi_1)
        break
    
    if (i == result)
        break
    
    ecx_2 += 1
    esi_4 += 0x10
    
    if (ecx_2 s>= 0x48)
        return result

if (i != 0)
    void* esi_5 = 7
    result = *(eax_3 + 4) + 0x1594
    
    while (*result != i)
        if (result[1] == i)
            break
        
        esi_5 += 1
        result = &result[4]
        
        if (esi_5 s>= 0x48)
            esi_5 = nullptr
            break
    
    if (esi_5 != 0)
        void* eax_5
        int32_t edx_1
        eax_5, edx_1 = sub_573400()
        int32_t* result_1 = sub_583f70(eax_5, edx_1, *(eax_5 + 4), 0xc00, esi_5)
        void* eax_7 = sub_573400()
        
        if (result_1 == 0)
            int32_t var_1c_6 = 0x10
            int32_t var_20_3 = *(eax_7 + 0xc)
            int32_t var_24_3 = 0
            return sub_571fa0(eax_7, 0xffffffff, *(eax_7 + 4), 0xc00, 2, esi_5, nullptr)
        
        void* eax_8
        int32_t edx_2
        eax_8, edx_2 = sub_573400()
        
        if (result_1 s< sub_583f70(eax_8, edx_2, *(eax_8 + 4), 0xc00, esi_5))
        label_55c0b3:
            uint32_t eax_11 = *(eax_7 + 0xc)
            int32_t* ebx_2 = *(eax_7 + 4)
            
            if (esi_5 - 7 u> 0x40)
                sub_591930()
            
            int32_t var_1c_4 = 0
            int32_t var_20_1 = 0xffffffff
            int32_t var_24_1 = 0
            int32_t eax_14 = neg.d(result_1)
            sub_571fa0(eax_14, 0xffffffff, ebx_2, 0xc00, eax_14, esi_5, nullptr)
            int32_t var_1c_5 = 0
            uint32_t var_20_2 = eax_11
            int32_t var_24_2 = 0
            return sub_571fa0(eax_11, eax_11, ebx_2, 0xc00, result_1, 0x3f1, nullptr)
        
        void* eax_10
        int32_t edx_3
        eax_10, edx_3 = sub_573400()
        result = sub_583f70(eax_10, edx_3, *(eax_10 + 4), 0xc00, esi_5)
        result_1 = result
        
        if (result_1 != 0)
            goto label_55c0b3

return result

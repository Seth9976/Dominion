// 函数: sub_530820
// 地址: 0x530820
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = sub_563590(0x101)

if (result != 0)
    void* eax = sub_573400()
    result = sub_583720(eax, *(eax + 0xc), *(eax + 4), result, 0x476, nullptr, 0x476, 0, 0, 4)
    
    if (result.b != 0)
        void* eax_1 = sub_573400()
        void* esi_1 = *(eax_1 + 4)
        int32_t eax_2 = sub_57da30(esi_1, 0xc1c)
        int32_t edx_2 = 7
        void* esi_2 = esi_1 + 0x1594
        void* i
        
        while (true)
            int32_t ecx_3 = *esi_2
            
            if (ecx_3 != 0xc1c)
                if (*(esi_2 + 4) != 0xc1c && ecx_3 != eax_2)
                    edx_2 += 1
                    esi_2 += 0x10
                    
                    if (edx_2 s>= 0x48)
                        break
                    
                    continue
                
                if (ecx_3 == 0)
                    break
            
            i = 7
            int32_t* eax_4 = *(eax_1 + 4) + 0x1594
            
            do
                if (*eax_4 == ecx_3)
                    goto label_5308cc
                
                if (eax_4[1] == ecx_3)
                    goto label_5308cc
                
                i += 1
                eax_4 = &eax_4[4]
            while (i s< 0x48)
            
            break
        
        i = nullptr
    label_5308cc:
        void* eax_5
        int32_t edx_3
        eax_5, edx_3 = sub_573400()
        int32_t eax_6 = sub_583f70(eax_5, edx_3, *(eax_5 + 4), 0x601, i)
        result = sub_56cae0(eax_6, 0x3f1, i, 0x601, eax_6)
        
        if (eax_6 s> 0)
            return sub_56e9c0(1) __tailcall

return result

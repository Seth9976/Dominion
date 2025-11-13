// 函数: sub_75a730
// 地址: 0x75a730
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* ebx = arg1
uint32_t result = 0
int32_t ecx = 0
void* var_70 = ebx
int32_t i = 0
uint32_t result_1 = 0
*(ebx + 0x1cdc0) = 0

if (*(ebx + 0x1c) u> 0)
    void* edi_1 = ebx + 0x1bdbc
    void* eax_2 = ebx + 0x1bdb8
    void* esi_1 = ebx + 0x50
    
    do
        ebx = var_70
        
        if (*esi_1 != 0)
            char ebx_2 = (*(*esi_1 + 0x10)).b
            ebx = var_70
            
            if ((ebx_2 & 0x24) == 0 || (ebx_2 & 0x80) != 0)
                ecx += 1
                *(eax_2 + 4) = i
                
                if ((*(*esi_1 + 0x10) & 0x80) != 0)
                    result_1 += 1
                    *(eax_2 + 4) = *edi_1
                    ebx = var_70
                    *edi_1 = i
                    edi_1 += 4
                
                eax_2 += 4
        
        i += 1
        esi_1 += 4
    while (i u< *(ebx + 0x1c))
    
    result = result_1

int32_t edx = *(ebx + 0x18)

if (ecx u> edx)
    *(ebx + 0x1cdbc) = edx
    
    if (result u< edx)
        int32_t i_3 = 0
        int32_t edi_2 = 0
        void* esi_3 = ebx + ((result + 0x6f6f) << 2)
        int32_t i_1 = ecx - result
        
        while (true)
            int32_t i_5 = i_3
            int32_t var_68[0x18]
            
            if (i_3 + 1 s< i_1)
                int32_t eax_7 = i_3 - 1
                
                do
                    if (edi_2 == 0x18)
                        i_1 = var_68[0]
                    
                    int32_t i_4 = i_1
                    int32_t ecx_4 = 0
                    
                    if (edi_2 != 0x18)
                        ecx_4 = edi_2
                    
                    void* eax_10 = *(ebx + (*(esi_3 + (i_5 << 2)) << 2) + 0x50)
                    var_68[ecx_4] = i_4
                    int32_t j = *(eax_10 + 0x3c)
                    int32_t ecx_6 = eax_7
                    int32_t i_2
                    
                    while (true)
                        int32_t edi_3 = *(esi_3 + (ecx_6 << 2) + 4)
                        ecx_6 += 1
                        
                        if (not(*(*(ebx + (edi_3 << 2) + 0x50) + 0x3c) f> j))
                            int32_t ebx_4
                            
                            do
                                ebx_4 = *(esi_3 + (i_4 << 2) - 4)
                                i_2 = i_4
                                i_4 -= 1
                            while (j f> *(*(var_70 + (ebx_4 << 2) + 0x50) + 0x3c))
                            
                            int32_t edi_5 = *(esi_3 + (ecx_6 << 2))
                            
                            if (ecx_6 s>= i_4)
                                break
                            
                            *(esi_3 + (ecx_6 << 2)) = ebx_4
                            ebx = var_70
                            *(esi_3 + (i_4 << 2)) = edi_5
                    
                    i_3 = i_5
                    i_1 = i_2
                    ebx = var_70
                    edi_2 = ecx_4 + 1
                while (i_3 + 1 s< i_1)
            
            if (edi_2 == 0)
                break
            
            if (i_3 s>= edx)
                break
            
            edi_2 -= 1
            i_3 = i_1
            i_1 = var_68[edi_2]
        
        result = sub_75aec0(ebx)
else
    *(ebx + 0x1cdbc) = ecx
    result = sub_75aec0(ebx)

CookieCheckFunction(result)
return result

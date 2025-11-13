// 函数: sub_58b620
// 地址: 0x58b620
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_4 = arg1
int32_t eax = *(arg1 + 0x1504)

if ((eax == 4 || eax == 3)
        && (*(arg1 + 0x1a04) != 0 || *(arg1 + 0x19dc) s> 0x3e8 || *(arg1 + 0x19e4) s> 0xbb8))
    return 8

if (*(arg1 + 0x19dc) s>= 0x64)
    return 7

int32_t i = 7
void* eax_2 = arg1 + 0x1594

do
    if (*eax_2 == 0x601)
        if (sub_58b5c0(arg1, 0x601) != 0)
            return 1
        
        break
    
    i += 1
    eax_2 += 0x10
while (i s< 0x21)

if (sub_58b5c0(arg1, 0x103) != 0)
    return 2

int32_t edx = 0
void* eax_7 = arg1 + 0x1594
int32_t i_1 = 7

if (*(arg1 + 0xd38) s< 5)
    do
        if (*eax_7 != 0 && *(eax_7 + 8) == 0)
            edx += 1
        
        i_1 += 1
        eax_7 += 0x10
    while (i_1 s< 0x21)
    
    if (edx s>= 3)
        int32_t ecx_7 = 0
        void* eax_10 = arg1 + 0x1594
        
        for (int32_t i_2 = 7; i_2 s< 0x21; )
            int32_t esi_2 = *eax_10
            
            if (esi_2 != 0 && *(eax_10 + 8) == 0)
                *(arg2 + (ecx_7 << 2)) = esi_2
                ecx_7 += 1
                
                if (ecx_7 == 3)
                    break
            
            i_2 += 1
            eax_10 += 0x10
        
        return 3
else
    do
        if (*eax_7 != 0 && *(eax_7 + 8) == 0)
            edx += 1
        
        i_1 += 1
        eax_7 += 0x10
    while (i_1 s< 0x21)
    
    if (edx s>= 4)
        int32_t ecx_5 = 0
        void* eax_8 = arg1 + 0x1594
        
        for (int32_t i_3 = 7; i_3 s< 0x21; )
            int32_t esi_1 = *eax_8
            
            if (esi_1 != 0 && *(eax_8 + 8) == 0)
                *(arg2 + (ecx_5 << 2)) = esi_1
                ecx_5 += 1
                
                if (ecx_5 == 4)
                    break
            
            i_3 += 1
            eax_8 += 0x10
        
        return 4

return 0

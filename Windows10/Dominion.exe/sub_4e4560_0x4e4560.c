// 函数: sub_4e4560
// 地址: 0x4e4560
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t esi = 0
int32_t ebx = 0
int32_t* edi = arg1
int32_t var_ac[0x29]

while (*edi != 0)
    int32_t eax_3 = sub_4e44e0(edi)
    
    if (eax_3 != 0x13)
        int32_t ecx_1 = 0
        
        if (esi s> 0)
            do
                if (var_ac[ecx_1] == eax_3)
                    goto label_4e45b6
                
                ecx_1 += 1
            while (ecx_1 s< esi)
        
        var_ac[esi] = eax_3
        esi += 1
    
label_4e45b6:
    ebx += 1
    edi = &edi[4]
    
    if (ebx s>= 0xa)
        break

int32_t ebx_1 = 0
void* edi_2 = &arg1[0x28]

while (*edi_2 != 0)
    int32_t i = sub_4e44e0(edi_2)
    
    if (i != 0x13)
        int32_t ecx_3 = 0
        
        if (esi s<= 0)
        label_4e45f5:
            var_ac[esi] = i
            esi += 1
        else
            while (var_ac[ecx_3] != i)
                ecx_3 += 1
                
                if (ecx_3 s>= esi)
                    goto label_4e45f5
        
        if (*edi_2 == 1 && *(edi_2 + 4) == 0xf3a)
            int32_t eax_5
            char edx_1
            edx_1:eax_5 = sx.q(*(edi_2 + 0x10))
            int32_t eax_7 = (eax_5 + zx.d(edx_1)) s>> 8
            
            if (eax_7 != 0x13)
                int32_t ecx_4 = 0
                
                if (esi s> 0)
                    do
                        if (var_ac[ecx_4] == eax_7)
                            goto label_4e463b
                        
                        ecx_4 += 1
                    while (ecx_4 s< esi)
                
                var_ac[esi] = eax_7
                esi += 1
    
label_4e463b:
    ebx_1 += 1
    edi_2 += 0x48
    
    if (ebx_1 s>= 4)
        break

int32_t ebx_2 = 0
void* edi_4 = &arg1[0x70]

while (*edi_4 != 0)
    int32_t eax_8 = sub_4e44e0(edi_4)
    
    if (eax_8 != 0x13)
        int32_t ecx_6 = 0
        
        if (esi s> 0)
            do
                if (var_ac[ecx_6] == eax_8)
                    goto label_4e4686
                
                ecx_6 += 1
            while (ecx_6 s< esi)
        
        var_ac[esi] = eax_8
        esi += 1
    
label_4e4686:
    ebx_2 += 1
    edi_4 += 0x10
    
    if (ebx_2 s>= 0x6b)
        break

if (arg1[0x24] == 0)
    int32_t i_1 = 0
    void* edi_5 = &arg1[0x272]
    
    do
        int32_t j = *edi_5
        
        if (j == 0)
            break
        
        int32_t eax_10 = 0
        
        if (esi s<= 0)
        label_4e46c0:
            var_ac[esi] = j
            esi += 1
        else
            while (var_ac[eax_10] != j)
                eax_10 += 1
                
                if (eax_10 s>= esi)
                    goto label_4e46c0
        
        i_1 += 1
        edi_5 += 0x10
    while (i_1 s< 0x20)

uint32_t result = 0
int32_t edi_6 = 0

if (esi s> 0)
    do
        int32_t ecx_7 = 1
        
        for (int128_t* const i_2 = &data_77fea0; i_2 != &data_77fee8; )
            if (var_ac[edi_6] == *i_2)
                result |= ecx_7
                break
            
            i_2 += 4
            ecx_7 *= 2
        
        edi_6 += 1
    while (edi_6 s< esi)

CookieCheckFunction(result)
return result

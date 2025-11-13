// 函数: sub_7263e0
// 地址: 0x7263e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i_2 = arg1[2]
int32_t edi_1 = i_2 & 7

if (edi_1 != 0)
    if (i_2 s< edi_1)
        sub_725de0(arg1)
    
    uint32_t eax_1 = arg1[3] u>> edi_1.b
    arg1[2] -= edi_1
    arg1[3] = eax_1
    i_2 = arg1[2]

int32_t i_1 = 0
int32_t i = i_2
char var_8

if (i_2 s> 0)
    uint32_t eax_2 = arg1[3]
    int32_t ebx
    ebx.b = eax_2.b
    
    do
        (&var_8)[i_1] = ebx.b
        i -= 8
        eax_2 u>>= 8
        i_1 += 1
        arg1[3] = eax_2
        ebx.b = eax_2.b
    while (i s> 0)
    
    arg1[2] = i

if (i_2 s<= 0 || i_1 s< 4)
    int32_t edi_2 = arg1[1]
    
    do
        char* eax_3 = *arg1
        
        if (eax_3 u< edi_2)
            i.b = *eax_3
            *arg1 = &eax_3[1]
        else
            i.b = 0
        
        (&var_8)[i_1] = i.b
        i_1 += 1
    while (i_1 s< 4)

char var_7
uint32_t count = (zx.d(var_7) << 8) + zx.d(var_8)
char var_6
char var_5

if ((zx.d(var_5) << 8) + zx.d(var_6) == (count ^ 0xffff) && *arg1 + count u<= arg1[1])
    int32_t edx = arg1[4]
    void* ecx_4 = &arg1[4]
    int32_t edi_3 = arg1[6]
    var_8.d = ecx_4
    
    if (edx + count u<= edi_3)
        goto label_7264f6
    
    bool cond:0_1 = arg1[7] == 0
    *ecx_4 = edx
    
    if (not(cond:0_1))
        int32_t edx_1 = edx - arg1[5]
        uint32_t _Size = edi_3 - arg1[5]
        var_8.d = ecx_4
        int32_t eax_12 = edx_1 + count
        
        if (eax_12 s> _Size)
            do
                _Size *= 2
            while (eax_12 s> _Size)
            
            var_8.d = &arg1[4]
        
        int32_t eax_14 = realloc(arg1[5], _Size)
        
        if (eax_14 != 0)
            void* edx_2 = var_8.d
            arg1[5] = eax_14
            *edx_2 = edx_1 + eax_14
            ecx_4 = edx_2
            arg1[6] = eax_14 + _Size
        label_7264f6:
            memcpy(*ecx_4, *arg1, count)
            int32_t* edx_3 = var_8.d
            *arg1 += count
            *edx_3 += count
            return 1

return 0

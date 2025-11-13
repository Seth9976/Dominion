// 函数: sub_6f3030
// 地址: 0x6f3030
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* esi = arg1
int32_t* ecx = data_147ded0

if (ecx == 0 || ecx[1] != 0x19)
    return 

int32_t* eax = sub_5af880(ecx)

if (eax == 0)
    return 

int32_t eax_1 = sub_6eef80(esi)
int32_t eax_3 = sub_6eef80(arg2) + 1 - eax_1
int32_t eax_5
char* ecx_5
eax_5, ecx_5 = sub_6ef080(esi)
int32_t i_2 = eax_5 + 1
int32_t i_3 = i_2

if (i_2 s> 0)
    if (esi s<= arg2)
        int32_t i
        
        do
            sub_6ef000(esi, sub_6eef80(esi) + eax_3)
            
            if (esi != arg2)
                int32_t* eax_9 = sub_69dd00(data_177750c, 0)
                sub_6fb950(eax_9, eax_9, eax, esi, arg2)
                sub_6f2680(esi, arg2)
            
            i = i_2
            i_2 -= 1
        while (i != 1)
        i_2 = i_3
        goto label_6f313a
    
    void* ebx_2 = arg2 + 1 - esi
    void* var_14_1 = ebx_2
    int32_t i_1
    
    do
        ecx_5 = esi
        sub_6ef000(ecx_5, sub_6eef80(esi) + eax_3)
        void* ebx_3 = ebx_2 + esi
        
        if (esi != ebx_3)
            int32_t* eax_7 = sub_69dd00(data_177750c, 0)
            sub_6fb950(eax_7, eax_7, eax, esi, ebx_3)
            ecx_5 = sub_6f2680(esi, ebx_3)
        
        ebx_2 = var_14_1
        esi = &esi[1]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    goto label_6f315e

if (esi s<= arg2)
label_6f313a:
    ecx_5 = data_147ded0
    LRESULT eax_11 = arg2 + 1 - i_2
    
    if (ecx_5 != 0)
        ecx_5 = *(ecx_5 + 4)
        
        if (ecx_5 == 0x19)
            ecx_5 = sub_6f0170(eax_11, 0xffffffff)
        else if (ecx_5 == 0x1b)
            ecx_5 = sub_6f0970(eax_11)
else
label_6f315e:
    void* eax_12 = data_147ded0
    
    if (eax_12 != 0)
        int32_t eax_13 = *(eax_12 + 4)
        
        if (eax_13 == 0x19)
            ecx_5 = sub_6f0170(arg2 + 1, 0xffffffff)
        else if (eax_13 == 0x1b)
            ecx_5 = sub_6f0970(arg2 + 1)

sub_6ee530(ecx_5)
sub_73d740()
sub_73d5c0()

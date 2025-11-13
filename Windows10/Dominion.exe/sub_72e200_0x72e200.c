// 函数: sub_72e200
// 地址: 0x72e200
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* eax = *(arg1 + 0xa8)
void* edi = arg1 + 0xa8
void* ecx = *(arg1 + 0xac)
void* ebx = arg1 + 0x20
void* var_c = ebx
char var_5

if (eax u>= ecx)
    if (*ebx != 0)
        void* eax_3 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
        eax = arg1 + 0x28
        *edi = eax
        
        if (eax_3 != 0)
            ecx = eax_3 + 0x28 + arg1
            *(arg1 + 0xac) = ecx
        else
            *ebx = eax_3
            ecx = arg1 + 0x29
            *(arg1 + 0xac) = ecx
            *eax = 0
        
        var_c = ebx
        goto label_72e26f
    
    var_5 = 0
    var_c = ebx
label_72e291:
    
    if (*ebx == 0)
        ecx.b = 0
    else
        void* eax_7
        eax_7, ecx = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
        *edi = arg1 + 0x28
        
        if (eax_7 != 0)
            *(arg1 + 0xac) = eax_7 + 0x28 + arg1
            ecx.b = *(arg1 + 0x28)
            *edi = arg1 + 0x29
        else
            *var_c = 0
            *(arg1 + 0xac) = arg1 + 0x29
            *(arg1 + 0x28) = 0
            ecx.b = *(arg1 + 0x28)
            *edi = arg1 + 0x29
else
    ebx = arg1 + 0x20
label_72e26f:
    var_5 = *eax
    void* var_10_1 = edi
    *edi = &eax[1]
    edi = arg1 + 0xa8
    
    if (&eax[1] u>= ecx)
        goto label_72e291
    
    ecx.b = eax[1]
    *edi = &eax[2]

if (var_5 == 0x50 && (ecx.b == 0x35 || ecx.b == 0x36))
    return 1

*edi = *(arg1 + 0xb0)
*(arg1 + 0xac) = *(arg1 + 0xb4)
return 0

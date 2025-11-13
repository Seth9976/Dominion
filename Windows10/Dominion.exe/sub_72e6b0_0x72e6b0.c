// 函数: sub_72e6b0
// 地址: 0x72e6b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8
int32_t* eax = &var_8

if (arg2 != 0)
    eax = arg2

int32_t* eax_1 = arg4
int32_t* ecx = &var_8

if (eax_1 != 0)
    ecx = eax_1

int32_t* ecx_1 = &var_8
void* ebx = *(arg3 + 0xb0)

if (arg5 != 0)
    ecx_1 = arg5

void* edi = arg3 + 0xa8
void* ecx_2 = *(arg3 + 0xb4)
void* eax_3 = arg3 + 0x20
*edi = ebx
*(arg3 + 0xac) = ecx_2
arg5 = eax_3

if (ebx u< ecx_2)
label_72e74b:
    arg2.b = *ebx
    arg4:3.b = arg2.b
    var_8 = edi
    *edi = ebx + 1
    edi = arg3 + 0xa8
    var_8 = eax_3
    
    if (ebx + 1 u>= ecx_2)
        goto label_72e778
    
    ecx_2.b = *(ebx + 1)
    *edi = ebx + 2
else
    if (*eax_3 != 0)
        ebx = arg3 + 0x28
        int32_t eax_5
        eax_5, arg2 = (*(arg3 + 0x10))(*(arg3 + 0x1c), ebx, *(arg3 + 0x24))
        *edi = ebx
        
        if (eax_5 != 0)
            ecx_2 = arg3 + 0x28 + eax_5
            eax_3 = arg3 + 0x20
            *(arg3 + 0xac) = ecx_2
        else
            eax_3 = arg3 + 0x20
            ecx_2 = arg3 + 0x29
            *eax_3 = 0
            *(arg3 + 0xac) = ecx_2
            *ebx = 0
        
        arg5 = eax_3
        goto label_72e74b
    
    arg4:3.b = 0
    var_8 = eax_3
    arg5 = eax_3
label_72e778:
    
    if (*eax_3 == 0)
        ecx_2.b = 0
    else
        void* eax_8
        eax_8, ecx_2 = (*(arg3 + 0x10))(*(arg3 + 0x1c), arg3 + 0x28, *(arg3 + 0x24))
        *edi = arg3 + 0x28
        
        if (eax_8 != 0)
            *(arg3 + 0xac) = eax_8 + 0x28 + arg3
            ecx_2.b = *(arg3 + 0x28)
            *edi = arg3 + 0x29
        else
            *var_8 = 0
            *(arg3 + 0xac) = arg3 + 0x29
            *(arg3 + 0x28) = 0
            ecx_2.b = *(arg3 + 0x28)
            *edi = arg3 + 0x29

if (arg4:3.b != 0x50 || (ecx_2.b != 0x35 && ecx_2.b != 0x36))
    *edi = *(arg3 + 0xb0)
    *(arg3 + 0xac) = *(arg3 + 0xb4)
    return 0

int32_t eax_15
eax_15.b = ecx_2.b == 0x36
*ecx_1 = (eax_15 << 1) + 1
char* eax_17 = *edi
int32_t* ecx_4

if (eax_17 u< *(arg3 + 0xac))
    ecx_4.b = *eax_17
    *edi = &eax_17[1]
else if (*arg5 == 0)
    ecx_4.b = 0
else
    void* eax_21
    eax_21, ecx_4 = (*(arg3 + 0x10))(*(arg3 + 0x1c), arg3 + 0x28, *(arg3 + 0x24))
    *edi = arg3 + 0x28
    
    if (eax_21 != 0)
        *(arg3 + 0xac) = eax_21 + 0x28 + arg3
        ecx_4.b = *(arg3 + 0x28)
        *edi = arg3 + 0x29
    else
        *arg5 = 0
        *(arg3 + 0xac) = arg3 + 0x29
        *(arg3 + 0x28) = 0
        ecx_4.b = *(arg3 + 0x28)
        *edi = arg3 + 0x29

arg4:3.b = ecx_4.b
sub_72e320(arg3, &arg4:3)
*eax = sub_72e570(arg3, &arg4:3)
sub_72e320(arg3, &arg4:3)
*ecx = sub_72e570(arg3, &arg4:3)
sub_72e320(arg3, &arg4:3)
int32_t result
result.b = sub_72e570(arg3, &arg4:3) s<= 0xff
return result

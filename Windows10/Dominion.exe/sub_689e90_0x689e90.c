// 函数: sub_689e90
// 地址: 0x689e90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* edi = arg2
void** var_8 = arg1
char* eax = *edi

if (eax != 0 && eax != &data_801800)
    if (data_cf65bc != 0 && *eax != 0)
        char* eax_1 = sub_63d4e0(edi)
        int32_t temp0_1 = *(eax_1 + 4)
        *(eax_1 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_1, *(eax_1 + 0xc) + 0x10)
        
        arg1 = var_8
    
    *edi = &data_801800

char* ebx = *arg1
char* esi = ebx
arg2.b = *esi

if (arg2.b != 0)
    arg1.b = arg2.b
    
    while (true)
        void* eax_2 = &esi[1]
        
        if (arg2.b == 0xd && *eax_2 == 0xa)
            eax_2 = &esi[2]
        label_689f10:
            *var_8 = eax_2
            sub_63db30(edi, ebx, esi - ebx)
            int32_t eax_3
            eax_3.b = 1
            return eax_3
        
        if (arg1.b == 0xa)
            goto label_689f10
        
        esi = eax_2
        arg1.b = *esi
        
        if (arg1.b == 0)
            break
        
        arg2.b = arg1.b

sub_63db30(edi, ebx, esi - ebx)
int32_t eax_6
eax_6.b = 0
*var_8 = esi
return eax_6

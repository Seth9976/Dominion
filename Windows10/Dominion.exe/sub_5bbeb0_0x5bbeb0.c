// 函数: sub_5bbeb0
// 地址: 0x5bbeb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char** var_8 = arg1
char* esi = arg2
__builtin_memset(arg1, 0, 0x18)
char i

do
    i = *esi
    esi = &esi[1]
while (i != 0)
void* count = esi - &esi[1]

if (count u> 0x7fffffff)
    sub_5b0860()
    noreturn

if (count u<= 0xf)
    arg1[4] = count
    arg1[5] = 0xf
    memcpy(arg1, arg2, count)
    *(count + arg1) = 0
    return arg1

void* const ebx_2 = count | 0xf
char* eax_3
uint32_t ecx_1

if (ebx_2 u<= 0x7fffffff)
    if (ebx_2 u< 0x16)
        ebx_2 = 0x16
    
    eax_3 = ebx_2 + 1
    
    if (eax_3 != 0)
        if (eax_3 u>= 0x1000)
            ecx_1 = &eax_3[0x23]
            
            if (ecx_1 u> eax_3)
                goto label_5bbf2e
            
            sub_4f7ee0()
            noreturn
        
        eax_3 = operator new(eax_3)
else
    ebx_2 = 0x7fffffff
    ecx_1 = 0x80000023
label_5bbf2e:
    int32_t eax_1 = operator new(ecx_1)
    
    if (eax_1 == 0)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    eax_3 = (eax_1 + 0x23) & 0xffffffe0
    *(eax_3 - 4) = eax_1
*arg1 = eax_3
arg1[4] = count
arg1[5] = ebx_2
memcpy(eax_3, arg2, count)
*(eax_3 + count) = 0
return arg1

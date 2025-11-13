// 函数: sub_5be8d0
// 地址: 0x5be8d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t count = arg2[4]
char* esi = arg4
void** var_8 = arg2
char** result = arg3

do
    arg1 = *esi
    esi = &esi[1]
while (arg1 != 0)

void* count_1 = esi - &esi[1]

if (0x7fffffff - count u< count_1)
    sub_5b0860()
    noreturn

if (arg2[5] u> 0xf)
    arg2 = *arg2
    var_8 = arg2

void* eax_1 = count_1 + count
int32_t edi_1 = 0xf
void* var_10 = eax_1
char* ebx = arg3
__builtin_memset(arg3, 0, 0x18)

if (eax_1 u> 0xf)
    edi_1 = eax_1 | 0xf
    uint32_t ecx
    
    if (edi_1 u<= 0x7fffffff)
        if (edi_1 u< 0x16)
            edi_1 = 0x16
        
        if (edi_1 != 0xffffffff)
            if (edi_1 + 1 u>= 0x1000)
                ecx = edi_1 + 0x24
                
                if (ecx u> edi_1 + 1)
                    goto label_5be953
                
                sub_4f7ee0()
                noreturn
            
            ebx = operator new(edi_1 + 1)
            arg2 = var_8
            arg3 = result
        else
            ebx = nullptr
    else
        edi_1 = 0x7fffffff
        ecx = 0x80000023
    label_5be953:
        int32_t eax_2 = operator new(ecx)
        
        if (eax_2 == 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        ebx = (eax_2 + 0x23) & 0xffffffe0
        *(ebx - 4) = eax_2
        arg2 = var_8
        arg3 = result
    eax_1 = var_10
    *arg3 = ebx

arg3[5] = edi_1
arg3[4] = eax_1
memcpy(ebx, arg2, count)
memcpy(&ebx[count], arg4, count_1)
*(ebx + var_10) = 0
return result

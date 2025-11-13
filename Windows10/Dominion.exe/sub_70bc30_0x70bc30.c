// 函数: sub_70bc30
// 地址: 0x70bc30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* eax = *arg1
int32_t ebx
ebx.b = *eax
int32_t edi_1 = zx.d(ebx.b) & 0x7f
int32_t* var_8 = arg1
*arg1 = &eax[1]
int32_t* ebx_1

if (ebx.b s>= 0)
    ebx_1 = arg1
else
    arg1.b = eax[1]
    ebx_1 = var_8
    edi_1 |= (zx.d(arg1.b) & 0x7f) << 7
    *ebx_1 = &eax[2]
    
    if (arg1.b s< 0)
        arg1.b = eax[2]
        *ebx_1 = &eax[3]
        edi_1 |= (zx.d(arg1.b) & 0x7f) << 0xe
        
        if (arg1.b s< 0)
            arg1.b = eax[3]
            *ebx_1 = &eax[4]
            edi_1 |= (zx.d(arg1.b) & 0x7f) << 0x15
            
            if (arg1.b s< 0)
                arg1.b = eax[4]
                *ebx_1 = &eax[5]
                edi_1 |= zx.d(arg1.b) << 0x1c

int32_t ecx = data_147ded8
uint32_t _Size = edi_1 * 2
int32_t result

if (ecx == 0)
    result = malloc(_Size)
else
    result = ecx(_Size, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x271)

int32_t edx = 0
*arg2 = edi_1

if (edi_1 s> 0)
    do
        char* eax_14 = *ebx_1
        char ecx_1 = *eax_14
        *ebx_1 = &eax_14[1]
        *(result + (edx << 1)) = zx.w(ecx_1) << 8
        char* eax_17 = *ebx_1
        ecx_1 = *eax_17
        *ebx_1 = &eax_17[1]
        *(result + (edx << 1)) |= zx.w(ecx_1)
        edx += 1
    while (edx s< edi_1)

return result

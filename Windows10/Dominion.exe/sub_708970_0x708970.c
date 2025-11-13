// 函数: sub_708970
// 地址: 0x708970
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
int32_t* edx = arg1
char* eax = *edx
int32_t ebx
ebx.b = *eax
int32_t edi_1 = zx.d(ebx.b) & 0x7f
*edx = &eax[1]

if (ebx.b s< 0)
    arg1.b = eax[1]
    *edx = &eax[2]
    edi_1 |= (zx.d(arg1.b) & 0x7f) << 7
    
    if (arg1.b s< 0)
        arg1.b = eax[2]
        *edx = &eax[3]
        edi_1 |= (zx.d(arg1.b) & 0x7f) << 0xe
        
        if (arg1.b s< 0)
            arg1.b = eax[3]
            *edx = &eax[4]
            edi_1 |= (zx.d(arg1.b) & 0x7f) << 0x15
            
            if (arg1.b s< 0)
                arg1.b = eax[4]
                *edx = &eax[5]
                edi_1 |= zx.d(arg1.b) << 0x1c

if (edi_1 != 0)
    return *(*(arg2 + 0x1c) + (edi_1 << 2) - 4)

return 0

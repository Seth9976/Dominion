// 函数: sub_6d17c0
// 地址: 0x6d17c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* ebx = arg5
uint32_t esi = arg6
uint32_t edx = esi

if (esi s>= 0)
    edx = 0

char eax

if (edx s< esi)
    eax = ebx[edx]
    edx += 1
else
    eax = 0

uint32_t ecx = zx.d(eax)

if (edx s< esi)
    eax = ebx[edx]
    edx += 1
else
    eax = 0

uint32_t eax_1

if (edx s< esi)
    eax_1.b = ebx[edx]
    edx += 1
else
    eax_1.b = 0

uint32_t i_3 = zx.d(eax_1.b)
uint32_t i_4 = i_3
uint32_t ecx_5 = i_3 * arg3 + edx

if (ecx_5 s> esi || ecx_5 s< 0)
    ecx_5 = esi

int32_t edi_1 = 0
uint32_t i_2

if (i_3 == 0)
    i_2 = 0
    edi_1 = 0
else
    i_2 = i_3
    uint32_t i
    
    do
        if (ecx_5 s< esi)
            i_3.b = ebx[ecx_5]
            ecx_5 += 1
        else
            i_3.b = 0
        
        edi_1 = edi_1 << 8 | zx.d(i_3.b)
        i = i_2
        i_2 -= 1
    while (i != 1)
    arg6 = i_4
    uint32_t i_1
    
    do
        uint32_t eax_2
        
        if (ecx_5 s< esi)
            eax_2.b = ebx[ecx_5]
            ecx_5 += 1
        else
            eax_2.b = 0
        
        i_2 = i_2 << 8 | zx.d(eax_2.b)
        i_1 = arg6
        arg6 -= 1
    while (i_1 != 1)

int32_t edx_2 = i_2 - edi_1
arg5 = nullptr
int32_t ecx_6 = 0
int32_t arg_c = 0
void* eax_7 = ((ecx << 8 | zx.d(eax)) + 1) * i_4 + 2 + edi_1

if (((ecx << 8 | zx.d(eax)) + 1) * i_4 + 2 + edi_1 s>= 0 && edx_2 s>= 0 && eax_7 s<= esi
        && edx_2 s<= esi - eax_7)
    ecx_6 = edx_2
    arg5 = eax_7 + ebx

*arg4 = arg5.q
arg4[1].d = ecx_6
return arg4

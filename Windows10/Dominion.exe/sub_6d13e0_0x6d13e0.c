// 函数: sub_6d13e0
// 地址: 0x6d13e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* ebx = arg3[1]
void* esi = arg3[2]
uint32_t ecx
char* edx

if (ebx s< esi)
    edx = &ebx[1]
    arg1.b = ebx[*arg3]
    arg3[1] = edx
    ecx = zx.d(arg1.b)
    
    if (edx s< esi)
        arg1.b = edx[*arg3]
        edx = &edx[1]
        arg3[1] = edx
    else
        arg1.b = 0
else
    ecx = 0
    edx = ebx
    arg1.b = 0

int32_t ecx_2 = ecx << 8 | zx.d(arg1.b)

if (ecx_2 != 0)
    uint32_t eax
    
    if (edx s< esi)
        eax.b = edx[*arg3]
        edx = &edx[1]
    else
        eax.b = 0
    
    uint32_t eax_1 = zx.d(eax.b)
    uint32_t var_8_1 = eax_1
    void* ecx_4 = ecx_2 * eax_1 + edx
    
    if (ecx_4 s> esi || ecx_4 s< 0)
        ecx_4 = esi
    
    int32_t edx_1 = 0
    arg3[1] = ecx_4
    
    if (eax_1 != 0)
        bool cond:0_1
        
        do
            if (ecx_4 s< esi)
                eax_1.b = *(ecx_4 + *arg3)
                ecx_4 += 1
                arg3[1] = ecx_4
            else
                eax_1.b = 0
            
            edx_1 = edx_1 << 8 | zx.d(eax_1.b)
            cond:0_1 = var_8_1 != 1
            var_8_1 -= 1
        while (cond:0_1)
    
    edx = edx_1 - 1 + ecx_4
    
    if (edx s> esi || edx s< 0)
        edx = esi
    
    arg3[1] = edx

int32_t edx_4 = edx - ebx
void* var_14 = nullptr
int32_t ecx_5 = 0
int32_t var_10 = 0

if (ebx s>= 0 && edx_4 s>= 0 && ebx s<= esi && edx_4 s<= esi - ebx)
    ecx_5 = edx_4
    var_14 = *arg3 + ebx

*arg4 = var_14.q
arg4[1].d = ecx_5
return arg4

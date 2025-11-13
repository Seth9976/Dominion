// 函数: sub_7015e0
// 地址: 0x7015e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (*(arg1 + 0x4268) s> 0)
    return 

void* edx_1 = data_147ded4
int32_t edi_1 = *(edx_1 + 0x4058)

if (edi_1 == 0xffffffff)
    return 

uint32_t ebx_1 = arg3
char const* const var_1c_3
int32_t var_18_1
char const* const var_14_1
uint32_t eax
char* ecx

if (ebx_1 == 0)
    var_14_1 = "DataArray<struct OpenGLBufferData>::DataArrayGet"
    var_18_1 = 0x6c
    ecx = "id != DATAID_NULL"
label_701887:
    var_1c_3 = "C:\x\ax2017\Engine\DataArray.h"
label_701891:
    sub_63b870(eax, &data_801800, ecx, var_1c_3, var_18_1, var_14_1)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

eax = zx.d(ebx_1.w)

if (eax u>= *(arg1 + 0x4250))
label_70187b:
    var_14_1 = "DataArray<struct OpenGLBufferData>::DataArrayGet"
    ecx = "DataArrayTryToGet(id) != NULL"
    var_18_1 = 0x6d
    goto label_701887

eax = *(arg1 + 0x424c) + eax * 0x14c
arg3 = eax

if (*(eax + 0x148) != ebx_1)
    goto label_70187b

void* eax_2 = *eax

if (*(edx_1 + 0x409c) != eax_2)
    *(edx_1 + 0x409c) = eax_2
    (*__glewBindBuffer)(0x8892, eax_2)
    eax_2 = data_147b06c
    *(eax_2 + 0x10) += 1

void* eax_4 = sub_700ce0(eax_2.b, edi_1, arg3, arg4)

if (eax_4.b == 0)
    sub_701050(eax_4, arg5, edi_1, 0)
    
    if (arg4 == 0)
        goto label_7016dd
    
    eax = zx.d(arg4.w)
    
    if (eax u>= *(arg1 + 0x4250))
        goto label_70187b
    
    int32_t ecx_4 = eax * 0x14c
    eax = *(arg1 + 0x424c)
    
    if (*(ecx_4 + eax + 0x148) != arg4)
        goto label_70187b
    
    (*__glewBindBuffer)(0x8893, *(ecx_4 + eax))
label_7016dd:
    
    if (arg8 == 0)
        goto label_701755
    
    eax = zx.d(arg8.w)
    
    if (eax u>= *(arg1 + 0x4250))
        goto label_70187b
    
    eax = *(arg1 + 0x424c) + eax * 0x14c
    
    if (*(eax + 0x148) != arg8)
        goto label_70187b
    
    void* ecx_6 = data_147ded4
    uint32_t eax_7 = *eax
    
    if (*(ecx_6 + 0x409c) != eax_7)
        *(ecx_6 + 0x409c) = eax_7
        (*__glewBindBuffer)(0x8892, eax_7)
        eax_7 = data_147b06c
        *(eax_7 + 0x10) += 1
    
    sub_701050(eax_7, *(eax + 0xdc), edi_1, 1)
    goto label_701755

label_701755:
uint32_t mode = *((arg2 << 2) + &data_800a40)
int32_t esi_1

if (arg4 != 0)
    eax = arg2 - 1
    
    if (eax u> 4)
        var_14_1 = "OpenGLInterface::DrawPrimitive"
        var_18_1 = 0xa38
        var_1c_3 = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
        ecx = "Halt"
        goto label_701891
    
    int32_t edx_7
    
    switch (eax)
        case 0
            edx_7 = arg6
        case 1
            edx_7 = arg6 * 2
        case 2
            edx_7 = arg6 + 1
        case 3
            edx_7 = arg6 * 3
        case 4
            edx_7 = arg6 + 2
    
    eax = zx.d(arg4.w)
    
    if (eax u>= *(arg1 + 0x4250))
        goto label_70187b
    
    void* ecx_10 = eax * 0x14c + *(arg1 + 0x424c)
    
    if (*(ecx_10 + 0x148) != arg4)
        goto label_70187b
    
    esi_1 = arg9
    int32_t eax_9
    eax_9.b = *(ecx_10 + 0x13e) != 0
    
    if (esi_1 s< 1)
        int32_t ecx_12 = *(ecx_10 + 0x138)
        (*__glewDrawRangeElements)(*((arg2 << 2) + &data_800a40), ecx_12, arg7 + ecx_12, edx_7, 
            (eax_9 << 1) + 0x1403, 0)
    else
        (*__glewDrawElementsInstanced)(*((arg2 << 2) + &data_800a40), edx_7, (eax_9 << 1) + 0x1403, 
            0, esi_1)
    
    goto label_701852

esi_1 = arg9
int32_t first = *(arg3 + 0x138)

if (esi_1 s< 1)
    glDrawArrays(mode, first, arg7)
else
    (*__glewDrawArraysInstanced)(mode, first, arg7, esi_1)

label_701852:
void* ecx_15 = data_147b06c
int32_t edx_9 = 1

if (esi_1 s> 0)
    edx_9 = esi_1

*(ecx_15 + 0xc) += edx_9 * arg7
*(ecx_15 + 8) += edx_9 * arg6
*(ecx_15 + 4) += 1

// 函数: sub_4b1070
// 地址: 0x4b1070
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
void* eax = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
int32_t edx = 1
int32_t ecx_3 = 1
int32_t ebx = *(eax + 0x42c8)

if (ebx s> 1)
    ecx_3 = ebx

int32_t esi_1 = neg.d(*(eax + 0x42c4))
int32_t edi_1 = neg.d(*(eax + 0x42c0))
int32_t eax_1 = edi_1

if (edi_1 s<= esi_1)
    eax_1 = esi_1

if (ecx_3 s<= eax_1)
    edx = esi_1
    
    if (edi_1 s> esi_1)
        edx = edi_1
else if (ebx s> 1)
    edx = ebx

*(eax + 0x42c8) = edx + 1
return neg.d(edx)

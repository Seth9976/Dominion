// 函数: sub_72c860
// 地址: 0x72c860
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t ebx = zx.d(arg2)

if (*(arg1 + (ebx << 2) + 0x828) s>= 0)
    sub_72c860()

int32_t ecx = *(arg1 + 0x884c)

if (ecx s>= *(arg1 + 0x8844))
    return 

int32_t eax_2 = *(arg1 + 0x8848) + ecx
char* edi_2 = *(arg1 + 8) + eax_2
int32_t eax_3
int32_t edx_1
edx_1:eax_3 = sx.q(eax_2)
*(((eax_3 + (edx_1 & 3)) s>> 2) + *(arg1 + 0x10)) = 1
uint32_t ecx_2 = zx.d(*(arg1 + (ebx << 2) + 0x82b))
int32_t eax_6 = *(arg1 + 0x8828)
char* ecx_3 = eax_6 + (ecx_2 << 2)

if (*(eax_6 + (ecx_2 << 2) + 3) u> 0x80)
    *edi_2 = ecx_3[2]
    edi_2[1] = ecx_3[1]
    edi_2[2] = *ecx_3
    edi_2[3] = ecx_3[3]

*(arg1 + 0x8848) += 4

if (*(arg1 + 0x8848) s< *(arg1 + 0x8840))
    return 

int32_t ebx_1 = *(arg1 + 0x8844)
*(arg1 + 0x8848) = *(arg1 + 0x8838)
*(arg1 + 0x884c) += *(arg1 + 0x8830)

if (*(arg1 + 0x884c) s< ebx_1)
    return 

int32_t ecx_6

do
    int32_t edi_3 = *(arg1 + 0x882c)
    
    if (edi_3 s<= 0)
        break
    
    int32_t edx_3 = *(arg1 + 0x8850)
    *(arg1 + 0x882c) = edi_3 - 1
    int32_t edx_4 = edx_3 << edi_3.b
    int32_t ecx_5 = *(arg1 + 0x883c)
    *(arg1 + 0x8830) = edx_4
    ecx_6 = ecx_5 + (edx_4 s>> 1)
    *(arg1 + 0x884c) = ecx_6
while (ecx_6 s>= ebx_1)

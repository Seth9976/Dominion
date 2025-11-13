// 函数: sub_63eb70
// 地址: 0x63eb70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_8 = data_bf21a0

if (eax_8 u>= 0x270)
    int32_t ecx
    
    if (eax_8 == 0x271)
        sub_63eb10(ecx, 0x1571)
    int32_t i
    
    for (i = 0; i s< 0xe3; i += 1)
        int32_t ecx_1 = (&data_bf17e0)[i]
        int32_t edx_4 = ((*((i << 2) + &data_bf17e4) ^ ecx_1) & 0x7fffffff) ^ ecx_1
        (&data_bf17e0)[i] =
            *(((edx_4 & 1) << 2) + &data_871f80) ^ *((i << 2) + &data_bf1e14) ^ edx_4 u>> 1
    
    void* i_1 = &(&data_bf17e0)[i]
    int32_t edi_1 = *i_1
    
    do
        int32_t eax = edi_1
        edi_1 = *(i_1 + 4)
        int32_t ecx_10 = ((eax ^ edi_1) & 0x7fffffff) ^ eax
        *i_1 = *(((ecx_10 & 1) << 2) + &data_871f80) ^ *(i_1 - 0x38c) ^ ecx_10 u>> 1
        i_1 += 4
    while (i_1 s< &data_bf219c)
    
    int32_t ecx_14 = (data_bf219c ^ data_bf17e0) & 0x7fffffff
    data_bf21a0 = 0
    int32_t ecx_15 = ecx_14 ^ data_bf219c
    eax_8 = 0
    data_bf219c = ecx_15 u>> 1 ^ *(((ecx_15 & 1) << 2) + &data_871f80) ^ data_bf1e10

int32_t ecx_19 = (&data_bf17e0)[eax_8]
data_bf21a0 = eax_8 + 1
int32_t ecx_20 = ecx_19 ^ ecx_19 u>> 0xb
int32_t ecx_21 = ecx_20 ^ (ecx_20 & 0xff3a58ad) << 7
int32_t ecx_22 = ecx_21 ^ (ecx_21 & 0xffffdf8c) << 0xf
return ecx_22 u>> 0x12 ^ ecx_22

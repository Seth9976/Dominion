// 函数: sub_4ee340
// 地址: 0x4ee340
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg3
void* eax_1 = arg4 * 0x64 + arg3
int32_t i = *(eax_1 + 0x1a4c)
int32_t* eax_7 = *(((i s% 0x2717) << 2) + &data_1938e70)

if (eax_7 == 0)
label_4ee391:
    int32_t i_2 = i
    sub_4f7f30("Couldn't lookup %d\n")
    eax_7 = nullptr
else
    while (*eax_7 != i)
        eax_7 = eax_7[0x6e]
        
        if (eax_7 == 0)
            goto label_4ee391

int32_t result = 0
void* i_1 = arg4

if (arg4 != 0)
    do
        result += 1
        i_1 = *(i_1 * 0x64 + arg3 + 0x1aa4)
    while (i_1 != 0)
    
    if (result s> 0xc)
        result = 0xc

void* edi_2 = arg4 * 0x68 + arg2
*(edi_2 + 0x18) = *(eax_1 + 0x1a4c)
*(edi_2 + 0x1c) = eax_7[1]
*(edi_2 + 0x28) = 2

if (*(eax_1 + 0x1a50) - 0x27 u<= 0x20)
    *(edi_2 + 0x28) = 3

int32_t edx_3 = eax_7[3]
*(edi_2 + 0x20) = eax_7[2]
*(edi_2 + 0x24) = edx_3
*(edi_2 + 0x32) = result.w
*(edi_2 + 0x47) = *(eax_7 + 0x10)
*(edi_2 + 0x57) = eax_7[8]

if (sx.d(*arg2) s<= arg4)
    *arg2 = arg4.w + 1

return result

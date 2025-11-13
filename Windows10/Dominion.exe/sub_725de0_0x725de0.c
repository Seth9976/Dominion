// 函数: sub_725de0
// 地址: 0x725de0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* edx = arg1
int32_t edi = edx[1]
int32_t* i = edx[2]
int32_t result_1 = edx[3]
int32_t result

do
    char* eax_1 = *edx
    
    if (eax_1 u< edi)
        arg1.b = *eax_1
        *edx = &eax_1[1]
    else
        arg1.b = 0
    
    int32_t eax_4 = zx.d(arg1.b) << i.b
    i = &i[2]
    result = eax_4 | result_1
    edx[2] = i
    edx[3] = result
    result_1 = result
while (i s<= 0x18)

return result

// 函数: sub_5ac8c0
// 地址: 0x5ac8c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* i_1 = nullptr
int32_t result = 0
void* eax = arg1 + 0xc
int32_t result_2 = 1

for (int32_t* i = 0xc; i s< 0x10008; )
    float xmm1_1 = *(eax - 8)
    float xmm0_1 = *(i_1 + arg1)
    int32_t result_1 = result
    
    if (not(xmm1_1 <= xmm0_1))
        i_1 = 0xfffffff8 - arg1 + eax
    
    result = result_2
    
    if (xmm1_1 <= xmm0_1)
        result = result_1
    
    if (not(*(eax - 4) f<= *(i_1 + arg1)))
        result = result_2 + 1
        i_1 = 0xfffffffc - arg1 + eax
    
    if (not(*eax f<= *(i_1 + arg1)))
        result = result_2 + 2
        i_1 = i
    
    i = &i[3]
    result_2 += 3
    eax += 0xc

return result

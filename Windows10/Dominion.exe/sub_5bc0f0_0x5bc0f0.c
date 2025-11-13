// 函数: sub_5bc0f0
// 地址: 0x5bc0f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_28 = *arg2
int32_t edx_1 = *arg1
int32_t* var_38 = arg1
int32_t var_20 = *(arg2[3] + 8)
void* eax_3 = arg1[3]
int32_t var_34 = edx_1
int32_t var_2c = *(eax_3 + 8)
int32_t* var_44 = &var_34
int32_t* var_40 = &var_28
void var_11
void* var_3c = &var_11
int32_t i_1 = arg1[2]
int32_t i = i_1

if ((edx_1.b & 3) == 0)
    int32_t i_2 = neg.d(edx_1 u>> 2) & 3
    
    if (i_2 s< i_1)
        i = i_2

int32_t eax_6
int32_t edx_4
edx_4:eax_6 = sx.q(i_1 - i)
int32_t eax_8 = (eax_6 + (edx_4 & 3)) s>> 2
int32_t edi = i + (eax_8 << 2)
int32_t eax_9 = sub_5c5270(eax_8, 0, &var_44, i)

for (; i s< edi; i += 4)
    eax_9 = var_34
    *(eax_9 + (i << 2)) = *(var_28 + (i << 2))

sub_5c5270(eax_9, edi, &var_44, i_1)
return arg1

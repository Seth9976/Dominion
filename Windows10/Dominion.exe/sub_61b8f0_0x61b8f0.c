// 函数: sub_61b8f0
// 地址: 0x61b8f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
data_c23bf8 = 1
int32_t eax_2 = sub_5ddda0(arg1)
int32_t edx = *(arg1 + 0xa4)
int32_t edi = *(arg1 + 0xb4)
int32_t ecx = *(arg1 + 0xcc)
*(arg1 + 0x1b88) = eax_2
int32_t eax_3 = *(arg1 + 0xc8)
*(arg1 + 0x1be0) = edx
*(arg1 + 0x1bf0) = 0xfffffffe
*(arg1 + 0x1bf4) = edi
*(arg1 + 0x1be8) = eax_3
*(arg1 + 0x1bec) = ecx
int32_t edx_1 = edx - 0x3ee
int32_t eax_4

if (edx == 0x3ee)
    eax_4 = 0
else
    int32_t temp1_1 = edx_1
    edx_1 -= 1
    
    if (temp1_1 == 1)
        eax_4 = 1
    else
        int32_t temp2_1 = edx_1
        edx_1 -= 1
        
        eax_4 = temp2_1 == 1 ? 2 : 4

*(arg1 + 0x1bf8) = eax_4
*(arg1 + 0x1bfc) = 0xfffffffe
*(arg1 + 0x1c00) = edi
void var_50
int128_t* eax_6 = sub_5de520(&var_50, edx_1, arg1, &var_50)
int128_t var_2c = *eax_6
int128_t var_1c = eax_6[1]
sub_5cb6e0(arg1 + 0x258, &var_2c)
uint32_t result = data_b80b08

if (result == 0x33 || result == 0x101 || result == 0x34)
    result = *(arg1 + 0x1c28)
    data_b7fcf0 = result

CookieCheckFunction(result)
return result

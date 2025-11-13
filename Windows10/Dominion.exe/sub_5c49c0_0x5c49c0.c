// 函数: sub_5c49c0
// 地址: 0x5c49c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
__security_cookie
int128_t var_30 = *arg1
uint32_t result

for (uint32_t i = 2; i != 0; i u>>= 1)
    int128_t* ecx = &var_30
    uint32_t edi_1 = i
    void* edx_1 = &var_30 + (i << 2)
    uint32_t j
    
    do
        void* eax_2 = ecx
        
        if (*edx_1 f> *ecx)
            eax_2 = edx_1
        
        edx_1 += 4
        result = *eax_2
        *ecx = result
        ecx += 4
        j = edi_1
        edi_1 -= 1
    while (j != 1)

CookieCheckFunction(result)
return result

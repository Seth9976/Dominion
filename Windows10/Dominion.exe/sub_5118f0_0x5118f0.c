// 函数: sub_5118f0
// 地址: 0x5118f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
__security_cookie
int128_t var_80
__builtin_memcpy(&var_80, 
    "\x41\x1f\x00\x00\x42\x1f\x00\x00\x43\x1f\x00\x00\x44\x1f\x00\x00\x45\x1f\x00\x00\x46\x1f\x00\x00\x"
"47\x1f\x00\x00\x48\x1f\x00\x00\x49\x1f\x00\x00\x4a\x1f\x00\x00\x4b\x1f\x00\x00\x4c\x1f\x00\x00\x4d"
"1f\x00\x00\x4e\x1f\x00\x00\x4f\x1f\x00\x00\x50\x1f\x00\x00\x51\x1f\x00\x00\x52\x1f\x00\x00\x53\x1f"
"00\x00\x54\x1f\x00\x00\x55\x1f\x00\x00\x56\x1f\x00\x00\x57\x1f\x00\x00\x58\x1f\x00\x00", 
    0x60)
uint32_t eax_3 = sub_516f30(*(&var_80 + (sub_63ed10(&data_cc8de0, 0x18) << 2)))
int32_t i = 0
int32_t* ecx_1 = eax_3 + 0x274

do
    if (ecx_1[-0x9a] == 6 && *ecx_1 == 0)
        int32_t eax_4 = i * 0x26c
        int32_t edi = 0
        int32_t ecx_4 = *(eax_4 + eax_3 + 0x10)
        int32_t ecx_5 = *(eax_4 + eax_3 + 0x270)
        uint32_t j = 0
        uint32_t j_1 = 0
        
        if (ecx_5 s> 0)
            int32_t ecx_6 = data_ccb414
            int32_t edx = ecx_5
            
            while (j != 5)
                int32_t k = *(ecx_4 + (edi << 2))
                int32_t eax_6 = 0
                
                if (ecx_6 s<= 0)
                label_511a39:
                    j = j_1
                else
                    while (*((eax_6 << 2) + &data_cca794) != k)
                        eax_6 += 1
                        
                        if (eax_6 s>= ecx_6)
                            goto label_511a39_1
                    
                    if (sub_50a6a0(eax_6, edx, k, 2, 0) == 0)
                        ecx_6 = data_ccb414
                        edx = ecx_5
                    label_511a39_1:
                        j = j_1
                    else
                        sub_58ffd0(&data_cca794, k)
                        ecx_6 = data_ccb414
                        j = j_1 + 1
                        edx = ecx_5
                        j_1 = j
                
                edi += 1
                
                if (edi s>= edx)
                    break
        
        CookieCheckFunction(j)
        return j
    
    i += 1
    ecx_1 = &ecx_1[0x9b]
while (i s< 4)

CookieCheckFunction(eax_3)
return eax_3

// 函数: sub_4b97c0
// 地址: 0x4b97c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
int32_t ecx_2 = 0
int32_t* edx = *(eax_2 + 0x72f8)
int32_t* i

while (true)
    i = *edx
    
    if (i != 0)
        break
    
    ecx_2 += 1
    edx = &edx[1]
    
    if (ecx_2 u> *(eax_2 + 0x72fc))
        CookieCheckFunction(eax_2)
        return eax_2

uint32_t i_1

do
    i_1 = i[7]
    int32_t* i_2 = i
    
    if (i_1 == 0)
        int32_t edx_1 = *(eax_2 + 0x72fc)
        i_1 = ((*i s>> 4 | *i) & edx_1) + 1
        
        if (i_1 u> edx_1)
        label_4b9850:
            i = nullptr
        else
            int32_t** ecx_6 = *(eax_2 + 0x72f8) + (i_1 << 2)
            
            while (true)
                i = *ecx_6
                
                if (i != 0)
                    break
                
                i_1 += 1
                ecx_6 = &ecx_6[1]
                
                if (i_1 u> edx_1)
                    goto label_4b9850
    else
        i = i_1
    
    if (i_2[6] == 0)
        int32_t var_1c = *i_2
        void var_20
        int32_t var_18_1 = sub_4ba140(&i_2[1], &var_20)
        int32_t var_14_1 = 0xffffffff
        int32_t var_10_1 = 0xffffffff
        i_1 = sub_4bb8b0(&var_1c)
while (i != 0)

CookieCheckFunction(i_1)
return i_1

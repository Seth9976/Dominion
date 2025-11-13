// 函数: sub_6cf5a0
// 地址: 0x6cf5a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* var_34 = arg2
int32_t* var_30 = arg3
int32_t ebx
int64_t xmm0

if (*(arg2 + 0x6c) s<= *(arg2 + 0x5c))
    xmm0 = *(arg3 + 0x94)
    ebx = arg3[0x27]
else
    xmm0 = *(arg2 + 0x70)
    ebx = *(arg2 + 0x78)

uint32_t i = 0
uint32_t i_1 = 0

if (xmm0.d s> 0)
    int32_t esi_1 = xmm0:4.d
    
    do
        int32_t edi_1 = 0
        
        if (esi_1 s> 0)
            do
                int32_t esi_2 = 0
                
                if (ebx s> 0)
                    do
                        uint32_t i_2 = i
                        int32_t var_14_1 = edi_1
                        int32_t var_10_1 = esi_2
                        void* eax_5 = sub_6cded0(&i_2, arg2, arg3, &i_2)
                        sub_6d03f0(eax_5, arg4, eax_5, arg5)
                        i = i_1
                        esi_2 += 1
                        arg2 = var_34
                        arg3 = var_30
                    while (esi_2 s< ebx)
                
                esi_1 = xmm0:4.d
                edi_1 += 1
            while (edi_1 s< esi_1)
        
        i += 1
        i_1 = i
    while (i s< xmm0.d)

CookieCheckFunction(i)
return i

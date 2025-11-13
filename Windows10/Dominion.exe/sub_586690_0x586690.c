// 函数: sub_586690
// 地址: 0x586690
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t ebx = zx.d(arg2.w)
int32_t eax_2 = *arg1

if (ebx u>= 0x320)
    sub_591930()

int32_t ecx_1 = *(ebx * 0x64 + eax_2 + 0x1a4c)
int32_t eax_4 = *arg1
uint32_t eax_5 = zx.d(arg3.w)
int32_t var_10_1 = ecx_1

if (eax_5 u>= 0x320)
    sub_591930()
    ecx_1 = var_10_1

uint32_t eax_7 = *(eax_5 * 0x64 + eax_4 + 0x1a4c)

if (ecx_1 == eax_7)
    eax_7.b = arg2 s< arg3
    CookieCheckFunction(eax_7)
    return eax_7

void* eax_8 = sub_571b30(ecx_1, *(*arg1 + 0xd48))
void* eax_9 = sub_571b30(eax_7, *(*arg1 + 0xd48))
int128_t var_34
int128_t xmm0 = *sub_576c00(&var_34, *(sub_571b30(var_10_1, *(*arg1 + 0xd48)) + 0x90))
uint32_t var_5c = xmm0.d
uint32_t var_74[0x6]
int128_t xmm0_1 = *sub_576c00(&var_74, *(sub_571b30(eax_7, *(*arg1 + 0xd48)) + 0x90))
int32_t ecx_7 = xmm0_1
var_34 = xmm0_1
uint32_t eax_14

if (var_5c s>= ecx_7)
    int32_t ebx_2 = xmm0:0xc.d
    eax_14 = xmm0:8.d
    int32_t edx_9 = xmm0:4.d
    int32_t ecx_8 = var_34:8.d
    int32_t esi_1 = var_34:4.d
    
    if (var_5c s> ecx_7)
    label_5867e1:
        
        if (var_5c s<= ecx_7)
            if (edx_9 s< esi_1)
            label_5867fd:
                char* eax_16 = *(eax_9 + 0x58)
                char* ecx_10 = *(eax_8 + 0x58)
                
                while (true)
                    edx_9.b = *ecx_10
                    char temp1_1 = *eax_16
                    bool c_1 = edx_9.b u< temp1_1
                    
                    if (edx_9.b == temp1_1)
                        if (edx_9.b == 0)
                            break
                        
                        edx_9.b = ecx_10[1]
                        char temp2_1 = eax_16[1]
                        c_1 = edx_9.b u< temp2_1
                        
                        if (edx_9.b == temp2_1)
                            ecx_10 = &ecx_10[2]
                            eax_16 = &eax_16[2]
                            
                            if (edx_9.b == 0)
                                break
                            
                            continue
                    
                    uint32_t eax_18
                    eax_18.b = (sbb.d(eax_16, eax_16, c_1) | 1) s< 0
                    CookieCheckFunction(eax_18)
                    return eax_18
                
                CookieCheckFunction(0)
                return 0
            
            if (edx_9 s<= esi_1)
                if (eax_14 s< ecx_8)
                    goto label_5867fd
                
                if (eax_14 s<= ecx_8 && (ebx_2 == 0 || var_34:0xc.d != 0))
                    goto label_5867fd
        
        eax_14.b = 0
        CookieCheckFunction(eax_14)
        return eax_14
    
    if (edx_9 s>= esi_1)
        if (edx_9 s> esi_1)
            goto label_5867e1
        
        if (eax_14 s>= ecx_8 && (eax_14 s> ecx_8 || ebx_2 != 0 || var_34:0xc.d == 0))
            goto label_5867e1

eax_14.b = 1
CookieCheckFunction(eax_14)
return eax_14

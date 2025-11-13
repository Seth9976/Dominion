// 函数: sub_4cbf00
// 地址: 0x4cbf00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = *arg1

if (result == 3)
    result = 0

int32_t* var_14
int32_t eax = sub_571bc0(result, &var_14)
int32_t* ebx = var_14
int32_t eax_1 = 0xffffffff
int32_t ecx

if (*arg1 != 3)
    ecx = 0

int32_t eax_3

if (*arg1 != 3 && eax s> 0)
    int32_t* eax_2 = ebx
    
    do
        if (*eax_2 == arg1[1])
            eax_1 = ecx
            goto label_4cbf52
        
        ecx += 1
        eax_2 = &eax_2[0x11]
    while (ecx s< eax)
    
    eax_3 = 0
    goto label_4cbf5f

label_4cbf52:
eax_3 = eax_1 + 1

if (eax_3 s< eax)
label_4cbf5f:
    void* ecx_5 = &ebx[eax_3 * 0x11 + 1]
    
    do
        int32_t edx_2 = *ecx_5
        
        if (edx_2 != 3 && edx_2 != 7)
            if (eax_3 == 0xffffffff)
                break
            
            ebx[eax_3 * 0x11]
            return result
        
        eax_3 += 1
        ecx_5 += 0x44
    while (eax_3 s< eax)

arg1[1]
return *arg1

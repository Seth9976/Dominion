// 函数: sub_4fe9d0
// 地址: 0x4fe9d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
__chkstk(0x1988)
__security_cookie
void* eax_2 = sub_573400()
int32_t edi = 0
int32_t i = 7
int32_t* ecx_1 = *(eax_2 + 4) + 0x1594
int32_t arg_cf0[0x321]

do
    int32_t eax_3 = *ecx_1
    
    if (eax_3 != 0)
        arg_cf0[edi] = eax_3
        edi += 1
    
    i += 1
    ecx_1 = &ecx_1[4]
while (i s< 0x21)

int32_t eax_4 = 0
uint32_t result_1 = 0
var_4 = 0
int32_t arg_70[0x320]

if (edi s> 0)
    do
        int32_t i_1 = arg_cf0[eax_4]
        int32_t ecx_2
        
        if (i_1 == 0)
        label_4fea62:
            ecx_2 = 0
        else
            ecx_2 = 7
            int32_t* eax_7 = *(eax_2 + 4) + 0x1594
            
            while (*eax_7 != i_1)
                if (eax_7[1] == i_1)
                    break
                
                ecx_2 += 1
                eax_7 = &eax_7[4]
                
                if (ecx_2 s>= 0x48)
                    goto label_4fea62
        
        if (sub_4fe8d0(ecx_2) != 0)
            arg_70[result_1] = i_1
            result_1 += 1
        
        eax_4 = var_4 + 1
        var_4 = eax_4
    while (eax_4 s< edi)

uint32_t eax_10 = sub_56b800()
void* eax_11
int32_t ecx_5
eax_11, ecx_5 = sub_573400()
int32_t var_1c = 0
int32_t var_20 = *(eax_11 + 0x2c)
void arg_40
int32_t* eax_12 = sub_591880(&arg_40, 0xed, ecx_5, eax_10, *(eax_11 + 0x28))
int128_t arg_8 = *eax_12
int128_t arg_18 = *(eax_12 + 0x10)
int128_t arg_28 = *(eax_12 + 0x20)
void* eax_13 = sub_573400()
int32_t* esi_2 = *(eax_13 + 4)
var_4 = *eax_13
__return_addr = *(eax_13 + 0x10)
int32_t ecx_8 = *(eax_13 + 0xc)
uint32_t result = result_1

if (result != 0)
    int32_t edx
    
    if (ecx_8 != esi_2[0x673])
        edx = ecx_8
    else
        edx = esi_2[0x674]
    
    int32_t var_1c_1 = ecx_8
    int32_t var_20_1 = 0x29
    result =
        sub_623b70(&arg_70, &var_4, esi_2, 8, ecx_8, edx, &arg_70, result, ecx_8, nullptr, &arg_8)
    
    if (result != 0)
        int32_t i_2 = arg_70[0]
        
        if (i_2 != 0)
            int32_t* ecx_10 = 7
            void* eax_16 = *(eax_2 + 4) + 0x1594
            
            while (*eax_16 != i_2)
                if (*(eax_16 + 4) == i_2)
                    break
                
                ecx_10 += 1
                eax_16 += 0x10
                
                if (ecx_10 s>= 0x48)
                    ecx_10 = nullptr
                    break
            
            sub_5937c0(eax_16, *(eax_2 + 0xc), *(eax_2 + 4), ecx_10)
            void* eax_17 = sub_573400()
            result = sub_56b800()
            int32_t ecx_13 = *(*(eax_17 + 4) + 0x1504)
            
            if (ecx_13 != 3 && ecx_13 != 5 && ecx_13 != 4 && ecx_13 != 6)
                ecx_13.b = ecx_13 == 2
                result = sub_61b1b0(result, 0x24, ecx_13.b, *(eax_17 + 0xc), result, 3, nullptr, 
                    nullptr, nullptr, 0, 0, 0, 0, 0)

CookieCheckFunction(result)
return result

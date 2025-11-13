// 函数: sub_52dbe0
// 地址: 0x52dbe0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
void* eax = sub_573400()

if (*(eax + 0x40) == 0)
    sub_591930()

uint32_t esi_2 = zx.d((*(eax + 0x40)).w)
int32_t edi = *(sub_573400() + 4)

if (esi_2 u>= 0x320)
    sub_591930()

int32_t edi_1 = *(esi_2 * 0x64 + edi + 0x1a4c)
void* eax_3 = sub_573400()
void* esi_3 = *(eax_3 + 4)
int32_t eax_4 = sub_57da30(esi_3, edi_1)
int32_t ecx_2 = 7
void* esi_4 = esi_3 + 0x1594
void* esi_5

while (true)
    int32_t i = *esi_4
    
    if (i != edi_1 && *(esi_4 + 4) != edi_1 && i != eax_4)
        ecx_2 += 1
        esi_4 += 0x10
        
        if (ecx_2 s< 0x48)
            continue
    else if (i != 0)
        esi_5 = 7
        int32_t* eax_6 = *(eax_3 + 4) + 0x1594
        
        while (*eax_6 != i)
            if (eax_6[1] == i)
                break
            
            esi_5 += 1
            eax_6 = &eax_6[4]
            
            if (esi_5 s>= 0x48)
                goto label_52dc82
        
        break
    
label_52dc82:
    esi_5 = nullptr
    break

void* eax_7
int32_t edx_1
eax_7, edx_1 = sub_573400()
int32_t* result_1 = sub_583f70(eax_7, edx_1, *(eax_7 + 4), 0xc00, esi_5)
void* eax_9 = sub_573400()
void* eax_10
int32_t edx_2
eax_10, edx_2 = sub_573400()
int32_t result = sub_583f70(eax_10, edx_2, *(eax_10 + 4), 0xc00, esi_5)

if (result_1 s>= result)
    void* eax_11
    int32_t edx_3
    eax_11, edx_3 = sub_573400()
    result = sub_583f70(eax_11, edx_3, *(eax_11 + 4), 0xc00, esi_5)
    result_1 = result

if (result_1 == 0)
    return result

uint32_t ebx_2 = *(eax_9 + 0xc)
int32_t* eax_13 = *(eax_9 + 4)

if (esi_5 - 7 u> 0x40)
    sub_591930()

int32_t var_1c_2 = 0
int32_t var_20_1 = 0xffffffff
int32_t var_24_1 = 0
int32_t eax_16 = neg.d(result_1)
int32_t var_1c_3 = 0
uint32_t var_20_2 = ebx_2
int32_t var_24_2 = 0
void var_2c
return sub_571fa0(sub_571fa0(eax_16, 0xffffffff, eax_13, 0xc00, eax_16, esi_5, nullptr, var_2c), 
    ebx_2, eax_13, 0xc00, result_1, 0x3f1, nullptr)

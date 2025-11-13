// 函数: sub_4dd660
// 地址: 0x4dd660
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_4 = sub_571b30(arg4, arg3)
int32_t edx_1 = 0
void* var_138 = eax_4
void* ecx_1 = eax_4 + 0xc8
int32_t esi_3
int32_t edi_1

while (true)
    int32_t esi_1 = *(ecx_1 - 0x20)
    int32_t var_12c
    
    if (esi_1 == 0)
        edi_1 = var_12c
    else if (esi_1 != 0xd || *ecx_1 == 0)
        edx_1 += 1
        ecx_1 += 0xb4
        
        if (edx_1 s< 8)
            continue
        else
            edi_1 = var_12c
    else
        int32_t eax_11 = edx_1 * 0xb4
        esi_3 = *(eax_11 + var_138 + 0xc0)
        edi_1 = *(eax_11 + eax_4 + 0xbc)
        
        if (esi_3 != 0)
            break
    void* esi_2 = var_138
    int32_t ecx_2 = 0
    void* eax_5 = esi_2 + 0xc4
    
    while (true)
        int32_t edx_2 = *(eax_5 - 0x1c)
        
        if (edx_2 != 0)
            if (edx_2 == 0xd && *eax_5 != 0)
                int32_t eax_12 = ecx_2 * 0xb4
                edi_1 = *(eax_12 + esi_2 + 0xbc)
                esi_3 = *(eax_12 + esi_2 + 0xc0)
                break
            
            ecx_2 += 1
            eax_5 += 0xb4
            
            if (ecx_2 s< 8)
                continue
        
        esi_3 = 0
        break
    
    break

int32_t var_108[0x3d]
memset(&var_108, 0, 0xf0)
int32_t edx_3 = 0
int32_t eax_6 = esi_3

if (arg4 != 0xd00)
    eax_6 = 0

int32_t var_144 = eax_6
int32_t (* eax_7)[0x3d] = &var_108

if (arg4 != 0xd00)
    eax_7 = nullptr

int32_t eax_8
eax_8.b = arg4 != 0xd00

if (arg4 != 0xd00)
    edx_3 = esi_3

char** ecx_4 = &var_108

if (arg4 == 0xd00)
    ecx_4 = nullptr

char* result = sub_4dd440(0, edx_3, ecx_4, arg3, arg2, arg5, eax_8, eax_7)
int32_t ecx_5 = 0

if (esi_3 s> 0)
    result = ((edi_1 + 0x1c) << 4) + arg2
    
    do
        int32_t edx_4 = var_108[ecx_5]
        
        if (edx_4 == 0)
            break
        
        int32_t var_11c_1 = edx_4
        ecx_5 += 1
        int64_t var_118_1 = 0
        *result = 1.o
        result = &result[0x10]
    while (ecx_5 s< esi_3)

CookieCheckFunction(result)
return result

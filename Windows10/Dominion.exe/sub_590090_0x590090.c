// 函数: sub_590090
// 地址: 0x590090
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ebx = arg3 + 0xc80
*(arg3 + 0x1904) = 0
void* edx = &arg2[0x272]
*ebx = 0
void* var_10 = edx
*(arg3 + 0x2588) = 0
int32_t* ecx = nullptr
*(arg3 + 0x3e8c) = 0
int32_t* eax_1 = edx

while (*eax_1 != 2)
    ecx += 1
    eax_1 = &eax_1[4]
    
    if (ecx s>= 0x20)
        int32_t var_24_1 = arg6
        sub_58d7a0(arg3 + 0xc84, 2, arg2, arg3 + 0xc84, arg3 + 0x1904, 0, 0, ecx, arg5, 0, 0)
        edx = var_10
        break

int128_t* const i = &data_77fea0
int128_t* const i_6 = &data_77fea0
int32_t* esi_2

do
    int32_t esi_1 = *i
    int32_t ecx_2 = 0
    int32_t* eax_3 = edx
    
    while (true)
        if (*eax_3 == esi_1)
            int32_t eax_5 = (ecx_2 + 0x9d) * 2
            int32_t ebx_1 = arg2[eax_5 * 2]
            int32_t eax_6 = arg2[eax_5 * 2 + 1]
            
            if (esi_1 != 0x13)
                int32_t ecx_7 = sub_4e3aa0(arg2, esi_1)
                
                if (ecx_7 == 0xffffffff)
                    ecx_7 = sub_4dc4a0(arg5, esi_1)
                
                if (ebx_1 != eax_6)
                    ebx = arg3 + 0xc80
                    esi_2 = arg2
                    sub_58d8f0(ecx_7, arg3, ebx, arg5, 0, 0, arg6)
                else
                    void* const eax_16 = 0x1904
                    
                    if (esi_1 != 2)
                        eax_16 = 0x2588
                    
                    void* const eax_18 = 0xc84
                    
                    if (esi_1 != 2)
                        eax_18 = 0x1908
                    
                    esi_2 = arg2
                    sub_58d8f0(ecx_7, eax_18 + arg3, eax_16 + arg3, arg5, 0, 0, arg6)
                    ebx = arg3 + 0xc80
                
                edx = &esi_2[0x272]
            else
                int32_t eax_7 = sub_4e3aa0(arg2, esi_1)
                int32_t var_c_2 = eax_7
                
                for (int32_t* j = &data_af3ccc; j s< &data_af9fb4; j = &j[0x1a6])
                    if ((j[4] & 0x10000) != 0 || (j[-0x23] & eax_7) == 0)
                        ebx = arg3 + 0xc80
                    else
                        int32_t ebx_2 = *j
                        char eax_8 = sub_58d710(arg2, ebx_2)
                        
                        if (eax_8 == 0)
                            int32_t k = 0
                            void* eax_10 = &arg2[0x301]
                            
                            do
                                int32_t ecx_6 = *eax_10
                                
                                if (ecx_6 == 0)
                                    break
                                
                                if (ecx_6 == ebx_2)
                                    goto label_5901e0
                                
                                k += 1
                                eax_10 += 4
                            while (k s< 0x2bc)
                        
                        if (eax_8 != 0 || arg5 s< j[-0x22] || arg5 s>= j[-0x21])
                        label_5901e0:
                            eax_7 = var_c_2
                            ebx = arg3 + 0xc80
                        else
                            *(arg3 + (*(arg3 + 0xc80) << 2)) = ebx_2
                            ebx = arg3 + 0xc80
                            *ebx += 1
                            eax_7 = var_c_2
                
                esi_2 = arg2
                edx = var_10
            
            break
        
        ecx_2 += 1
        eax_3 = &eax_3[4]
        
        if (ecx_2 s>= 0x20)
            esi_2 = arg2
            break
    
    i = i_6 + 4
    i_6 = i
while (i != &data_77fee8)

void* eax_21 = &esi_2[0x5bd]

if ((esi_2[0x5bd].b & 2) != 0)
    int32_t i_1 = 0
    
    if (*ebx s> 0)
        do
            if ((*(sub_571b30(*(arg3 + (i_1 << 2)), arg5) + 0x98) & 0x20) != 0)
                *ebx -= 1
                *(arg3 + (i_1 << 2)) = *(arg3 + (*ebx << 2))
                i_1 -= 1
            
            i_1 += 1
        while (i_1 s< *ebx)
        
        eax_21 = &arg2[0x5bd]

int32_t ebx_3

if ((esi_2[0x5bd].b & 2) == 0 || (*eax_21 & 2) == 0)
    ebx_3 = arg5
else
    ebx_3 = arg5
    int32_t i_2 = 0
    
    if (*(arg3 + 0x1904) s> 0)
        do
            if ((*(sub_571b30(*(arg3 + (i_2 << 2) + 0xc84), ebx_3) + 0x98) & 0x20) != 0)
                *(arg3 + 0x1904) -= 1
                *(arg3 + (i_2 << 2) + 0xc84) = *(arg3 + (*(arg3 + 0x1904) << 2) + 0xc84)
                i_2 -= 1
            
            i_2 += 1
        while (i_2 s< *(arg3 + 0x1904))
        
        eax_21 = &arg2[0x5bd]

if ((*eax_21 & 2) != 0)
    int32_t i_3 = 0
    
    if (*(arg3 + 0x2588) s> 0)
        do
            if ((*(sub_571b30(*(arg3 + (i_3 << 2) + 0x1908), ebx_3) + 0x98) & 0x20) != 0)
                *(arg3 + 0x2588) -= 1
                *(arg3 + (i_3 << 2) + 0x1908) = *(arg3 + (*(arg3 + 0x2588) << 2) + 0x1908)
                i_3 -= 1
            
            i_3 += 1
        while (i_3 s< *(arg3 + 0x2588))

int32_t esi_3 = 0
void* result

while (true)
    result = arg4
    int32_t edx_12 = *(result + (esi_3 << 2))
    
    if (edx_12 == 0)
        break
    
    sub_58ffd0(arg3, edx_12)
    esi_3 += 1
    
    if (esi_3 s>= 0xa)
        result = arg4
        break

int32_t i_4 = 0
int32_t* esi_4 = result + 0x28

do
    int32_t edx_13 = *esi_4
    
    if (edx_13 == 0)
        break
    
    result = sub_58ffd0(arg3, edx_13)
    i_4 += 1
    esi_4 = &esi_4[0xf]
while (i_4 s< 4)

int32_t i_7 = 0x6b
void* esi_6 = arg4 + 0x118
int32_t i_5

do
    int32_t edx_14 = *esi_6
    
    if (edx_14 != 0)
        result = sub_58ffd0(arg3, edx_14)
    
    esi_6 += 4
    i_5 = i_7
    i_7 -= 1
while (i_5 != 1)
return result

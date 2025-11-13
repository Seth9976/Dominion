// 函数: sub_714370
// 地址: 0x714370
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_2c = arg1[0x19]
arg1[0x18] = arg1[7] + arg1[1] + arg1[9] + arg1[0xb]
free(var_2c)
int32_t ecx = data_147ded8
int32_t _Size = arg1[0x18] << 3
int32_t eax_5

if (ecx == 0)
    eax_5 = malloc(_Size)
else
    eax_5 = ecx(_Size, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Skeleton.c", 0x15c)

int32_t var_2c_2 = arg1[0x1c]
arg1[0x19] = eax_5
int32_t eax_6 = arg1[1]
arg1[0x17] = 0
arg1[0x1b] = eax_6
free(var_2c_2)
int32_t ecx_1 = data_147ded8
int32_t _Size_1 = arg1[0x1b] << 2
int32_t eax_8

if (ecx_1 == 0)
    eax_8 = malloc(_Size_1)
else
    eax_8 = ecx_1(_Size_1, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Skeleton.c", 0x161)

int32_t* edx_1 = arg1
int32_t i = 0
int32_t edi = edx_1[2]
edx_1[0x1c] = eax_8
edx_1[0x1a] = 0

if (edx_1[1] s> 0)
    do
        int32_t* edx = *(edi + (i << 2))
        int32_t eax_10 = *(*edx + 0x30)
        edx[0x1a] = eax_10
        int32_t ecx_2
        ecx_2.b = eax_10 == 0
        i += 1
        edx[0x1b] = ecx_2
        edx_1 = arg1
    while (i s< edx_1[1])

void* esi = edx_1[0xd]

if (esi != 0)
    int32_t* esi_1 = *(esi + 4)
    int32_t i_1 = 0
    
    if (*esi_1 s> 0)
        do
            void* j = *(arg1[2] + (**(esi_1[2] + (i_1 << 2)) << 2))
            
            do
                *(j + 0x68) = 0
                *(j + 0x6c) = 0xffffffff
                j = *(j + 8)
            while (j != 0)
            
            i_1 += 1
        while (i_1 s< *esi_1)
    
    edx_1 = arg1

int32_t eax_14 = edx_1[8]
int32_t ebx_1 = edx_1[9]
int32_t edi_2 = edx_1[7]
int32_t eax_15 = edx_1[0xa]
int32_t eax_16 = edx_1[0xc]
int32_t eax_17 = edx_1[0xb]
int32_t result = eax_17 + ebx_1 + edi_2
int32_t esi_2 = 0
int32_t result_1 = result

while (esi_2 s< result)
    int32_t ecx_4 = 0
    
    if (edi_2 s<= 0)
    label_7144c3:
        int32_t ecx_5 = 0
        
        if (ebx_1 s<= 0)
        label_7144e2:
            int32_t eax_23 = 0
            
            if (eax_17 s<= 0)
            label_714503:
                result = result_1
                esi_2 += 1
            else
                while (true)
                    int32_t* edx_4 = *(eax_16 + (eax_23 << 2))
                    
                    if (*(*edx_4 + 4) == esi_2)
                        sub_713e20(arg1, edx_4)
                        result = result_1
                        esi_2 += 1
                        break
                    
                    eax_23 += 1
                    
                    if (eax_23 s>= eax_17)
                        goto label_714503
        else
            while (true)
                int32_t* edx_3 = *(eax_15 + (ecx_5 << 2))
                
                if (*(*edx_3 + 4) == esi_2)
                    sub_7140a0(arg1, edx_3)
                    result = result_1
                    esi_2 += 1
                    break
                
                ecx_5 += 1
                
                if (ecx_5 s>= ebx_1)
                    goto label_7144e2
    else
        while (true)
            int32_t* edx_2 = *(eax_14 + (ecx_4 << 2))
            
            if (*(*edx_2 + 4) == esi_2)
                sub_713bf0(arg1, edx_2)
                result = result_1
                esi_2 += 1
                break
            
            ecx_4 += 1
            
            if (ecx_4 s>= edi_2)
                goto label_7144c3

int32_t* edx_5 = arg1
int32_t i_2 = 0

if (edx_5[1] s> 0)
    do
        result = edx_5[2]
        void* esi_3 = *(result + (i_2 << 2))
        
        if (*(esi_3 + 0x68) == 0)
            void* edx_6 = *(esi_3 + 8)
            
            if (edx_6 != 0)
                sub_713a30(arg1, edx_6)
            
            edx_5 = arg1
            *(esi_3 + 0x68) = 1
            int32_t eax_24 = edx_5[0x18]
            
            if (edx_5[0x17] == eax_24)
                int32_t eax_25 = eax_24 * 2
                edx_5[0x18] = eax_25
                int32_t eax_27 = realloc(edx_5[0x19], eax_25 << 3)
                edx_5 = arg1
                edx_5[0x19] = eax_27
            
            int32_t ecx_12 = edx_5[0x17]
            result = edx_5[0x19]
            *(result + (ecx_12 << 3)) = 0
            *(result + (ecx_12 << 3) + 4) = esi_3
            edx_5[0x17] += 1
        
        i_2 += 1
    while (i_2 s< edx_5[1])

return result
